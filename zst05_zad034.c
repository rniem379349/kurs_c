#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct wezel_
{
  long double dane;
  struct wezel_ *lewy, *prawy;
} wezel;

int min(int x, int y)
{
  if (x < y) return x;
  else return y;
}

wezel* bst_insert(long double dane, wezel* node) {
  printf("Inserting %lf:\n", dane);
  if (node == NULL)
  {
    printf("node is null\n");
    wezel *wezel = malloc(sizeof(wezel));
    wezel -> dane = dane;
    wezel -> lewy = NULL;
    wezel -> prawy = NULL;
    return wezel;
  }
  else {
    printf("node is not null\n");
    if (dane <= node -> dane) node -> lewy = bst_insert(dane, node -> lewy);
    else node -> prawy = bst_insert(dane, node -> prawy);
    printf("Done for %lf\n", dane);
  }
  return node;
}

int shortest_way(wezel *root)
{
  if (root == NULL)
    return 0;

  if (root -> lewy == NULL && root -> prawy == NULL)
    return 1;

  if (root -> lewy == NULL)
    return shortest_way(root -> prawy) + 1;

  if (root -> prawy == NULL)
    return shortest_way(root -> lewy) + 1;

  return min(shortest_way(root -> lewy), shortest_way(root -> prawy)) + 1;
}

int main(int argc, char const *argv[]) {
  wezel *korzen;
  bst_insert(3.2, korzen);
  // bst_insert(4.0, korzen);
  // bst_insert(5.0, korzen);
  // bst_insert(2.0, korzen);
  printf("%lf\n", korzen -> dane);
  printf("Shortest way: %d\n", shortest_way(korzen));
  return 0;
}
