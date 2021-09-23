#include <stdio.h>
#include <stdlib.h>


int num1, num2;

void Soma(){
    
}


int main(){
    int opc;

    do{
        	printf("\n\n OPCOES: \n");
			printf("\n 1 - Soma  ");
			printf("\n 2 - Subtracao ");
			printf("\n 3 - Multiplicacao ");
			printf("\n 4 - Divisao  ");
            printf("\n 5 - Operacao aleatoria ");
            printf("\n 6 - Sair");
			printf("\n opcao desejada:");
			scanf("%d", &opc);
			switch (opc){
                case 1:
                    Soma();
                    break;

                case 2:
                    Sub();
                    break;

                case 3:
                    Multi();
                    break;
                
                case 4:
                    Divi();
                    break;

                case 5:
                    Rando();
                    break;

            }
    }
    while ( opc != 6);
}
