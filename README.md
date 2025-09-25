#  calculadora-de-notas-em-c

![Linguagem C](https://img.shields.io/badge/Linguagem-C-blue.svg )
![Licença](https://img.shields.io/badge/Licen%C3%A7a-MIT-green.svg )

Um programa simples e flexível em Linguagem C para calcular a média e a frequência de alunos, desenvolvido como projeto para a disciplina de Algoritmos e Lógica de Programação.

## 🎯 Objetivo do Projeto

O objetivo principal era aplicar os conceitos fundamentais da programação em C, como laços de repetição (`while`, `for`) e estruturas condicionais (`if/else`), em um cenário prático e útil.

A inspiração veio de um projeto anterior feito na ferramenta de fluxogramas Flowgorithm, com a meta de não apenas traduzir a lógica, mas de expandi-la para criar uma ferramenta mais robusta que pudesse ser usada por educadores em situações reais.

## ✨ Funcionalidades

*   **Cálculo para Múltiplos Alunos:** O programa roda em um loop contínuo, permitindo ao usuário calcular as notas de quantos alunos forem necessários sem precisar reiniciar.
*   **Estrutura de Curso Flexível:** O usuário pode definir no início quantas unidades avaliativas (bimestres, trimestres, etc.) o período letivo possui.
*   **Média Ponderada:** Para cada unidade, o sistema solicita as notas e seus respectivos pesos, calculando uma média ponderada precisa.
*   **Cálculo de Frequência:** Calcula o percentual de presença do aluno com base no total de aulas e no número de faltas.
*   **Decisão de Aprovação Composta:** Utiliza uma condição lógica (`&&`) para verificar se o aluno atingiu **tanto** a média mínima para aprovação **quanto** a frequência mínima.
*   **Interface Limpa:** A tela é limpa a cada novo aluno para uma experiência de usuário mais organizada.

## 🚀 Como Executar

Para compilar e executar este projeto, você precisará de um compilador C (como o GCC, que vem com o MinGW no Windows).

1.  **Clone o repositório:**
    ```bash
    git clone https://github.com/Guihmg/Calculadora-de-Notas-em-C.git
    ```

2.  **Navegue até a pasta do projeto:**
    ```bash
    cd Calculadora-de-Notas-em-C
    ```

3.  **Compile o código:**
    ```bash
    gcc "Calculadora de notas.c" -o calculadora.exe
    ```

4.  **Execute o programa:**
    ```bash
    ./calculadora.exe
    ```

## 📝 Licença

Este projeto está sob a licença MIT. Veja o arquivo [LICENSE](LICENSE ) para mais detalhes.
