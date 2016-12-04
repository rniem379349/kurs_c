#include <stdio.h>
#include <string.h>
#define ROZMIAR 2

typedef struct
{
  float wartosc;
  char  nazwa[16];
} obiekt;

obiekt spis[ROZMIAR];

int comp(const void *p, const void *q)
{
  /*
  Tak sie porownuje dwa obiekty za pomoca wskaznikow!
  Funkcji przekazujemy dwa wskazniki do jakichs dwoch obiektow (jesli chcemy np tylko posortowac to mozna
  utworzyc wskazniki do voidow), potem tworzymy wskazniki do nich wewnatrz funkcji i na koniec
  odnosimy sie do atrybutow tych obiektow poprzez operator '->' i dzialamy na nich
  Trzeba pamietac, zeby do funkcji przekazac adresy tych obiektow (operator '&')
  */
  obiekt *pp = (obiekt*) p;
  obiekt *qq = (obiekt*) q;
  if (pp -> wartosc > qq -> wartosc) return 1;
  else if (pp -> wartosc < qq -> wartosc) return -1;
  else return 0;
}

int main(int argc, char const *argv[])
{
  spis[0].wartosc = 2.4;
  strcpy(spis[0].nazwa, "Kevin Spacey");
  spis[1].wartosc = 1.4;
  strcpy(spis[1].nazwa, "In your facey");

  printf("1: %f %s\n2: %f %s\n\n", spis[0].wartosc,
  spis[0].nazwa, spis[1].wartosc, spis[1].nazwa);
  
  qsort(spis, ROZMIAR, sizeof(obiekt),comp);
  printf("1: %f %s\n2: %f %s\n", spis[0].wartosc,
  spis[0].nazwa, spis[1].wartosc, spis[1].nazwa);
  return 0;
}





// int compare(float x, float y)
// {
//   if(x > y) return 1;
//   else return 0;
// }
//
// int main()
// {
//   int i,j;
//   float temp;
//   printf("%d\n",compare(2,1.3));
//
//   for(i = 0; i < ROZMIAR; i++)
//   {
//     spis[i].wartosc = ROZMIAR - i;
//     printf("%f\n", spis[i].wartosc);
//   }
//
//   for(i = 0; i < ROZMIAR; i++)
//   {
//     j = i;
//     while(j > 0 && compare(spis[j-1].wartosc, spis[j].wartosc) == 1)
//     {
//       temp = spis[j].wartosc;
//       spis[j].wartosc = spis[j-1].wartosc;
//       spis[j-1].wartosc = temp;
//       j -= 1;
//     }
//   }
//
//   for(i = 0; i < ROZMIAR; i += 10)
//   {
//     printf("%f\n", spis[i].wartosc);
//   }
//   return 0;
// }
