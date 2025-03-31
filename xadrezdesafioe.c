int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

        int t = 1; // declarando variavel da torre como t

        while (t <= 5)
        {
            printf("A Torre move uma casa para a direita! %d \n", t);
            t++;
        }
            printf("Fim do movimento da Torre! \n");
            printf("\n");
// Usando o while e fazendo com que no printf ele conte o número até chegar em 5, visto que queremos somente 5 passos
// Como o printf vai repetir o número de t, coloquei como se cada repetição fosse 1 passo dado  
    
     int b = 1;

        do
        {
            printf("O bispo se move uma casa para Cima, Direita! %d \n", b);
            b++;
        } while (b <= 5);
        
            printf("Fim do movimento do Bispo! \n");
            printf("\n");

// A mesma logica foi utilizado para os passos do bispo, variavel int b, printf repetindo e contando cada passo
        
        for (int r = 1; r <= 8; r++)
        {
            printf("A Rainha se move mais uma casa para a esquerda! %d\n", r);
        }
        
            printf("Fim do movimento da Rainha! \n");
        
// Por fim, a utilização do FOR teve a mesma lógica, com o printf contando e repetindo cada passo

// INICIO DESAFIO AVENTUREIRO

        printf("\n");   // usei printf para pular uma linha entre o movimento da Rainha e o do Cavalo
        int moveL = 1; //váriavel moveL que significa 'Movimento em L' para o primeiro loop
        
        while (moveL--)  // utilização do while conforme pede o desafio, aqui a variavel moveL está diminuindo a cada loop completo, como moveL =1, haverá apenas 1 loop
        {
            for (int c = 2; c > 0; c--) // utilização do for em contagem regressiva. Como nos movimentos anteriores utilizei o número para contar cada passo dado, aqui usei de forma regressiva para determinar o fim do movimento do cavalo, visto que um único movimento são 3 casas
            {
                printf("O cavalo anda uma casa para Baixo!, %d\n", c); //Como o cavalo vai andar 2 casas para baixo, esse printf será rodado duas vezes, primeiro c=2 e depois c=1, quando c = 0 o loop interno não rodará mais e o loop externo será completo
            }
            
                printf("O cavalo finaliza seu movimento em L, se movendo para a Esquerda! %d\n", moveL); // o loop externo ficará completo ao exibir essa mensagem informando que o último passo do cavalo foi dado. A variável moveL será = 0, pois enquanto moveL = 1 apenas o loop interno será rodado
        }
        
        printf("\n"); // printf para pular uma linha visto que o movimento do cavalo terminou.









            return 0;
        }
        