#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define ROZMIAR 6

void preorder(int tab[],int index)
{
  if(index >= ROZMIAR-1)
  {
    return;
  }
  printf("%d\n", tab[index]);
  preorder(tab,(2*index)+1);
  preorder(tab,(2*index)+2);
}

void inorder(int tab[],int index)
{
  if(index >= ROZMIAR-1)
  {
    return;
  }
  inorder(tab,(2*index)+1);
  printf("%d\n", tab[index]);
  inorder(tab,(2*index)+2);
}

void postorder(int tab[],int index)
{
  if(index >= ROZMIAR-1)
  {
    return;
  }
  postorder(tab,(2*index)+1);
  postorder(tab,(2*index)+2);
  printf("%d\n", tab[index]);
}

int main(int argc, char const *argv[]) {
  int tab[ROZMIAR] = {1,2,3,4,5};
  preorder(tab,0);
  printf("\n");
  inorder(tab,0);
  printf("\n");
  postorder(tab,0);
  return 0;
}
