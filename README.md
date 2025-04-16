🚢💥 Desafio Batalha Naval em C 💻🌊

Este projeto foi desenvolvido como parte dos desafios da disciplina de Pensamento Computacional. Nele, simulamos o clássico jogo Batalha Naval, utilizando linguagem C, com foco em vetores, matrizes, estruturas de repetição e condicionais.

A proposta foi dividida em três níveis de dificuldade: Novato, Aventureiro e Mestre, onde cada etapa adiciona mais complexidade ao código, até chegar à implementação de habilidades especiais com áreas de efeito.

🧭 Nível Novato - Comparação de Cartas

🎯 Objetivo:

Criar um programa que represente um tabuleiro de batalha naval 10x10, posicione navios e imprima esse tabuleiro de forma organizada na tela.

📌 Habilidades trabalhadas:

Declaração e uso de matrizes 2D

Preenchimento com valores fixos

Impressão de matriz com printf e for

Representação gráfica do jogo com valores inteiros

📋 Exemplo de representação no tabuleiro:

0: água 🌊

3: navio 🚢

🧗 Nível Aventureiro - Posicionamento com lógica

🎯 Objetivo:

Adicionar regras ao posicionamento dos navios no tabuleiro, garantindo que não se sobreponham e que dois deles sejam posicionados na diagonal.

📌 Habilidades trabalhadas:

Condições de controle para evitar sobreposição de navios

Posicionamento em linha reta e diagonal

Uso de estruturas if e for para checagem e preenchimento

Validação de posição com limites da matriz

🧠 Desafio adicional:
Garantir o posicionamento de quatro navios, sendo dois deles diagonais, sem invadir o espaço dos outros.


🧙 Nível Mestre - Habilidades Especiais com Área de Efeito

🎯 Objetivo:

Criar e aplicar três habilidades especiais (Cone, Cruz e Octaedro) que afetam o tabuleiro com áreas específicas, representadas por uma nova matriz sobreposta ao tabuleiro principal.

📌 Habilidades criadas:

🌀 Cone (expande de cima para baixo)

➕ Cruz (horizontal e vertical, com origem no centro)

🔷 Octaedro (formato de losango)

📌 Como funciona:

As áreas afetadas são representadas com o valor 5 💥

A habilidade é aplicada ao tabuleiro a partir de um ponto de origem

O código garante que a área não ultrapasse os limites do tabuleiro

🧩 Exemplo de elementos no tabuleiro final:

0: água 🌊

3: navio 🚢

5: área afetada por habilidade especial 💥

🧪 Como Testar o Programa
Para rodar esse projeto com sucesso no seu computador, siga estes passos:

Clone o repositório no seu ambiente de desenvolvimento:
Exemplo para GitHub:
git clone https://github.com/caio-rabelo/batalha-naval.git

Entre na pasta do projeto:
cd batalha-naval

Compile o código com um compilador C:
Com o GCC:
gcc batalha_naval.c -o batalha_naval

Execute o programa no terminal:
./batalha_naval

✅ O que você verá no terminal:

Um tabuleiro 10x10 com água (0), navios (3) e áreas afetadas (5)

As três habilidades serão aplicadas e você verá seus efeitos no tabuleiro

🛠️ Dicas:

Você pode mudar os pontos de origem das habilidades direto no código, alterando as variáveis de linha e coluna.

O código está comentado e separado por função para facilitar a leitura e alteração.

No Linux, basta instalar o GCC com sudo apt install gcc.

No Windows, use o MinGW ou o terminal do WSL.

No VS Code, você pode usar a extensão de C/C++ para compilar direto na interface.

📝 Nota de Esclarecimento ao Professor

Todo o desenvolvimento foi realizado por mim, Caio Rabelo, como parte do aprendizado da disciplina.
Me dediquei a entender e implementar cada funcionalidade com lógica própria e apoio dos conteúdos vistos em aula.
A organização do código e a documentação aqui presente foram feitas com muito carinho, seguindo os princípios de clareza e responsabilidade.

Agradeço pela oportunidade de colocar em prática os conceitos de programação e por acompanhar minha evolução até aqui.
Espero que este projeto reflita bem o que eu aprendi! 😊
Aberto a correções!!!
