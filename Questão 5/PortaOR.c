#include <stdio.h>

int main(){
    int A, B, X, op=-1;
    while(op!=0)
    {
    	printf("Deseja testar a porta OR com saida negada?\n1 - Sim\n0 - Sair do Programa\n\n");
    	scanf("%d", &op);
    	if(op==1)
    	{
		    printf("Informe o valor de A: ");
			scanf("%d", &A);
			printf("Informe o valor de B: ");
			scanf("%d", &B);
			if((A==0 || A==1) && (B==0 || B==1))
			{
				X = !(A || B); //Negando a saída da porta OR
				printf("!(A || B)\nOR: %d\n\n", X);
			}
			else
			{	
				printf("Valores invalidos!\n\n");
			}
		}
	}
    return 0;
}
