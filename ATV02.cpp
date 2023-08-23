#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//Solicite o nome e o tipo sanguíneo de uma pessoa. Posteriormente, apresente para quais tipos ela pode doar e de
//quais tipos sanguíneos ela pode receber sangue.


main(){
	
	setlocale(LC_ALL, "portuguese");
	
	char nome[50];
	int sang;
	
	
	printf("informe seu nome: ");
	gets(nome);
	
		system("cls");
	
	printf("Digite 1 Para A+");
	printf("\nDigite 2 Para A-");
	printf("\nDigite 3 Para B+");
	printf("\nDigite 4 Para A-");
	printf("\nDigite 5 Para AB+");
	printf("\nDigite 6 Para AB-");
	printf("\nDigite 7 Para O+");
	printf("\nDigite 8 Para O-");
	
	
	printf("\n\ninforme seu tipo sanguineo: ");
	scanf("%i", &sang);
	
		system("cls");
	
			switch (sang) {
				case 1:
					printf("Voce selecionou A+");
					printf("\n\nDOA para A+ e AB+");
					printf("\nRECEBE de A+ A- O+ O-");
					break;
				
				case 2:
					printf("Voce selecionou A-");
					printf("\n\nDOA para A+ A- AB+ AB-");
					printf("\nRECEBE de A- e O-");
					break;
				
				case 3:
					printf("Voce selecionou B+");
					printf("\n\nDOA para B+ e AB+");
					printf("\nRECEBE de B+ B- O+ O-");
					break;
				
				case 4:
					printf("Voce selecionou B-");
					printf("\n\nDOA para B+ B- AB+ AB-");
					printf("\nRECEBE de B- e O-");
					break;	
				
				case 5:
					printf("Voce selecionou AB+");
					printf("\n\nDOA para AB+");
					printf("\nRECEBE TODOS");
					break;
				
				case 6:
					printf("Voce selecionou AB-");
					printf("\n\nDOA para AB- e AB+");
					printf("\nRECEBE de AB- A- B- O-");
					break;
				
				case 7:
					printf("Voce selecionou O+");
					printf("\n\nDOA para A+ B+ AB+ O+");
					printf("\nRECEBE de O- O+");
					break;
				
				case 8:
					printf("Voce selecionou O-");
					printf("\n\nDOA para TODOS");
					printf("\nRECEBE de O-");
					break;
				
						default:
							printf("INVÁLIDO");
							break;
		}
}	
