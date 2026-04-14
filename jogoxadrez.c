#include <stdio.h>

// Função para a Torre
void moverTorre(int numero) {
    if (numero > 0) {
        moverTorre(numero - 1);
        printf("direita: %d\n", numero);
    }
}

// Função para o Bispo
void moverBispo(int numero) {
    if (numero > 0) {
        moverBispo(numero - 1);
        printf("bispo direita cima: %d\n", numero);
    }
}
//função rainha
void moverRainha(int numero){
  if(numero > 0){
    moverRainha(numero -1);
    printf("rainha cima: %d\n", numero);
  }
}

int main() {
    int bispo = 5, torre = 5, rainha = 8;
    printf("--- INICIO DOS MOVIMENTOS ---\n\n");

    // Chama a primeira estrutura recursiva
    printf("Movendo a Torre:\n");
    moverTorre(torre);

    printf("\n----------------------------\n");

    // Chama a segunda estrutura recursiva logo abaixo
    printf("Movendo o Bispo:\n");
    moverBispo(bispo);

    printf("\n----------------------------\n");

    // Chama a terceira estrutura recursiva logo abaixo
    printf("Movendo a Rainha:\n");
    moverRainha(rainha);

    
    printf("\n----------------------------\n");
    
 
        for(int j = 0; j < 2; j++){
       printf("cavalo moveu baixo  \n");
      }
    
     printf("cavalo moveu para esquerda\n");



    printf("\n--- TODOS OS MOVIMENTOS FINALIZADOS ---\n");

    return 0;
}