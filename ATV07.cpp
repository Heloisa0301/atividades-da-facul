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
				printf("voce selecionou ADI��O \n");
				printf("resultado da opera��o: %f", ad);
				break;
				
			case '-':
				printf("voce selecionou SUBTRA��O \n");
				printf("resultado da opera��o: %f", sub);
				break;
				
			case '/':
				printf("voce selecionou DIVIS�O \n");
				printf("resultado da opera��o: %f", div);
				break;
				
			case '*':
				printf("voce selecionou MULTIPLICA��O \n");
				printf("resultado da opera��o: %f", vz);
				break;
				
			default: 
				printf("ERRO");
				break;
		}
	
}	
