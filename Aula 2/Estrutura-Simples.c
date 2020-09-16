// PRIMEIRA IMPLEMENTAÇÃO

#include <stdio.h>
#define alturaMaxima 225

typedef struct{
    int peso; //peso em quilogramas (Kg)
    int altura; // altura em centímetros (Cm)
} PesoAltura;

int main(){
    PesoAltura pessoa1;

    pessoa1.peso = 80;
    pessoa1.altura = 185;

    printf("Peso: %i, Altura: %i. ", pessoa1.peso, pessoa1.altura);

    if(pessoa1.altura > alturaMaxima) printf("Altura acima da maxima. \n");
    else printf("Altura abaixo da maxima. \n");

    return 0;

}

typedef int CHAVE;


//struct { ... } → Define uma estrutura com os campos definidos dentro das classes
/*
    //typedef ... PesoAltura → Define o nome PesoAltura para o que foi definido nas reticências
    
    Definimos que a palavra CHAVE poderá ser usada no código para representar o tipo int (inteiro), 
    isto é, demos um nvo nome para o tipo int.
*/

/*
    Em C há uma distinçção banstante explícita entre um tipo (ou uma estrutura) e um endereço:
        int x; significa que x é uma variável do tipo inteiro
        int * y; significa que y é uma variável do tipo endereço para inteiro
        O asterisco (*) após a palavra int indica que estamos falando de um endereço para 
            inteiro e não mais de um inteiro.
*/