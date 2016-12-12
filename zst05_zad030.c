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


extern wezel *pierwszy;
ksiazka *ks1;
ksiazka *ks2;
ksiazka *ks3;

int main(int argc, char const *argv[]) {
  ks1 -> tytul = "Mamaliga";
  ks1 -> autor = "Kevin Spacey";
  ks1 -> cena = 9.99;
  ks1 -> ilosc = 3;

  ks2 -> tytul = "Gol";
  ks2 -> autor = "Uwe Bol";
  ks2 -> cena = 39.99;
  ks2 -> ilosc = 0;

  ks3 -> tytul = "El Caracan";
  ks3 -> autor = "Zibi Estonoga";
  ks3 -> cena = 14.99;
  ks3 -> ilosc = 2;
  return 0;
}
