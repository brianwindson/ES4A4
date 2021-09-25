#include <stdio.h>
#include <stdlib.h>
int num1, num2;

void Soma(){
    printf("Insira o primeiro numero a ser somado: ");
    scanf("%d", &num1);
    printf("\nInsira o segundo numero a ser somado: ");
    scanf("%d", &num2);
    printf("RESULTADO DA SOMA: %d", num1 + num2);
}

void Subtracao(){
    printf("Insira o primeiro numero da  subtra��o (minuendo):\n");
    scanf("%d",&num1);
    printf("Insira o  numero subtra�do(subtraendo): ");
    scanf("%d",&num2);
    printf("Resultado da subtra��o:",num1+num2);
}

void Multiplicacao(){
    printf("Insira o  numero multiplicador:");
    scanf("%d",&num1);
    printf("Insira o numero multiplicando:");
    scanf("%d",&num2);
    printf("Resultado da multiplicacao:",num1*num2);
}

void Divi(){
    printf("Insira o numero dividendo: ");
    scanf("%d", &num1);
    printf("\nInsira o numero divisor: ");
    scanf("%d", &num2);
    printf("RESULTADO DA DIVISAO: %d", num1 / num2);
}
int main(){
    //int i;
    int opc;


    do{
        	printf("\n\n OPCOES: \n");
			printf("\n 1 - Soma  ");
			printf("\n 2 - Subtracao ");
			printf("\n 3 - Multiplicacao ");
			printf("\n 4 - Divisao  ");
            printf("\n 5 - Sair ");
			printf("\n opcao desejada: ");
			scanf("%d", &opc);
			switch (opc){
                case 1:
                    Soma();
                    break;

                case 2:
                    Subtracao();
                    break;

                case 3:
                    Multiplicacao();
                    break;

                case 4:
                    Divi();
                    break;
            }
    }
    while ( opc != 5);
    system("pause");
    return 0;
}
