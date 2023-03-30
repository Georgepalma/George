#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
int main(void){
  char nome [100];
  int idade;
  float sal;
  printf("Digite a sua nome: ");
  scanf("%s", &nome);
  printf("\nDigite sua idade: ");
  scanf("%d", &idade);
  printf("\nDigite seu salario: ");
  scanf("%f",&sal);
  
  if(sal <= 1302)
     printf("\n Olá %s Seu salário é: %2.f", nome, sal);
  else if (sal <=2571.29) {
     sal*= 1 - 0.075;
           printf("\n Olá %s Seu salário é: %2.f", nome , sal); 
  }
  else if (sal <= 3856.94){
    sal *= 1 - 0.09;
          printf("\n Olá %s Seu salário é: %2.f", nome, sal);
  }
  else if (sal <= 7507.49){
    sal *= 1 - 0.12;
           printf("\n Olá %s Seu salário é: %2.f", nome, sal);
  }
  else{
    sal *= 1 - 0.14;
        printf("\n Olá %s Seu salário é: %2.f\n", nome, sal);
  }
  if (idade >= 18 ){
    printf("\n===========Seja bem Vindo ao Cassino!===========");
  }
  char perg;
  float apst, i;
  int soma, res;
  printf("\n Deseja apostar ? S/N: ");
  scanf("%s", &perg);
  if (perg >= 'S'){
    printf("\nQuanto deseja apostar: ");
    scanf("%f", &apst);
    soma = sal -= apst;
    printf("Seu saldo atual é: %d", soma);
    printf("\n rodando a roleta: ");
  for ( i = 0; i < 1 ; i++){
    printf("\nSeu ganho total é de: %d", rand() %100 + res);
  }
  }
  else{
    printf("Até mais, %s", nome);
  }
  
  return 0;
}

