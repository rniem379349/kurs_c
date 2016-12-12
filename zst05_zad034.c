#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Node_
{
  struct Node_ *left;
  struct Node_ *right;
  int wart;
} Node;

void bst_insert(Node *korzen, int x)
{
  if (korzen == NULL)
  {
    printf("Is null\n");
    korzen = malloc(sizeof(Node));
    korzen -> wart = x;
    printf("%d\n", korzen -> wart);
    korzen -> left = NULL;
    korzen -> right = NULL;
  }
  else
  {
    if (x < korzen -> wart) {
      bst_insert(korzen -> left, x);
    }
    else {
      bst_insert(korzen -> right, x);
    }
  }
}

int main(int argc, char const *argv[]) {
  Node *korzen;
  bst_insert(korzen, 5);
  printf("%d\n", korzen -> wart);
  bst_insert(korzen, 2);
  bst_insert(korzen, 3);
  return 0;
}
