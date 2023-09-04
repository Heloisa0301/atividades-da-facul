algoritmo "zodiaco"
// Lista 3 exc 15
//Crie um algoritmo chamado Zodíaco. Este algoritmo deve solicitar
//parcialmente a data de nascimento (dia e mês) e apresentar o seu signo

var
  dia,mes:inteiro
  cont:caracter
  
inicio
  escreval("ZODIACO")
  
repita
  escreva("informe o dia do seu nascimento (1-31): ")
  leia(dia)



   escreva("informe o mes do seu nascimento (1-12): ")
   leia(mes)


se (dia>=21) e (dia<=31) e (mes=1) ou  (dia<20) e (mes=2) entao
      escreval("AQUÁRIO")
fimse

se (dia>=20) e (dia<=29) e (mes=2) ou  (dia<21) e (mes=3) entao
      escreval("PEIXES")
fimse

se (dia>=21) e (dia>=31) e (mes=3) ou  (dia<21) e (mes=4) entao
      escreval("ÁRIES")
fimse

se (dia>=21) e (dia<=31) e (mes=4) ou  (dia<21) e (mes=5) entao
      escreval("TOURO")
fimse

se (dia>=21) e (dia<=31) e (mes=5) ou  (dia<21) e (mes=6) entao
      escreval("GÊMEOS")
fimse

se (dia>=21) e (dia<=31) e (mes=6) ou  (dia<22) e (mes=7) entao
      escreval("CÂNCER")
fimse

se (dia>=22) e (dia<=31) e (mes=7) ou  (dia<23) e (mes=8) entao
      escreval("LEÃO")
fimse

se (dia>=23) e (dia<=31) e (mes=8) ou  (dia<23) e (mes=9) entao
      escreval("VIRGEM")
fimse

se (dia>=23) e (dia<=31) e (mes=9) ou  (dia<23) e (mes=10) entao
      escreval("LIBRA")
fimse

se (dia>=23) e (dia<=31) e (mes=10) ou (dia<23) e (mes=11) entao
      escreval("ESCORPIÃO")
fimse

se (dia>=22) e (dia<=31) e (mes=11) ou (dia<22) e (mes=12)  entao
      escreval("SAGITÁRIO")
fimse

se (dia>=22) e (dia<=31) e (mes=12) ou (dia<21) e (mes=1) entao
      escreval("CAPRICÓRNIO")
fimse


   escreval("deseja continuar: (S-N)")
   leia(cont)
ate (cont="n")

fimalgoritmo
