Batalha Naval - Jogo em C

Descrição
Este é o jogo Batalha Naval implementado em C. O objetivo do jogo é posicionar navios em um tabuleiro 10x10 e realizar ataques, considerando habilidades especiais com áreas de efeito distintas. O projeto foi desenvolvido em diferentes níveis, onde a complexidade aumenta à medida que o jogo avança.

Estrutura do Projeto
Tabuleiro 10x10: Representação do campo de batalha onde os navios são posicionados.

Navios: Posicionados no tabuleiro de forma horizontal, vertical e diagonal.

Habilidades Especiais:

Cone: Habilidade que afeta uma área em forma de cone.

Cruz: Habilidade que afeta uma área em forma de cruz.

Octaedro: Habilidade que afeta uma área em forma de losango.

Requisitos
Este projeto foi desenvolvido utilizando a linguagem de programação C. Para compilar e executar o código, siga os seguintes passos:

Requisitos do Sistema
Compilador C (como GCC)

Sistema operacional: Linux ou Windows (com o ambiente adequado para compilar C)

Como Rodar o Projeto
Clone o repositório: git clone https://github.com/seu-usuario/batalha-naval.git

Acesse o diretório do projeto: cd batalha-naval

Compile o código: gcc -o batalha_naval batalha_naval.c

Execute o programa: ./batalha_naval

Como Funciona
O jogo é iniciado com o tabuleiro sendo exibido no terminal.

Você pode visualizar os navios posicionados no tabuleiro.

São geradas três habilidades especiais com áreas de efeito:

Cone: A área de efeito se expande de cima para baixo.

Cruz: A área de efeito é centrada no meio do tabuleiro.

Octaedro: A área de efeito forma um losango, centrado no meio do tabuleiro.

As áreas afetadas pelas habilidades são indicadas com o valor 5, enquanto os navios são representados pelo valor 3 e a água pelo valor 0.

Estrutura do Código
Tabuleiro:

Utiliza uma matriz 10x10, onde 0 representa água e 3 representa navios.

Habilidades:

Cone: Representado por uma matriz com valores que indicam a área afetada.

Cruz: Representado por uma matriz centrada no meio.

Octaedro: Representado por uma matriz no formato de losango.

Exemplo de Saída:
O tabuleiro gerado após a execução do programa pode ser exibido como abaixo:

🌊 Tabuleiro Batalha Naval 🌊

5 0 5 0 0 0 0 0 0 0
0 0 5 0 0 0 0 0 0 0
5 5 5 5 5 3 5 0 0 0
0 0 5 5 0 5 0 0 0 0
0 0 5 0 5 0 0 0 0 0
0 0 0 5 0 5 0 0 0 0
0 0 5 0 0 0 5 0 0 0
0 0 0 0 0 0 0 0 0 0
5 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0

5: Área afetada pelas habilidades.

3: Navio.

0: Água.

Desenvolvedor
Caio Rabelo

GitHub: CaioRabelo813
