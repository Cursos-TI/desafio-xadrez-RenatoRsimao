#include <stdio.h>

#define MAX_MOVIMENTOS 10   


void exibir_direcao(int movimento) {
    switch (movimento) {
        case 1:
            printf("Cima\n");
            break;
        case 2:
            printf("Baixo\n");
            break;
        case 3:
            printf("Esquerda\n");
            break;
        case 4:
            printf("Direita\n");
            break;
        default:
            printf("Movimento inválido\n");
    }
}

int main() {
    int i;  
    int movimentos[MAX_MOVIMENTOS];  

    
    int entrada[MAX_MOVIMENTOS] = {1, 2, 3, 4, 1, 4, 2, 3, 1, 2};  

    
    for (i = 0; i < MAX_MOVIMENTOS; i++) {
        movimentos[i] = entrada[i];
    }

    printf("Movimentos:\n");
    for (i = 0; i < MAX_MOVIMENTOS; i++) {
        exibir_direcao(movimentos[i]);
    }

    return 0;
}


