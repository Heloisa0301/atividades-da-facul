#include <stdio.h>
#include <locale.h>

//  Solicite o nome, a idade e o sal�rio de uma pessoa. Calcule e apresente o novo sal�rio, de acordo com os crit�rios
//abaixo:
//Idade at� 35 anos, aumento de 12%
//Idade entre 36 e 50 anos, aumento de 14,5%
//Idade superior a 50 anos, aumento de 17%


main(){
	
	setlocale(LC_ALL, "portuguese");
	
	char nome[50];
	int idade;
	float sal, m1, m2, m3;
	
	printf("informe seu nome: " );
	gets(nome);
	
	printf("informe sua idade: ");
	scanf("%i", &idade);
	
	printf("informe seu salario: ");
	scanf("%f", &sal);
	
	m1=sal*1.12;
	m2=sal*1.145;
	m3=sal*1.17;
	
		if(idade<=35){
			printf("seu aumento sera de 12 % ");
			printf("\nseu novo sal�rio � de: %2.f", m1);
		}
				else if (idade>35 && idade<51){
					printf("seu aumento sera de 14,5 %");
					printf("\nseu novo salario � de: %2.f", m2);
			}
						else if(idade>50){
							printf("seu aumento sera de 17 %");
							printf("\nseu novo salario � de: %2.f", m3);
						}
						
						
	
}
