algoritmo "p12"
// Lista 3 exc 14
// ) Solicite os dados de 12 pessoas (nome, idade, sexo, quantidade de filhos) e posteriormente apresente:
//a) O percentual de homens
//b) A média de idade das mulheres (sem filhos)
//c) O nome e idade da pessoa mais jovem
//d) A quantidade de mulheres entrevistadas
//Obs. Todos os dados deverão ser validados na entrada

var
   x:inteiro
   nome:caracter
   idade:inteiro
   sexo:caracter
   filhos:inteiro
   homens,perhomens,pessoa:real
   mulheres:real
   nomej: caracter
   idadej:inteiro
   
inicio

para x de 1 ate 3 faca
pessoa<-pessoa+1
   escreval("informe seu nome: ")
   leia(nome)
   
   escreval("informe sua idade: ")
   leia(idade)
   
repita
   escreval("informe seu sexo (f-m): ")
   leia(sexo)
ate (sexo="f") ou (sexo="m")

se (sexo="m") entao
   homens<-homens+1
fimse
   escreval("informe quantos filhos tem: ")
   leia(filhos)
   
se (sexo="f") entao
   mulheres<-mulheres+1
fimse

se (x=1) entao
   nomej<-nome
   idadej<-idade
fimse

se (idade<idadej) entao
    nomej<-nome
    idadej<-idade
fimse

fimpara

perhomens<-homens/pessoa


   escreval("o percentual de homens é de: ",perhomens)
   escreval("a pessoa mais jovem é: ",nomej, idadej)
   escreval("a quantidade de mulheres entrevistadas foi de: ", mulheres)


fimalgoritmo
