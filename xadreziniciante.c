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
// Usando o while e fazendo com que no printf ele conte o número até chegar em 5, visto que queremos somente 5 passos
// Como o printf vai repetir o número de t, coloquei como se cada repetição fosse 1 passo dado  
    
     int b = 1;

        do
        {
            printf("O bispo se move uma casa para Cima, Direita! %d \n", b);
            b++;
        } while (b <= 5);
        
            printf("Fim do movimento do Bispo! \n");

// A mesma logica foi utilizado para os passos do bispo, variavel int b, printf repetindo e contando cada passo
        
        for (int r = 1; r <= 8; r++)
        {
            printf("A Rainha se move mais uma casa para a esquerda! %d\n", r);
        }
        
            printf("Fim do movimento da Rainha! \n");
        
// Por fim, a utilização do FOR teve a mesma lógica, com o printf contando e repetindo cada passo
            return 0;
        }
        