#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

  setlocale(LC_ALL, "portuguese");

  printf("******************************************\n");
  printf("* Bem-vindo ao nosso jogo de adivinhação *\n");
  printf("******************************************\n");

  int numeroSecreto = 42;
  int chute;

  printf("Qual é o seu chute? ");
  scanf("%i", &chute);
  printf("Seu chute foi %i.\n", chute);
   
  return 0;
}
