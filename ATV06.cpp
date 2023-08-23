#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//Solicite os valores da pressão arterial de uma pessoa (com 18 anos ou mais) e apresente sua situação de acordo
//com os valores 

main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int idade;
	float pas,pad;
	
	printf("informe sua idade: ");
	scanf("%i", &idade);
	
		system("cls");
	
	printf("informe sua Pressão Arterial Diastólica: ");
	scanf("%f", &pad);
	
	printf("informe sua Pressão Arterial Sistólica: ");
	scanf("%f", &pas);
	
		if (pad<85 && pas<130){
			printf("\nNORMAL");
		}
				else if (pad>=85 && pad<=89 || pas>=130 && pas<=139){
					printf("\nNORMAL LIMÍTROFE");
				}
						else if (pad>=90 && pad<=99 || pas>=140 && pas<=159){
							printf("\nHIPERTENSÃO LEVE (estágio 1)");
						}
								else if (pad>=110 && pad<=109 || pas>=160 && pas<=179){
									printf("\nHIPERTENSÃO MODERADA (estágio 2)");
								}
										else if (pad>=110 && pas>=180){
											printf("\nHIPERTENSÃO GRAVE (estágio 3)");
										}
												else if (pad<90 && pas>=140){
													printf("\nHIPERTENSÃO SISTÓLICA ISOLADA");
												}

}
