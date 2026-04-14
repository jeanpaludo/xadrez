#include <stdio.h>

int main(){

    //torre se move 5 casas para direita

    int torre, bispo, rainha, cavalo;

printf("\n");
printf("### MOVIMENTI DA TORRE ###\n");
printf("\n");

for(torre = 0; torre < 5; torre++){
        printf("direita %d\n",torre);
    }

printf("\n");    
printf("### MOVIMENTI DA RAINHA ###\n");
printf("\n");

  rainha = 1;
  
    while (rainha <= 8)
    {
    printf("casas para esquerda: %d\n", rainha);
    rainha++;         
    }

   printf("\n"); 
   printf("### MOVIMENTI DA BISPO ###\n");
   printf("\n");

   bispo = 1;
    do {
        
      printf(" Bispo moveu para Cima, Direita %d \n", bispo);
      bispo++;
    } while (bispo <= 5); 
printf("\n");
printf("### MOVIMENTI DA torre ###\n");
printf("\n");

    for(torre = 1; torre <= 2; torre++){

       for(int j = 1; j < 2; j++){
       printf("cavalo moveu baixo  \n");
      }
    }
  printf("cavalo moveu para esquerda\n");


    return 0;
}