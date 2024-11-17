# Plume Calculator

<p align="center">
  <img src="https://raw.githubusercontent.com/AbrCs7/Plume-Calculator/refs/heads/main/raw/main/resources/logo.png" alt="Plume Calculator Logo" width="200"/>
</p>

### Uma calculadora científica avançada desenvolvida em Qt

## 📋 Índice

- [Sobre o Projeto](#sobre-o-projeto)
- [Funcionalidades](#funcionalidades)
- [Capturas de Tela](#capturas-de-tela)
- [Instalação](#instalação)
- [Como Usar](#como-usar)
- [Tecnologias Utilizadas](#tecnologias-utilizadas)
- [Contribuição](#contribuição)
- [Licença](#licença)
- [Contato](#contato)

## Sobre o Projeto

**Plume Calculator** é uma calculadora científica desenvolvida usando a biblioteca Qt. A aplicação suporta operações matemáticas comuns e científicas, incluindo funções trigonométricas, logaritmos, fatoriais, exponenciais, e muito mais. A calculadora também oferece suporte para diferentes modos angulares (Graus, Radianos e Gradianos) e possui um design adaptável com temas claros e escuros.

## Funcionalidades

- 🧮 **Operações básicas**: Adição, subtração, multiplicação e divisão.
- 🔢 **Operações científicas**: Seno, cosseno, tangente, logaritmo, logaritmo natural, exponencial, raiz quadrada, fatorial.
- 📐 **Modos angulares**: Suporte para Graus, Radianos e Gradianos.
- 💡 **Temas**: Modo claro e escuro para uma melhor experiência visual.
- 🖥️ **Compatibilidade**: Funciona em sistemas Windows e Linux.

## Capturas de Tela

<p align="center">
  <img src="https://raw.githubusercontent.com/AbrCs7/Plume-Calculator/refs/heads/main/raw/main/resources/screenshot1.png" alt="Screenshot 1" width="300" style="margin-right: 100px;"/>
  <img src="https://raw.githubusercontent.com/AbrCs7/Plume-Calculator/refs/heads/main/raw/main/resources/screenshot2.png" alt="Screenshot 2" width="300"/>
</p>


## Instalação

### Requisitos para código fonte

- **Qt 6.7.3** ou superior
- **MinGW** (para compilar em sistemas Windows)
- **CMake** (para sistemas Linux, opcional)

### Usando o Instalador (Windows)

1. Baixe o [Instalador](https://github.com/AbrCs7/Plume-Calculator/blob/main/Windows_Installer.zip).
2. Execute o arquivo `.exe` e siga as instruções na tela.

### Usando o executável

1. Baixe o diretório em [Executável](https://github.com/AbrCs7/Plume-Calculator/tree/main/Executavel%20Windows).
2. Após descompactar, execute o arquivo `.exe` dentro do diretório.

## Como Usar

1. **Operações Básicas**:
    - Digite números usando os botões de dígito (`0` a `9`).
    - Selecione uma operação (`+`, `-`, `×`, `÷`) e, em seguida, digite o segundo número.
    - Pressione o botão `=` para obter o resultado.

2. **Operações Científicas**:
    - Utilize funções avançadas como `sin`, `cos`, `tan`, `ln`, `log`, `x²`, `√`, `exp` e `!` (fatorial).
    - Para funções trigonométricas, selecione o modo desejado no **ComboBox** no topo da calculadora:
        - `Degrees` (Graus)
        - `Radians` (Radianos)
        - `Grad` (Gradianos)
    - As operações como `ln` (logaritmo natural), `log` (logaritmo base 10) e `exp` (exponencial) funcionarão com base no número atualmente exibido.

3. **Função ANS (Última Resposta)**:
    - Utilize o botão `ans` para reutilizar o último resultado em um novo cálculo.
    - Isso é útil para encadear cálculos sem precisar reentrar manualmente o valor anterior.

4. **Temas**:
    - Acesse o menu **Configurações** para alterar o tema da calculadora:
        - **Claro**
        - **Escuro**
    - Alterne entre temas para personalizar a aparência da interface de acordo com suas preferências.

---

## Tecnologias Utilizadas

- **C++**: Linguagem de programação principal usada para desenvolver a lógica da calculadora.
- **Qt Framework (versão 6.7.3)**: Utilizado para criar a interface gráfica do usuário (GUI) e gerenciamento de eventos.
- **MinGW**: Ferramenta para compilação em sistemas Windows.
- **QMake**: Ferramenta de construção padrão usada para gerar arquivos Makefile.

---

## Contribuição

Contribuições são sempre bem-vindas! Siga as etapas abaixo para contribuir:

1. **Fork** este repositório para o seu próprio GitHub.
2. Crie uma nova **branch** para suas alterações:
    ```bash
    git checkout -b feature/minha-nova-funcionalidade
    ```
3. Faça suas alterações e **commite**:
    ```bash
    git commit -m "Adicionei uma nova funcionalidade"
    ```
4. Envie suas alterações para o seu repositório forkado:
    ```bash
    git push origin feature/minha-nova-funcionalidade
    ```
5. Abra um **Pull Request** para revisão no repositório original.

### Sugestões e Bugs
- Caso encontre um bug ou tenha uma sugestão de melhoria, abra uma **issue** [aqui](https://github.com/AbrCs7/Plume-Calculator/issues).

---

## Licença

Este projeto está licenciado sob a **MIT License**. Você pode usar, modificar e distribuir este projeto livremente, desde que mantenha o aviso de copyright original.

Consulte o arquivo [LICENSE](./LICENSE) para mais detalhes.

---

## Contato

Se tiver alguma dúvida ou sugestão, sinta-se à vontade para entrar em contato:

- **Desenvolvedor**: Abraão Rodrigues
- 🌐 [Portfólio](https://abrportifolio.com/)
- 👨‍💻 [GitHub](https://github.com/AbrCs7)
- 💼 [LinkedIn](https://www.linkedin.com/in/abr7/)

---

Esperamos que a **Plume Calculator** seja útil para seus cálculos diários. Agradecemos por usar e apoiar este projeto!

