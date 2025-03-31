#include <stdio.h>

void movimentoTorre(int passost) {
    if (passost > 0)
    {
        printf("A Torre move uma casa para a direita! %d \n", passost);
        movimentoTorre(passost - 1);
    }  
}

void movimentoBispo(int passosb) {
    if (passosb > 0)
    {
        printf("O bispo se move uma casa para Cima, Direita! %d \n", passosb);
        movimentoBispo(passosb - 1);
    }  
}

void movimentoRainha(int passosr) {
    if (passosr > 0)
    {
        printf("A Rainha se move mais uma casa para a esquerda! %d\n", passosr);
        movimentoRainha(passosr - 1);
    }  
}

int main() {

        movimentoTorre(5);
            printf("Fim do movimento da Torre! \n");
            printf("\n");

     
        movimentoBispo(5);
            printf("Fim do movimento do Bispo! \n");
            printf("\n");

        movimentoRainha(8);
            printf("Fim do movimento da Rainha! \n");
            printf("\n");
/*
        printf("\n");   
        int moveL = 1; 

        while (moveL--)  
        {
            for (int c = 2; c > 0; c--) 
            {
                printf("O cavalo anda uma casa para Baixo!, %d\n", c); 
            }
            
                printf("O cavalo finaliza seu movimento em L, se movendo para a Esquerda! %d\n", moveL); 
        }
        printf("\n"); 







*/
            return 0;
        }
        