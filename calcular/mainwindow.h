#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStack>  // Necessário para usar QStack

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    // Slots para números e operações
    void digit_pressed();                   // Para números de 0 a 9
    void operator_pressed();                // Para operadores +, -, *, /
    void scientific_operation_pressed();    // Para operações científicas (sin, cos, log, etc.)
    void dot_pressed();                     // Para o ponto decimal
    void clear_pressed();                   // Para o botão de limpar
    void equals_pressed();                  // Para calcular o resultado
    void ans_pressed();  // Slot para o botão ans
    void showAbout();
    void on_actionExit_triggered();
    void applyLightTheme();
    void applyDarkTheme();
    void on_actionAbout_Us_triggered();

private:
    Ui::MainWindow *ui;

    // Variáveis para armazenar o estado da calculadora
    QString currentExpression;     // Expressão atual a ser calculada
    QString previousExpression;    // Expressão anterior para exibição no label_2
    bool operationActive;          // Indica se uma operação está ativa para cálculo intermediário
    double baseForPower;           // Armazena a base para operações de potência (^)
    double ansValue;               // Armazena o último resultado para a função ans

    // Funções auxiliares para o cálculo de expressões
    void calculateTop(QStack<double>& numbers, QStack<QString>& operators); // Processa o topo da pilha
    int precedence(const QString& op);   // Retorna a precedência de um operador
    double factorial(double operand);    // Calcula o fatorial de um número
};

#endif // MAINWINDOW_H
