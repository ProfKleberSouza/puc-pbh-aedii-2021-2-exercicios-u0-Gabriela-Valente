#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#define MAX 10

typedef struct Aluno{
  char nome[100];
  float nota;
}Aluno;

void media(Aluno *v, int n){
  float soma = 0, media = 0;
  for(int i = 0; i < n; i++){
    soma = soma +  v[i].nota;
  }
  media = soma / (float)n;  
  printf("NOTA MEDIA = %0.2f\n", media); 
}

void ordena(Aluno v[], int tam, Aluno tres[3]) {
  Aluno aux;
  for (int i = 0; i < 3; i++) {
    for (int j = i+1; j < 3; j++) {
      if (strcmp(v[j].nome, v[i].nome) < 0) {
        aux = tres[i];
        tres[i] = tres[j];
        tres[j] = aux;
      }
    }
  }
  printf("%s %.2f\n", tres[0].nome, tres[0].nota);
  printf("%s %.2f\n", tres[1].nome, tres[1].nota);
  printf("%s %.2f\n", tres[2].nome, tres[2].nota);
}

void maiorNota(Aluno todos[], Aluno tresMelhores[3] , int N){
  Aluno aux;
  for(int i = 0; i < N; i++){
    for(int j = i + 1; j < N; j++){
      if (todos[j].nota > todos[i].nota) {
        aux = todos[i];
        todos[i] = todos[j];
        todos[j] = aux;
      }
    }
    tresMelhores[0] = todos[0];
    tresMelhores[1] = todos[1];
    tresMelhores[2] = todos[2];
  }
  ordena(todos, N, tresMelhores);
}

int main(void) {
  int n;
  Aluno tresMelhoresAlunos[3];

  scanf("%d", &n);
  Aluno notas[n];

  for(int i = 0; i < n; i++){
    scanf("%s %f", notas[i].nome, &notas[i].nota);
  }

  media(notas, n);
  maiorNota(notas, tresMelhoresAlunos, n);
}