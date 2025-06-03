#include <stdio.h>

int main(){

// Declarando Variaveis 
    int torre = 1;
    int rainha = 1;
    int bispo = 1;
 // Logica para a movimentação da Torre
    printf("### Movimentando a Torre ###\n"); // Faz um loop repetindo por 5 vezes (Direita)
for(torre = 1; torre <= 5; torre++)
         printf("Direita\n");
//Logica para movimentação do Bispo

printf("### Movimentação do Bispo ### \n");
while (bispo <= 5)
{
   printf("Cima, Direita\n"); // Faz um loop repetindo por 5 vezes (Cima, Direita)
    bispo++;
} 
 printf("### Movimentação da Rainha ### \n");
  do {
    printf("Esquerda\n "); 
    rainha++;
  } while(rainha <=8);  // faz um loop repetindo por 8 vezes (Esquerda)

return 0;
}

