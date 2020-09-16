#include <stdio.h>


int main(){
    int x = 25;
    int * y = &x;
    * y = 30;
    
    printf("Valor atual de x: %i\n", x);

    return 0;
}

/*
    • [int x = 25] A variável x é inicializada com o valor de 25;
    • [int * y] A variável y recebe o endereço onde está a variável x;
    
    • [* y] Coloca-se o valor 30 na posição de memória referenciada (apontada) pelo endereço
        armazenado em y;
    
    • [printf("Valor atual de x: %i\n", x)] Imprime a variável x(30), onde (%i) indica que a 
        variável inserida será do tipo inteiro.

    // O endereço de uma variável é dado pelo operador  & .  Assim, se  i  é uma variável então  
        &i  é o seu endereço.
*/