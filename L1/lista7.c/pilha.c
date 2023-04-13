#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define true 1
#define false 0


typedef struct Node{
    int number;
    struct Node *next;
}Node;

typedef struct tipoPilha{
      Node *topo;
}tipoPilha;

void pop(tipoPilha *stack);
void createStack(tipoPilha *stack);
int shorter(tipoPilha *stack);
void push(tipoPilha *stack, int number);

void main(){
  tipoPilha stack;
  char op[10];
  int numop;
  int number, tmp;

  scanf("%d", &numop);

  createStack(&stack);

  while(numop--){
    scanf("%s", op);

    if(strcmp(op,"PUSH")==0){
      scanf("%d", &number);
      push(&stack, number);
    }else if(strcmp(op, "POP")==0){
        pop(&stack);
    }else{
      tmp = shorter(&stack);
      if(tmp == -1){
        printf("EMPTY\n");
      }else{
        printf("%d\n",tmp);
      }
    }
  }
}
//cria
void createStack(tipoPilha *stack){
    stack ->topo = NULL;
}
//insere
void push(tipoPilha *stack, int number){
  Node *aux;
  //alocaçao
  aux = (Node*)malloc(sizeof(Node));

  if(!aux){
    return(1);
  }

  aux->next = stack->topo;
  stack->topo = aux;
  aux->number = number;
}
//remove
void pop(tipoPilha *stack){
    Node *aux;
    aux = stack->topo;
    if(aux){
        stack->topo = aux->next;
        free(aux);
    }else{
      printf("EMPTY\n");
    }
}

int shorter(tipoPilha *stack){
  Node *aux;
  aux = stack->topo;

  if(!aux){
    return -1;
  }
  int menor = aux->number;

  while(aux){
    if(aux->number < menor){
      menor = aux->number;
    }
    aux = aux->next;
  }

  return menor;
}
