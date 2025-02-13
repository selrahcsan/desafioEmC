//# Desafio Laboratório de C

//Crie um programa que receba nomes ( João, Maria, José, etc ...) como argumentos
//e, para cada nome imprima : Um para NOME, um para mim. Se nenhum argumento for
//fornecido, a saída impressa deverá ser: Um para você, um para min.


#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
  char nomes[2][50];
  if (argc > 2){
    strcpy(nomes[1], argv[1]);
    strcpy(nomes[0], argv[2]);
  }
  else{
    strcpy(nomes[0], "min");
    strcpy(nomes[1], "você");
  }

  printf("Um para %s, um para %s\n", nomes[0], nomes[1]);
  return 0;
}

