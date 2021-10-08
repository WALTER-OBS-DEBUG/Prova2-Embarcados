#include <stdio.h>

int main(){
    int A = 1, B = 0, X;
	
    X = !(A || B); //Negando a saída da porta OR
    printf("!(A || B)\nOR: %d\n\n", X);

    return 0;
}
