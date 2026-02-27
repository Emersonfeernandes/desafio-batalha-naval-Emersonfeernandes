#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

#define LINHAS 10
#define COLUNAS 10

// Função para pegar o item da posição escolhida
char *navio(int index1, int index2){
    char *tabuleiro[10][10] ={
        {"  N  ", "  A  ", "  V  ", "  I  ", "  O  ", "  x  ", "  O  ", "  x  ", "  x  ", "  N  "},
        {"  A  ", "  x  ", "  @  ", "  x  ", "  I  ", "  I  ", "  x  ", "  x  ", "  x  ", "  x  "},
        {"  V  ", "  @  ", "  @  ", "  @  ", "  V  ", "  x  ", "  x  ", "  x  ", "  A  ", "  x  "},
        {"  I  ", "  x  ", "  @  ", "  x  ", "  A  ", "  x  ", "  x  ", "  x  ", "  x  ", "  x  "},
        {"  O  ", "  x  ", "  x  ", "  A  ", "  N  ", "  #  ", "  x  ", "  V  ", "  x  ", "  x  "},
        {"  x  ", "  x  ", "  N  ", "  x  ", "  #  ", "  #  ", "  #  ", "  x  ", "  x  ", "  x  "},
        {"  x  ", "  x  ", "  A  ", "  x  ", "  x  ", "  #  ", "  I  ", "  x  ", "  x  ", "  x  "},
        {"  x  ", "  x  ", "  V  ", "  x  ", "  x  ", "  #  ", "  x  ", "  #  ", "  x  ", "  x  "},
        {"  x  ", "  x  ", "  I  ", "  x  ", "  x  ", "  O  ", "  #  ", "  #  ", "  #  ", "  x  "},
        {"  x  ", "  x  ", "  O  ", "  x  ", "  x  ", "  #  ", "  #  ", "  #  ", "  #  ", "  #  "}  
    };

    return tabuleiro[index1][index2];
}

// Função para exibir o tabuleiro da batalha naval
void funcTabuleiro(char *tabuleiro[10][10]){
    int i = 0;

    // exibindo o tabuleiro
    printf("      A    B    C    D    E    F    G    H    I    J\n");
    do {
        printf("\n%d - ", i);
        for(int j = 0; j < COLUNAS; j++) {
            printf("%s", tabuleiro[i][j]);
        }
        i++;
    } while (i < LINHAS);
}

// Função para pegar o resultado da escolha do usuário
void player(char *tabuleiro[LINHAS][COLUNAS], int index, char letra){
    
    int i = 0;

    // validando index da linha
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
    

    // exibindo o tabuleiro
    printf("\n      A    B    C    D    E    F    G    H    I    J\n");
    do {
        printf("\n%d - ", i);
        for(int j = 0; j < COLUNAS; j++) {
            printf("%s", tabuleiro[i][j]);
        }
        i++;
    } while (i < LINHAS);
}

int main() {
    char *tabuleiro[LINHAS][COLUNAS];
    int index;
    char letra;
    
    // for para criar o tabuleiro
    for (int i = 0; i < LINHAS; i++)
    {
        for (int j = 0; j < COLUNAS; j++)
        {
            tabuleiro[i][j] = " |?| ";
        }
        
    }
    
    // exibindo tabuleiro com index de 0 - 9 para linha e de A - J para coluna
    funcTabuleiro(tabuleiro);

    // menu interativo
    do
    {
        printf("\n\nDigite um número de 0 a 9 para linha\numa letra de A a J para coluna\n0S para sair\n");
        scanf("%d %c", &index, &letra);

        if (letra == 's' || letra == 'S'){
            break;
        }
            
        player(tabuleiro, index, letra);
        
    
    }while (1);
    

    return 0;
}
