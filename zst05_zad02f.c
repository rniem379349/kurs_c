#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Node_
{
  struct Node_ *NextNode;
  int val;
} Node;

void podzial(Node *before_start, Node *start, Node *end)
{
  Node *p,*q;
  Node *licznik_przed = start;
  Node *new_before_start;
  int count = 0;
  Node *licznik = before_start;
  while (licznik_przed != end)
  {
    printf("%d\n", licznik_przed -> val);
    licznik_przed = licznik_przed -> NextNode;
  }
  printf("%d\n", end -> val);
  printf("\n\n");

  p = start;
  do
  {
    q = p -> NextNode;
    printf("iteration nr %d:\nq -> val: %d\nstart -> val: %d\n", count, q -> val, start -> val);
    if (q -> val < start -> val)
    {
      printf("%d smaller than %d\n", q -> val, start -> val);
      before_start -> NextNode = q;
      p -> NextNode = q -> NextNode;
      q -> NextNode = start;
      new_before_start = q;
      new_before_start -> NextNode = start;
    }
    else
    {
      printf("%d NOT smaller than %d\n", q -> val, start -> val);
      p = p -> NextNode;
      // q = q -> NextNode;
    }
    count++;
  } while (q != end);

  printf("\n\n\n");

  while (licznik != end)
  {
    printf("%d\n", licznik -> val);
    licznik = licznik -> NextNode;
  }
  printf("%d\n", end -> val);
  printf("\n\n");
}

int main(int argc, char const *argv[]) {
  Node *x1 = malloc(sizeof(Node));
  Node *x2 = malloc(sizeof(Node));
  Node *x3 = malloc(sizeof(Node));
  Node *x4 = malloc(sizeof(Node));
  Node *x5 = malloc(sizeof(Node));
  x1 -> val = 4;
  x1 -> NextNode = x2;
  x2 -> val = 5;
  x2 -> NextNode = x3;
  x3 -> val = 8;
  x3 -> NextNode = x4;
  x4 -> val = 3;
  x4 -> NextNode = x5;
  x5 -> val = 2;
  x5 -> NextNode = NULL;
  podzial(x1,x2,x5);
  return 0;
}
