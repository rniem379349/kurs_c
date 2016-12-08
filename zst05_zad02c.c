#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// int rozm = 1024;
// int *tab;
// tab = (*int)malloc(rozm * sizeof(int));

typedef struct Node_
{
  int val;
  struct Node_ *nextval;
} Node;

Node *poczatek = NULL;

void licznik(void)
{
  int x;
  do {
    printf("Podaj liczbe: ");
    scanf("%d",&x);
    Node *tmp = malloc(sizeof(Node));
    tmp->val = x;
    tmp->nextval = poczatek;
    poczatek = tmp;
  } while(x != 0);

  while (poczatek != NULL)
  {
    printf("%d\n", poczatek -> val);
    poczatek = poczatek -> nextval;
  }
}

int main() {
  licznik();
  return 0;
}
