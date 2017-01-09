#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct wezel_
{
  double dane;
  struct wezel_ *lewy, *prawy;
} wezel;

int min(int x, int y)
{
  if (x < y) return x;
  else return y;
}

wezel* bst_insert(double dane, wezel* node) {
  // printf("Inserting %g:\n", dane);
  if (node == NULL)
  {
    // printf("node is null\n");
    wezel *wezell = malloc(sizeof(wezel));
    if (wezell == NULL)
    {
      printf("Blad\n");
      return node;
    }
    wezell -> dane = dane;
    wezell -> lewy = NULL;
    wezell -> prawy = NULL;
    node = wezell;
    return wezell;
  }
  else {
    // printf("node is not null\n");
    if (dane <= node -> dane) node -> lewy = bst_insert(dane, node -> lewy);
    else node -> prawy = bst_insert(dane, node -> prawy);
    // printf("Done for %g\n", dane);
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

void preorder(wezel *root)
{
  if (root == NULL) return;
  printf("%f\n", root -> dane);
  preorder(root -> lewy);
  preorder(root -> prawy);
}

int main(int argc, char const *argv[]) {
  wezel *korzen = malloc(sizeof(wezel));
  korzen -> dane = 2.5;
  bst_insert(3.2, korzen);
  bst_insert(2.0, korzen);
  bst_insert(5.0, korzen);
  bst_insert(1.0, korzen);
  // printf("%g\n", korzen -> dane);
  // printf("%g\n", korzen -> lewy -> dane);
  // printf("%g\n", korzen -> prawy -> dane);
  // printf("%g\n", korzen -> prawy -> prawy -> dane);
  printf("Shortest way: %d\n", shortest_way(korzen));
  preorder(korzen);
  return 0;
}
