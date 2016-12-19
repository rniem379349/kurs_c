#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define ROZMIAR 2

typedef struct wezel_
{
  struct wezel_ *pNastepny;
  int iWartosc;
} wezel;

wezel *pPierwszy;
wezel *pDrugi;

int comp(const void *p, const void *q)
{
  /*
  Tak sie porownuje dwa obiekty za pomoca wskaznikow!
  Funkcji przekazujemy dwa wskazniki do jakichs dwoch obiektow (jesli chcemy np tylko posortowac to mozna
  utworzyc wskazniki do voidow), potem tworzymy wskazniki do nich wewnatrz funkcji i na koniec
  odnosimy sie do atrybutow tych obiektow poprzez operator '->' i dzialamy na nich
  Trzeba pamietac, zeby do funkcji przekazac adresy tych obiektow (operator '&')
  */
  wezel *pp = (wezel*) p;
  wezel *qq = (wezel*) q;
  if (pp -> iWartosc > qq -> iWartosc) return 1;
  else if (pp -> iWartosc < qq -> iWartosc) return -1;
  else return 0;
}

int main(int argc, char const *argv[]) {
  pPierwszy -> iWartosc = 10;
  pPierwszy -> pNastepny = pDrugi;
  pDrugi -> iWartosc = 5;
  pDrugi -> pNastepny = NULL;
  return 0;
}
