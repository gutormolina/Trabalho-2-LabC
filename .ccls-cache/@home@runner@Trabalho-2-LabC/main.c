#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int a, b, c;
  do{  
    do{
      printf("Pedra, Papel e Tesoura\nOpções:\n1.Pedra\n2.Papel\n3.Tesoura\nInsira sua jogada: ");
      scanf("%d", &a);
      if(a!=1&&a!=2&&a!=3)
        printf("\nJOGADA INVÁLIDA\n\n");
    }while(a!=1&&a!=2&&a!=3); 
    srand(time(NULL));
    b = rand() % 3 + 1;
    printf("\n");
    switch(b){
      case 1:
        printf("\nJogada do Computador: Pedra\n");
        if(a==1)
          printf("EMPATE\n");
        else if(a==2)
          printf("VITÓRIA\n");
        else
          printf("DERROTA\n");
        break;
      case 2:
        printf("Jogada do Computador: Papel\n");
        if(a==1)
          printf("DERROTA\n");
        else if(a==2)
          printf("EMPATE\n");
        else
          printf("VITÓRIA\n");
        break;
      case 3:
        printf("Jogada do Computador: Tesoura\n");
        if(a==1)
          printf("VITÓRIA\n");
        else if(a==2)
          printf("DERROTA\n");
        else
          printf("EMPATE\n");
        break;
    }    
    do{
      printf("\nQuer jogar novamente? 1.Sim 2.Não ");
      scanf("%d", &c);
      printf("\n");
      if(c!=1&&c!=2)
        printf("INVÁLIDO\n");
    }while(c!=1&&c!=2);
  }while(c==1);
}