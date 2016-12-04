#include <stdio.h>
#include <string.h>

#define ROZMIAR 500

typedef struct
{
  char nazwa[32];
  unsigned long id;
  double wartosc;
} probka;

probka tablica[ROZMIAR];

int compare(const probka *s1, const probka *s2)
{
  /*Comparison function used to compare the 'wartosc' values of two elements of type probka*/
  probka *condo = (probka*)s1;
  probka *ttiero = (probka*)s2;
  if (condo -> wartosc > ttiero -> wartosc) return 1;
  else if (condo -> wartosc < ttiero -> wartosc) return -1;
  else return 0;
}

void print_arr(void)
{
  int i;
  for (i = 0; i < ROZMIAR; i++){printf("%d: %s %lf\n", i, tablica[i].nazwa, tablica[i].wartosc);}
}

double median(probka arr[ROZMIAR])
{
  double med;
  if (ROZMIAR % 2 == 0)
  {
    med = arr[(ROZMIAR/2)-1].wartosc + arr[(ROZMIAR/2)].wartosc;
    med /= 2;
  }
  else {med = arr[(ROZMIAR/2)].wartosc;}
  return med;
}

int main(int argc, char const *argv[]) {
  //populate the array
  int i;
  for(i = 0; i < ROZMIAR; i++)
  {
    strcpy(tablica[i].nazwa, "Condottiero");
    tablica[i].id = i;
    tablica[i].wartosc = 2.4 * i + 10 * i;
    printf("%s, %d, %lf\n", tablica[i].nazwa, tablica[i].id, tablica[i].wartosc);
  }
  tablica[2].wartosc = 100;
  //sort the array using our compare function and print it out
  qsort(tablica, ROZMIAR, sizeof(probka), compare);
  print_arr();
  //calculate and print out the median value
  printf("%lf\n", median(&tablica));
  return 0;
}
