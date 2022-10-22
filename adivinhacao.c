#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main(){

  setlocale(LC_ALL, "portuguese");

  printf("\n\n");
  printf("******************************************\n");
  printf("* Bem-vindo ao nosso jogo de adivinhação *\n");
  printf("******************************************\n\n");

  int segundos = time(0);
  srand(segundos);
  
  int numeroGrande = rand();
  
  int numeroSecreto = numeroGrande % 100;
  
  int chute;
  int tentativas = 1;
  double pontos = 1000;

  int acertou = 0;

  int nivel;
  
  printf("Qual o nível de dificuldade?\n");
  printf("(1) Fácil (2) Médio (3) Difícil \n\n");
  printf("Escolha: ");
  scanf("%i", &nivel);

  int numeroTentativas;

  switch(nivel){
    case 1:
      numeroTentativas = 20;
      break;
    case 2:
      numeroTentativas = 15;
      break;
    default:
      numeroTentativas = 5;
      break;
  }

  for(int i = 1; i <= numeroTentativas; i++){
    
    printf("Tentativa %i.\n", tentativas);
    
    printf("Qual é o seu chute? ");
    scanf("%i", &chute);

    if(chute < 0){
      printf("Você não pode chutar números negativos!\n");
      continue;
    }
    
    printf("Seu chute foi %i.\n", chute);

    acertou = (chute == numeroSecreto);
    int maior = chute > numeroSecreto;

    if(acertou){
      break;
    }
    
    else if(maior){
      printf("Seu chute foi maior que o número secreto.\n");
    }
    
    else{
      printf("Seu chute foi menor que o número secreto.\n");
    }

    tentativas++;

    double pontosPerdidos = abs(chute - numeroSecreto) / (double)2;
    pontos = pontos - pontosPerdidos;
 }

  printf("Fim de Jogo!\n");
  
  if(acertou){
    printf("Parabéns! Você ganhou!\n");
    printf("Você acertou em %i tentativas.\n", tentativas);
    printf("Total de pontos: %.2f.\n", pontos);
  }
  else{
    printf("Você errou! Tente novamente!");
  }
  
  return 0;
}
