#include <stdio.h>
#include <locale.h>

// Levando em considera��o que a nota m�nima de aprova��o � 6,0 e a frequ�ncia m�nima seja de 75%, solicite ao
//usu�rio 2 notas e calcule a m�dia. Solicite tamb�m qual � a carga hor�ria (n�mero de aulas) da disciplina e tamb�m
//solicite a quantidade de presen�as que o aluno teve (em n�mero de aulas). No fim, apresente se o aluno est�
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
	
	printf("informe sua PRESEN�A: ");
	scanf("%f", &p);
	
	f=(p/ch)*100;
	
		if (media>=6 && f>=75){
			printf("APROVADO");
		}
				else{
					printf("REPROVADO");
				}
			
	
}
