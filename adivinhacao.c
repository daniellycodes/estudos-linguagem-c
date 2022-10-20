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
  int tentativas = 1;

  int pontos = 1000;

  while(1){
    
    printf("Tentativa %i.\n", tentativas);
    
    printf("Qual é o seu chute? ");
    scanf("%i", &chute);

    if(chute < 0){
      printf("Você não pode chutar números negativos!\n");
      continue;
    }
    
    printf("Seu chute foi %i.\n", chute);

    int acertou = (chute == numeroSecreto);
    int maior = chute > numeroSecreto;
    int menor = chute < numeroSecreto;

    if(acertou){
      printf("Parabéns! Você acertou!\n");
      printf("Jogue de novo! Você é um bom jogador!\n");
      break;
    }
    
    else if(maior){
      printf("Seu chute foi maior que o número secreto.\n");
    }
    
    else if(menor){
      printf("Seu chute foi menor que o número secreto.\n");
    }

    tentativas++;

    int pontosPerdidos = (chute - numeroSecreto) / 2;
    pontos = pontos - pontosPerdidos;
 }

  printf("Fim de Jogo!\n");
  printf("Você acertou em %i tentativas.\n", tentativas);
  printf("Total de pontos: %i.\n", pontos);
  
  return 0;
}
