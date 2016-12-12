#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Node_
{
  int val;
  struct Node_ *nextval;
} Node;

int list_size(Node *node)
{
  int size = 0;
  Node *original_node = node;
  do
  {
    printf("przejscie nr %d: %d %d\n", size, node -> val, node -> nextval -> val);
    node = node -> nextval;
    size++;
  } while (node != original_node);
  return size;
}


int main(int argc, char const *argv[]) {
  Node *x1 = malloc(sizeof(Node));
  Node *x2 = malloc(sizeof(Node));
  Node *x3 = malloc(sizeof(Node));
  Node *x4 = malloc(sizeof(Node));
  Node *x5 = malloc(sizeof(Node));
  x1 -> val = 2;
  x1 -> nextval = x2;
  x2 -> val = 5;
  x2 -> nextval = x3;
  x3 -> val = 7;
  x3 -> nextval = x4;
  x4 -> val = 8;
  x4 -> nextval = x5;
  x5 -> val = 2;
  x5 -> nextval = x1;
  printf("%d\n", list_size(x4));
  printf("%d\n", list_size(x1));
  printf("%d\n", list_size(x3));
  // licz(x4);
  return 0;
}
