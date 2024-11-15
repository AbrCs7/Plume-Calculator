#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <cmath>
#include <QStack>
#include <QRegularExpression>
#include <QDebug>  // Para depuração
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ansValue = 0.0; // Inicializa ansValue com 0

    // Conectar os sinais dos botões de número, operações e ans
    connect(ui->pushButton_previos_answer, &QPushButton::clicked, this, &MainWindow::ans_pressed);
    connect(ui->actionLight, &QAction::triggered, this, &MainWindow::applyLightTheme);
    connect(ui->actionDark, &QAction::triggered, this, &MainWindow::applyDarkTheme);


    // Conectar os sinais de cada botão numérico à função de número
    connect(ui->pushButton_0, &QPushButton::clicked, this, &MainWindow::digit_pressed);
    connect(ui->pushButton_1, &QPushButton::clicked, this, &MainWindow::digit_pressed);
    connect(ui->pushButton_2, &QPushButton::clicked, this, &MainWindow::digit_pressed);
    connect(ui->pushButton_3, &QPushButton::clicked, this, &MainWindow::digit_pressed);
    connect(ui->pushButton_4, &QPushButton::clicked, this, &MainWindow::digit_pressed);
    connect(ui->pushButton_5, &QPushButton::clicked, this, &MainWindow::digit_pressed);
    connect(ui->pushButton_6, &QPushButton::clicked, this, &MainWindow::digit_pressed);
    connect(ui->pushButton_7, &QPushButton::clicked, this, &MainWindow::digit_pressed);
    connect(ui->pushButton_8, &QPushButton::clicked, this, &MainWindow::digit_pressed);
    connect(ui->pushButton_9, &QPushButton::clicked, this, &MainWindow::digit_pressed);

    // Conectar botões de operação
    connect(ui->pushButton_add, &QPushButton::clicked, this, &MainWindow::operator_pressed);
    connect(ui->pushButton_minus, &QPushButton::clicked, this, &MainWindow::operator_pressed);
    connect(ui->pushButton_multiply, &QPushButton::clicked, this, &MainWindow::operator_pressed);
    connect(ui->pushButton_divide, &QPushButton::clicked, this, &MainWindow::operator_pressed);
    connect(ui->pushButton_equals, &QPushButton::clicked, this, &MainWindow::equals_pressed);

    // Conectar botões para operações científicas
    connect(ui->pushButton_sin, &QPushButton::clicked, this, &MainWindow::scientific_operation_pressed);
    connect(ui->pushButton_cos, &QPushButton::clicked, this, &MainWindow::scientific_operation_pressed);
    connect(ui->pushButton_Log, &QPushButton::clicked, this, &MainWindow::scientific_operation_pressed);

    connect(ui->pushButton_Sqrt, &QPushButton::clicked, this, &MainWindow::scientific_operation_pressed);
    connect(ui->pushButton_squared, &QPushButton::clicked, this, &MainWindow::scientific_operation_pressed);
    connect(ui->pushButton_exponent, &QPushButton::clicked, this, &MainWindow::scientific_operation_pressed);
    connect(ui->pushButton_ln, &QPushButton::clicked, this, &MainWindow::scientific_operation_pressed);
    connect(ui->pushButton_percent, &QPushButton::clicked, this, &MainWindow::scientific_operation_pressed);
    connect(ui->pushButton_pi, &QPushButton::clicked, this, &MainWindow::scientific_operation_pressed);
    connect(ui->pushButton_Factorial, &QPushButton::clicked, this, &MainWindow::scientific_operation_pressed);
    connect(ui->pushButton_plusMinus, &QPushButton::clicked, this, &MainWindow::scientific_operation_pressed);
    connect(ui->pushButton_Power, &QPushButton::clicked, this, &MainWindow::operator_pressed);


    // Botões especiais
    connect(ui->pushButton_clear, &QPushButton::clicked, this, &MainWindow::clear_pressed);
    connect(ui->pushButton_dot, &QPushButton::clicked, this, &MainWindow::dot_pressed);

    // Inicialização das expressões e variáveis
    currentExpression = "";
    previousExpression = "";
    operationActive = false;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::operator_pressed()
{
    QPushButton *button = (QPushButton *)sender();
    QString buttonText = button->text();

    // Converte "x" ou "×" para "*"
    if (buttonText == "x" || buttonText == "×") {
        buttonText = "*";
    } else if (buttonText == "÷") {
        buttonText = "/";
    }

    if (buttonText == "^") {
        // Armazena o número atual como base para potência
        baseForPower = currentExpression.toDouble();
        currentExpression += " ^ "; // Exibe o operador na tela
        ui->label->setText(currentExpression);
        operationActive = true;
        return;
    }

    if (operationActive) {
        equals_pressed();
    }

    // Adiciona o operador à expressão atual
    currentExpression += " " + buttonText + " ";
    ui->label->setText(currentExpression);
    operationActive = true;
    qDebug() << "Operador adicionado:" << buttonText;
}

void MainWindow::equals_pressed()
{
    QString expression = currentExpression.trimmed();
    QStack<double> numbers;
    QStack<QString> operators;

    // Verifica se é uma operação de potência
    if (currentExpression.contains("^")) {
        QStringList parts = currentExpression.split(" ^ ");
        if (parts.size() == 2) {
            double exponent = parts[1].toDouble();
            double result = pow(baseForPower, exponent);

            previousExpression = QString::number(baseForPower) + " ^ " + QString::number(exponent);
            currentExpression = QString::number(result);
            ui->label_2->setText(previousExpression);
            ui->label->setText(currentExpression);
            operationActive = false;
            qDebug() << "Potência calculada:" << result;
            return;
        }
    }

    // Processa as operações normais (+, -, *, /)
    QStringList tokens = expression.split(" ", Qt::SkipEmptyParts);
    for (const QString& token : tokens) {
        if (token == "+" || token == "-" || token == "*" || token == "/") {
            while (!operators.isEmpty() && precedence(operators.top()) >= precedence(token)) {
                calculateTop(numbers, operators);
            }
            operators.push(token);
            qDebug() << "Operador empilhado:" << token;
        } else {
            numbers.push(token.toDouble());
            qDebug() << "Número empilhado:" << token;
        }
    }

    while (!operators.isEmpty()) {
        calculateTop(numbers, operators);
    }

    double result = numbers.isEmpty() ? 0 : numbers.pop();
    previousExpression = currentExpression;
    currentExpression = QString::number(result);

    ansValue = result;

    ui->label_2->setText(previousExpression);
    ui->label->setText(currentExpression);
    operationActive = false;
    qDebug() << "Resultado final:" << result;
}



void MainWindow::calculateTop(QStack<double>& numbers, QStack<QString>& operators)
{
    if (numbers.size() < 2 || operators.isEmpty()) return;

    double b = numbers.pop();
    double a = numbers.pop();
    QString op = operators.pop();

    qDebug() << "Calculando:" << a << op << b;

    if (op == "+") {
        numbers.push(a + b);
    } else if (op == "-") {
        numbers.push(a - b);
    } else if (op == "*") {
        numbers.push(a * b);
    } else if (op == "/") {
        if (b == 0) {
            ui->Error_Label->setText("Erro: Divisão por zero");
            numbers.push(a);
            return;
        }
        numbers.push(a / b);
    }
    qDebug() << "Resultado após cálculo:" << numbers.top();
}

// Atualize a função de precedência para incluir a potência
int MainWindow::precedence(const QString& op)
{
    if (op == "+" || op == "-") return 1;
    if (op == "*" || op == "/") return 2;
    if (op == "^") return 3;  // Potência com maior precedência
    return 0;
}


void MainWindow::digit_pressed()
{
    QPushButton *button = (QPushButton *)sender();
    QString buttonText = button->text();

    if (currentExpression == "0") {
        currentExpression = buttonText;
    } else {
        currentExpression += buttonText;
    }
    ui->label->setText(currentExpression);
    qDebug() << "Dígito pressionado:" << buttonText;
}

void MainWindow::clear_pressed()
{
    currentExpression = "";
    previousExpression = "";
    operationActive = false;
    ui->label->setText("0");
    ui->label_2->setText("");
    ui->Error_Label->setText("");
    qDebug() << "Calculadora limpa";
}

void MainWindow::dot_pressed()
{
    if (!currentExpression.contains(".")) {
        currentExpression += ".";
        ui->label->setText(currentExpression);
        qDebug() << "Ponto adicionado";
    }
}

void MainWindow::scientific_operation_pressed()
{
    QPushButton *button = qobject_cast<QPushButton *>(sender());
    QString buttonText = button->text();
    double operand = currentExpression.toDouble();
    double result = 0.0;

    // Verifica se a operação é trigonométrica
    bool isTrigFunction = (buttonText == "sin" || buttonText == "cos" || buttonText == "tan");

    // Somente converte para radianos se for uma função trigonométrica
    if (isTrigFunction) {
        QString angleUnit = ui->comboBox->currentText();
        if (angleUnit == "Degrees") {
            operand = qDegreesToRadians(operand); // Converte graus para radianos
        } else if (angleUnit == "Grad") {
            operand = operand * M_PI / 200.0;     // Converte gradianos para radianos
        }
    }

    // Executa a operação científica de acordo com o botão pressionado
    if (buttonText == "sin") {
        result = sin(operand);
    } else if (buttonText == "cos") {
        result = cos(operand);
    } else if (buttonText == "tan") {
        result = tan(operand);
    } else if (buttonText == "Log") {
        result = log10(operand);
    } else if (buttonText == "ln") {
        result = log(operand); // Logaritmo natural
    } else if (buttonText == "exp") {
        result = exp(operand);
    } else if (buttonText == "x²") {
        result = pow(operand, 2);
    } else if (buttonText == "√") {
        result = sqrt(operand);
    } else if (buttonText == "!") {
        result = factorial(operand);
    } else if (buttonText == "%") {
        result = operand / 100.0;
    } else if (buttonText == "+/-") {
        result = -operand;
    } else if (buttonText == "π") {
        result = M_PI;
    }

    // Atualiza ansValue com o resultado
    ansValue = result;

    // Adiciona o resultado calculado à expressão
    currentExpression = QString::number(result);
    previousExpression = buttonText + "(" + QString::number(operand) + ")";
    ui->label_2->setText(previousExpression);
    ui->label->setText(currentExpression);
    operationActive = true; // Marca que a operação foi finalizada
    qDebug() << "Operação científica:" << buttonText << "Resultado:" << result;
}




// Função auxiliar para calcular o fatorial de um número
double MainWindow::factorial(double operand)
{
    if (operand < 0 || operand != floor(operand)) {
        ui->Error_Label->setText("Erro: Fatorial de não inteiro");
        return 0;
    }
    double result = 1;
    for (int i = 1; i <= operand; ++i) {
        result *= i;
    }
    return result;
}

void MainWindow::ans_pressed()
{
    // Se a expressão estiver vazia ou com valor "0", substitui pelo valor de ans
    if (currentExpression.isEmpty() || currentExpression == "0") {
        currentExpression = QString::number(ansValue);
    }

    ui->label->setText(currentExpression);
    qDebug() << "ans inserido:" << ansValue;
}

void MainWindow::on_actionExit_triggered()
{
    close();
}


void MainWindow::showAbout()
{
    // Cria a caixa de mensagem
    QMessageBox aboutBox;
    aboutBox.setWindowTitle("Sobre Plume Calculator");
    aboutBox.setIcon(QMessageBox::NoIcon);

    // Define o texto formatado com estilos de HTML
    QString aboutText = R"(
        <div align='center' style='font-family: Arial, sans-serif;'>
            <h2 style='color: #2E86C1;'>Plume Calculator</h2>
            <p style='font-size: 14px;'><b>Desenvolvida por</b> <span style='color: #117A65;'>Abraão Rodrigues</span></p>
            <p style='font-size: 13px;'>
                <a href='https://abrportifolio.com/' style='color: #2980B9; text-decoration: none;'><b>Portfólio  |</b></a>
                &emsp;&emsp;&emsp;&emsp; <!-- Espaço equivalente a uma tabulação -->
                <a href='https://github.com/AbrCs7' style='color: #2980B9; text-decoration: none;'><b>  | GitHub</b></a>
            </p>
            <p style='font-size: 14px;'><b>Saiba mais sobre a </b> <span style='color: #8E44AD;'>Plume Design</span></p>
            <p style='font-size: 13px;'>
                <a href='https://plumedesign.online/' style='color: #2980B9; text-decoration: none;'><b>Acesse</b></a>
            </p>
            <hr style='border: none; height: 1px; background-color: #BDC3C7;'>
            <p style='font-size: 12px; color: #7F8C8D;'>© 2024 Plume Design. Todos os direitos reservados.</p>
        </div>
    )";

    // Configurações da caixa de mensagem
    aboutBox.setTextFormat(Qt::RichText); // Permite HTML para formatar o texto
    aboutBox.setText(aboutText);          // Define o texto formatado
    aboutBox.setStandardButtons(QMessageBox::Ok); // Botão para fechar

    // Exibe a caixa de mensagem
    aboutBox.exec();
}




void MainWindow::on_actionAbout_Us_triggered()
{
    showAbout();
}


void MainWindow::applyLightTheme()
{
    QString lightStyle = R"(
        QMainWindow { background-color: #FFFFFF; }
        QLabel { color: #000000; }
        QPushButton { background-color: #E0E0E0; color: #000000; border: 1px solid #B0B0B0; }
        QPushButton:hover { background-color: #D0D0D0; }
        QMenuBar { background-color: #F0F0F0; color: #000000; }
        QMenu { background-color: #FFFFFF; color: #000000; }
        QMenu::item:selected { background-color: #D0D0D0; }
    )";
    setStyleSheet(lightStyle);
}

void MainWindow::applyDarkTheme()
{
    QString darkStyle = R"(
        QMainWindow { background-color: #2E2E2E; }
        QLabel { color: #FFFFFF; }
        QPushButton { background-color: #555555; color: #FFFFFF; border: 1px solid #444444; }
        QPushButton:hover { background-color: #666666; }
        QMenuBar { background-color: #3C3C3C; color: #FFFFFF; }
        QMenu { background-color: #2E2E2E; color: #FFFFFF; }
        QMenu::item:selected { background-color: #666666; }
    )";
    setStyleSheet(darkStyle);
}


