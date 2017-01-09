#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define ROZMIAR 8

float kwa(float x)
{
  return x*x;
}

float wypisz(float x)
{
  printf("%f\n", x);
  return x;
}

void preorder(float tab[],int index, float (*funkcja)(float))
{
  if(index >= ROZMIAR)
  {
    return;
  }
  tab[index] = funkcja(tab[index]);
  printf("%f\n", tab[index]);
  preorder(tab,(2*index)+1, funkcja);
  preorder(tab,(2*index)+2, funkcja);
}

void inorder(int tab[],int index)
{
  if(index >= ROZMIAR)
  {
    return;
  }
  inorder(tab,(2*index)+1);
  printf("%d\n", tab[index]);
  inorder(tab,(2*index)+2);
}

void postorder(int tab[],int index)
{
  if(index >= ROZMIAR)
  {
    return;
  }
  postorder(tab,(2*index)+1);
  postorder(tab,(2*index)+2);
  printf("%d\n", tab[index]);
}

int main(int argc, char const *argv[]) {
  float tab[ROZMIAR] = {1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0};
  preorder(tab,0,kwa);
  printf("\n");
  // inorder(tab,0);
  // printf("\n");
  // postorder(tab,0);
  return 0;
}
