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

  int acertou = (chute == numeroSecreto);

  if(acertou){
    printf("Parabéns! Você acertou!\n");
    printf("Jogue de novo! Você é um bom jogador!\n");
  }
  else{
    
    int maior = (chute > numeroSecreto);
    
    if(maior){
      printf("Seu chute foi maior que o número secreto\n");
    }
    else{
      printf("Seu chute foi menor que o número secreto\n");
    }
  }
   
  return 0;
}
