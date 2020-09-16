// SEGUNDA IMPLEMENTAÇÃO

# include <stdio.h>
# include <malloc.h>
#define alturaMaxima 225

typedef struct{
    int peso; // peso em quilogramas (Kg)
    int altura; // altura em centímetros (Cm) 
} PesoAltura;

int Main() {
    PesoAltura* pessoa1 = (PesoAltura*) malloc(sizeof(PesoAltura));
    
    pessoa1->peso = 80;
    pessoa1->altura = 185;

    printf("Peso: %i, Altura %i.", pessoa1->peso, pessoa1->altura);

    if(pessoa1->altura>alturaMaxima) printf("Altura acima da maxima. \n");
    else printf("Altura abaixo da maxima. \n");

    return 0;
}

// Consulte a primeira implementação e descrições em: ./Estrutura-Simples.c