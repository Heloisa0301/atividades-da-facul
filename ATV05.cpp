#include <stdio.h>
#include <locale.h>

//Solicite 3 valores dos três lados de um triângulo e posteriormente apresente ao usuário se os dados referem-se a
//um triângulo equilátero, isósceles ou escaleno.


main(){
	
	setlocale(LC_ALL, "portuguese");
	
	float l1,l2,l3;
	
	printf("informe o valor do primeiro lado: ");
	scanf("%f", &l1);
	
	printf("informe o valor do segundo lado: ");
	scanf("%f", &l2);
	
	printf("informe o valor do terceiro lado: ");
	scanf("%f", &l3);
	
		if (l1==l2 && l1==l3 && l2==l3){
			printf("o triangulo é EQUILATERO");
		}
				else if ( l1==l2 && l1!=l3 || l1==l3 && l1!=l2 || l2==l3 && l2!=l1){
					printf("o triangulo é ISÓSCELES");
				}
						else if (l1!=l2 && l1!=l3 && l2!=l3){
							printf("o triangulo é ESCALENO");
						}
}
