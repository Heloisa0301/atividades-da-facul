#include <stdio.h>
#include <locale.h>

//Solicite o mês (em número) para o usuário e apresente a descrição do mesmo (Ex. “janeiro”, “fevereiro”, etc).


main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int n;
	
	printf("informe um número de mes: ");
	scanf("%i", &n);
	
		switch(n){
			case 1 :
				printf("JANEIRO");
				break;
			
			case 2 :
				printf("FEVEREIRO");
				break;
				
			case 3 :
				printf("MARÇO");
				break;
				
			case 4 :
				printf("ABRIL");
				break;
				
			case 5 :
				printf("MAIO");
				break;
				
			case 6 :
				printf("JUNHO");
				break;
				
			case 7 :
				printf("JULHO");
				break;
				
			case 8 :
				printf("AGOSTO");
				break;
				
			case 9 :
				printf("SETEMBRO");
				break;
				
			case 10 :
				printf("OUTUBRO");
				break;
				
			case 11 :
				printf("NOVEMBRO");
				break;
				
			case 12 :
				printf("DEZEMBRO");
				break;	
				
					default:
						printf("INVÁLIDO");
						break;
		}
			
}
