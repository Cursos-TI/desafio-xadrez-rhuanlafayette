#include <stdio.h>

void movimentoTorre(int passost) { // criação do primeiro procedimento para a recursividade
    if (passost > 0) // condição para que isso só ocorra se 'passost' for um numero acima de 0 ( no caso, o número de passos da Torre)
    {
        printf("A Torre move uma casa para a direita! %d \n", passost); // se for acima de 0, o sistema irá mostrar o printf
        movimentoTorre(passost - 1); // Essa condição diminui a cada vez que é executada, então quando coloco passost = 5, ele rodará 5 vezes até ser = 0 e terminar
    }  
}

void movimentoBispo(int passosb) { // Segundo procedimento para os 5 passos do Bispo - loop aninhado e recursivo
        for (int passocima = 5; passocima > 0; passocima--){ //Visto que o bispo anda na diagonal, foi criado o loop aninhado
            for (int passodir = 1; passodir > 0; passodir--) // loop externo rodará o interno e ele mesmo 5 vezes, visto que 'passocima = 5'
            {
                printf("O bispo se move uma casa para Direita!\n"); // primeiro será esse printf e como 'passodir = 1' rodará apenas uma vez e saíra do loop interno para o loopexterno
            } // o loop externo será 4 e então rodará o loop inteno novamente como 1, voltando para o loop externo até esse se tornar 0 e acabar
        
        printf("O bispo se move uma casa para Cima %d \n", passocima); //Essa será a segunda frase. Coloquei na frase a variavel 'passocima' para melhorar a contagem assim como no procedimento anterior
    }  
}

void movimentoRainha(int passosr) { // Esse procedimento segue a mesma logica do primeiro procedimento.
    if (passosr > 0) // numero de passos 
    {
        printf("A Rainha se move uma casa para a esquerda! %d\n", passosr);
        movimentoRainha(passosr - 1); // ele chama a si mesmo e diminui um número do número de passos definido previament até se tornar 0
    }  
}

int main() {

        movimentoTorre(5); // chamando o procedimento e informando 5 passos
            printf("Fim do movimento da Torre! \n"); //printf para declarar que acabou o movimento da peça
            printf("\n"); //printf para pular linha

     
        movimentoBispo(1); // mesma logica do de cima
            printf("Fim do movimento do Bispo! \n");
            printf("\n");

        movimentoRainha(8); // mesma logica do de cima
            printf("Fim do movimento da Rainha! \n");
            printf("\n");

        for (int movec = 3, movecd = 1; movec > 0 && movecd > 0; movec --, movecd --){ //loop aninhado declarando as variaveis para movimentos horizontais e verticais 'movec' = move cavalo e 'movecd' = move cavalo direita
             for (movec = 3; movec > 0; movec--){ //movec = 3 pois se fosse = 2, na contagem repetiria o 1 no primeiro printf e no segundo printf repetiria novamente
                if (movec == 1) continue; //Ao utilizar o continue eu pulo o movec ==1 e a contagem fica 3,2,1
                printf("O cavalo anda uma casa para Cima! %d\n", movec);}
             printf("O cavalo anda uma casa para Direita! %d\n", movecd);
        }
        printf(" O cavalo finaliza seu movimento em L\n");
        

            return 0;
        }
        