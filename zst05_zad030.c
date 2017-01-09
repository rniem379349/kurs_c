#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
  char *tytul;
  char *autor;
  double cena;
  int ilosc;
} ksiazka;

typedef struct wezel_
{
  ksiazka dane;
  struct wezel_ *nastepny, *poprzedni;
} wezel;

void search(wezel *node);
void del_position(wezel *node);

void search(wezel *node)
{
  printf("ee\n");
  wezel *temp = malloc(sizeof(wezel));
  while(node != NULL)
  {
    printf("e\n");
    printf("Autor: %s\nTytul: %s\nIlosc: %d\n\n", node -> dane.autor, node -> dane.tytul, node -> dane.ilosc);
    if (node -> dane.ilosc == 0)
    {
      printf("eeeeeeee\n");
      temp = node -> nastepny;
      printf("%s\n", temp -> dane.autor);
      del_position(node);
    }
    printf("eddd\n");
    node = temp;
    printf("after edd: \n");
  }
}

void del_position(wezel *node)
{
  if(node -> nastepny == NULL && node -> poprzedni != NULL)
  {
    node -> poprzedni -> nastepny = NULL;
  }
  else if(node -> poprzedni == NULL && node -> nastepny != NULL)
  {
    node -> nastepny -> poprzedni = NULL;
  }
  else if(node -> poprzedni != NULL && node -> nastepny != NULL)
  {
    printf("ee\n");
    node -> poprzedni -> nastepny = node -> nastepny;
    node -> nastepny -> poprzedni = node -> poprzedni;
  }
  free(node -> dane.tytul);
  free(node);
}

int main(int argc, char const *argv[]) {
  wezel *pierwszy = malloc(sizeof(wezel));
  wezel *drugi = malloc(sizeof(wezel));
  wezel *trzeci = malloc(sizeof(wezel));
  ksiazka *ks1 = malloc(sizeof(ksiazka));
  ksiazka *ks2 = malloc(sizeof(ksiazka));
  ksiazka *ks3 = malloc(sizeof(ksiazka));
  ks1 -> tytul = "Mamaliga";
  ks1 -> autor = "Kevin Spacey";
  ks1 -> cena = 9.99;
  ks1 -> ilosc = 9;
  pierwszy -> dane = *ks1;
  pierwszy -> nastepny = drugi;
  pierwszy -> poprzedni = NULL;

  ks2 -> tytul = "Gol";
  ks2 -> autor = "Uwe Bol";
  ks2 -> cena = 39.99;
  ks2 -> ilosc = 0;
  drugi -> dane = *ks2;
  drugi -> nastepny = trzeci;
  drugi -> poprzedni = pierwszy;

  ks3 -> tytul = "El Caracan";
  ks3 -> autor = "Zibi Estonoga";
  ks3 -> cena = 14.99;
  ks3 -> ilosc = 23;

  trzeci -> dane = *ks3;
  trzeci -> nastepny = NULL;
  trzeci -> poprzedni = drugi;

  // printf("%s\n", pierwszy -> dane.tytul);
  // printf("%s\n", pierwszy -> dane.autor);
  // printf("%f\n", pierwszy -> dane.cena);
  // printf("%d\n", pierwszy -> dane.ilosc);
  // printf("%s\n", drugi -> dane.tytul);
  // printf("%s\n", drugi -> dane.autor);
  // printf("%f\n", drugi -> dane.cena);
  // printf("%d\n", drugi -> dane.ilosc);
  // printf("%s\n", trzeci -> dane.tytul);
  // printf("%s\n", trzeci -> dane.autor);
  // printf("%f\n", trzeci -> dane.cena);
  // printf("%d\n", trzeci -> dane.ilosc);
  // printf("%s\n", pierwszy -> dane.tytul);
  // printf("%s\n", pierwszy -> dane.autor);
  // printf("%f\n", pierwszy -> dane.cena);
  // printf("%d\n", pierwszy -> dane.ilosc);
  // printf("%s\n", drugi -> dane.tytul);
  // printf("%s\n", drugi -> dane.autor);
  // printf("%f\n", drugi -> dane.cena);
  // printf("%d\n", drugi -> dane.ilosc);
  // printf("%s\n", trzeci -> dane.tytul);
  // printf("%s\n", trzeci -> dane.autor);
  // printf("%f\n", trzeci -> dane.cena);
  // printf("%d\n", trzeci -> dane.ilosc);
  search(pierwszy);
  printf("\n\nNastepnik pierwszego: %s\n", pierwszy -> nastepny -> dane.autor);
  printf("\n\nPoprzednik trzeciego: %s\n", trzeci -> poprzedni -> dane.autor);
  return 0;
}
