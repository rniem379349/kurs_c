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
  int size = 1;
  int original_node_val = node -> val;
  do
  {
    printf("przejscie nr %d: %d %d\n", size, node -> val, node -> nextval -> val);
    node = node -> nextval;
    size++;
  } while (node -> nextval -> val != original_node_val);
  return size;
}

int main(int argc, char const *argv[]) {
  Node *x1 = malloc(sizeof(Node));
  Node *x2 = malloc(sizeof(Node));
  Node *x3 = malloc(sizeof(Node));
  Node *x4 = malloc(sizeof(Node));
  Node *x5 = malloc(sizeof(Node));
  x1 -> val = 3;
  x1 -> nextval = x2;
  x2 -> val = 5;
  x2 -> nextval = x3;
  x3 -> val = 7;
  x3 -> nextval = x4;
  x4 -> val = 8;
  x4 -> nextval = x5;
  x5 -> val = 2;
  x5 -> nextval = x1;
  printf("%d", list_size(x3));
  return 0;
}
