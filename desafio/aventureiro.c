#include <stdio.h>

int main(){
 // Cavalo move 2 para baixo e 1 para esquerda
 
 // declarando variaveis 

int cavalo_move_esquerda = 1, cavalo_move_baixo = 2;

// separando a peça cavalo de outras peças.

printf("\n Movimento do Cavalo\n ");

// Primeiro loop

    for(int i = 0; i < cavalo_move_baixo; i++)
    {
        printf("baixo\n");
// Segundo loop dentro do for que simula verificicação a cada passo 
        int contador = 0;
        while (contador < 1)
        {
          contador++;
        }
        
    } 
// Movimentação para esquerda 
    int j = 0;
    while (j < cavalo_move_esquerda)
    {
       printf("Esquerda\n ");
       j++;
    }
    
     return 0;

}