#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.
char *navio(int index1, int index2){
    char *tabuleiro[10][10] ={
        {"  N  ", "  A  ", "  V  ", "  I  ", "  O  ", "  x  ", "  O  ", "  x  ", "  x  ", "  x  "},
        {"  A  ", "  x  ", "  x  ", "  x  ", "  I  ", "  I  ", "  x  ", "  x  ", "  @  ", "  x  "},
        {"  V  ", "  x  ", "  x  ", "  x  ", "  V  ", "  x  ", "  x  ", "  @  ", "  @  ", "  @  "},
        {"  I  ", "  x  ", "  x  ", "  x  ", "  A  ", "  x  ", "  x  ", "  x  ", "  @  ", "  x  "},
        {"  O  ", "  x  ", "  x  ", "  A  ", "  N  ", "  #  ", "  x  ", "  x  ", "  x  ", "  x  "},
        {"  x  ", "  x  ", "  N  ", "  x  ", "  #  ", "  #  ", "  #  ", "  x  ", "  x  ", "  x  "},
        {"  x  ", "  x  ", "  A  ", "  x  ", "  x  ", "  #  ", "  x  ", "  x  ", "  x  ", "  x  "},
        {"  x  ", "  x  ", "  V  ", "  x  ", "  x  ", "  #  ", "  x  ", "  #  ", "  x  ", "  x  "},
        {"  x  ", "  x  ", "  I  ", "  x  ", "  x  ", "  x  ", "  #  ", "  #  ", "  #  ", "  x  "},
        {"  x  ", "  x  ", "  O  ", "  x  ", "  x  ", "  #  ", "  #  ", "  #  ", "  #  ", "  #  "}  
    };

    return tabuleiro[index1][index2];
}
void funcTabuleiro(char *tabuleiro[10][10]){
    int i = 0;

    // Exibindo o tabuleiro
    printf("      A    B    C    D    E    F    G    H    I    J\n");
    do {
        printf("\n%d - ", i);
        for(int j = 0; j < 10; j++) {
            printf("%s", tabuleiro[i][j]);
        }
        i++;
    } while (i < 10);
}

void player(char *tabuleiro[10][10], int index, char letra){
    
    int i = 0;

    switch (letra)
    {
    case 'A':
    case 'a':
        tabuleiro[index][0] = navio(index, 0);
        break;

    case 'B':
    case 'b':
        tabuleiro[index][1] = navio(index, 1);
        break;

    case 'C':
    case 'c':
        tabuleiro[index][2] = navio(index, 2);
        break;

    case 'D':
    case 'd':
        tabuleiro[index][3] = navio(index, 3);
        break;

    case 'E':
    case 'e':
        tabuleiro[index][4] = navio(index, 4);
        break;

    case 'F':
    case 'f':
        tabuleiro[index][5] = navio(index, 5);
        break;
    
    case 'G':
    case 'g':
        tabuleiro[index][6] = navio(index, 6);
        break;

    case 'H':
    case 'h':
        tabuleiro[index][7] = navio(index, 7);
        break;
    
    case 'I':
    case 'i':
        tabuleiro[index][8] = navio(index, 8);
        break;

    case 'J':
    case 'j':
        tabuleiro[index][9] = navio(index, 9);
        break;
    
    default:
        break;
    }
    

    // Exibindo o tabuleiro
    printf("\n      A    B    C    D    E    F    G    H    I    J\n");
    do {
        printf("\n%d - ", i);
        for(int j = 0; j < 10; j++) {
            printf("%s", tabuleiro[i][j]);
        }
        i++;
    } while (i < 10);
}

int main() {
    char *tabuleiro[10][10];
    int index;
    char letra;
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.
    
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            tabuleiro[i][j] = " |?| ";
        }
        
    }
    
    funcTabuleiro(tabuleiro);
    do
    {
        printf("\n\nDigite um número de 0 a 9 para linha\numa letra de A a J para coluna\n0S para sair\n");
        scanf("%d %c", &index, &letra);

        if (letra == 's' || letra == 'S'){
            break;
        }
            
        player(tabuleiro, index, letra);
        
    
    }while (1);
    

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
