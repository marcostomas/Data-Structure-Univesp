#include <stdio.h>
#include <malloc.h>

int main(){
    int * y = (int*) malloc(sizeof(int));
    *y = 20;
    int z = sizeof(int);
    
    printf("*y=%i z=%i\n", *y, z);

    return 0;
}

/*
    A função  malloc  (o nome é uma abreviatura de memory allocation) aloca espaço 
        para um bloco de bytes consecutivos na memória RAM (= random access memory)
        do computador e devolve o endereço desse bloco. 
*/