#include <stdio.h>
#include <locale.h>

// Levando em consideração que a nota mínima de aprovação é 6,0 e a frequência mínima seja de 75%, solicite ao
//usuário 2 notas e calcule a média. Solicite também qual é a carga horária (número de aulas) da disciplina e também
//solicite a quantidade de presenças que o aluno teve (em número de aulas). No fim, apresente se o aluno está
//APROVADO ou REPROVADO

main(){
	
	setlocale(LC_ALL, "portuguese");
	
	float n1,n2,media,ch,p,f;
	
	printf("informe a PRIMEIRA nota: ");
	scanf("%f", &n1);
	
	printf("informe a SEGUNDA nota: ");
	scanf("%f", &n2);
	
	media=(n1+n2)/2;
	
	printf("informe a CARGA HORARIA: ");
	scanf("%f", &ch);
	
	printf("informe sua PRESENÇA: ");
	scanf("%f", &p);
	
	f=(p/ch)*100;
	
		if (media>=6 && f>=75){
			printf("APROVADO");
		}
				else{
					printf("REPROVADO");
				}
			
	
}
