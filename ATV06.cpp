#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//Solicite os valores da press�o arterial de uma pessoa (com 18 anos ou mais) e apresente sua situa��o de acordo
//com os valores 

main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int idade;
	float pas,pad;
	
	printf("informe sua idade: ");
	scanf("%i", &idade);
	
		system("cls");
	
	printf("informe sua Press�o Arterial Diast�lica: ");
	scanf("%f", &pad);
	
	printf("informe sua Press�o Arterial Sist�lica: ");
	scanf("%f", &pas);
	
		if (pad<85 && pas<130){
			printf("\nNORMAL");
		}
				else if (pad>=85 && pad<=89 || pas>=130 && pas<=139){
					printf("\nNORMAL LIM�TROFE");
				}
						else if (pad>=90 && pad<=99 || pas>=140 && pas<=159){
							printf("\nHIPERTENS�O LEVE (est�gio 1)");
						}
								else if (pad>=110 && pad<=109 || pas>=160 && pas<=179){
									printf("\nHIPERTENS�O MODERADA (est�gio 2)");
								}
										else if (pad>=110 && pas>=180){
											printf("\nHIPERTENS�O GRAVE (est�gio 3)");
										}
												else if (pad<90 && pas>=140){
													printf("\nHIPERTENS�O SIST�LICA ISOLADA");
												}

}
