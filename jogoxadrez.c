#include <stdio.h>

int main(){

    //torre se move 5 casas para direita

    int torre, bispo, rainha;

printf("### MOVIMENTI DA TORRE ###\n");
    
for(torre = 0; torre < 5; torre++){
        printf("direita %d\n",torre);
    }
    
printf("### MOVIMENTI DA RAINHA ###\n");

  rainha = 1;
  
    while (rainha <= 8)
    {
    printf("casas para esquerda: %d\n", rainha);
    rainha++;         
    }
    
   printf("### MOVIMENTI DA BISPO ###\n");

   bispo = 1;
    do {
        
      printf("Passo %d: Bispo moveu para Cima, Direita \n", bispo);
      bispo++;
    } while (bispo <= 5); 

    


    return 0;
}