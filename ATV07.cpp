#include <stdio.h>
#include <locale.h>

//desenvolva uma calculadora utilizando switch-case

main(){
	
	setlocale(LC_ALL, "portuguese");
	
	char operacao;
	float n1,n2, ad, sub, div, vz;
	
	printf("informe o primeiro valor: ");
	scanf("%f", &n1);
	
	printf("informe o segundo valor: ");
	scanf("%f", &n2);
	
	printf("informe o operador: (+ - / *): ");
	scanf(" %c", &operacao);
	
	
	ad=(n1+n2);
	sub=(n1-n2);
	div=(n1/n2);
	vz=n1*n2;
	
		switch(operacao){
			case '+':
				printf("voce selecionou ADIÇÃO \n");
				printf("resultado da operação: %f", ad);
				break;
				
			case '-':
				printf("voce selecionou SUBTRAÇÃO \n");
				printf("resultado da operação: %f", sub);
				break;
				
			case '/':
				printf("voce selecionou DIVISÃO \n");
				printf("resultado da operação: %f", div);
				break;
				
			case '*':
				printf("voce selecionou MULTIPLICAÇÃO \n");
				printf("resultado da operação: %f", vz);
				break;
				
			default: 
				printf("ERRO");
				break;
		}
	
}	
