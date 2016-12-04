#include <stdio.h>
#include <stdlib.h>
#include <String.h>
#define ROZMIAR 10

typedef struct
{
  int licznik;
  int mianownik;
} wymierna;

int nwd(int a, int b)
{
  while (a != b)
  {
    if (a < b) b -= a;
    else a -= b;
  }
  return a;
}

int nww(int a, int b)
{
    int wynik = ((a * b)/(nwd(a,b)));
    return wynik;
}

void uprosc(wymierna a)
{
  int NWD = nwd(a.licznik, a.mianownik);
  a.licznik /= NWD;
  a.mianownik /= NWD;
}

void uprosc_w_miejscu(wymierna* a)
{
  int NWD = nwd(a->licznik, a->mianownik);
  a -> licznik /= NWD;
  a -> mianownik /= NWD;
}

void dodaj(wymierna a, wymierna b)
{
  int nowy_licz, nowy_mian;
  if (a.mianownik != b.mianownik)
  {
    int temp_mianownik = a.mianownik; //kopia mianownika a, zeby moc pomnozyc licznik b
    a.mianownik *= b.mianownik;
    a.licznik *= b.mianownik;
    b.mianownik = a.mianownik;
    b.licznik *= temp_mianownik;
  }
  nowy_licz = a.licznik + b.licznik;
  nowy_mian = a.mianownik;
  printf("%d %d\n", nowy_licz, nowy_mian);
}

void pomnoz(wymierna *a, int mnoznik)
{
  a -> licznik *= mnoznik;
}

int main(int argc, char const *argv[]) {
  wymierna wym1;
  wym1.licznik = 2;
  wym1.mianownik = 3;
  wymierna wym2;
  wym2.licznik = 3;
  wym2.mianownik = 4;
  printf("%d %d\n", wym1.licznik, wym1.mianownik);
  uprosc(wym1);
  printf("%d %d\n", wym1.licznik, wym1.mianownik);
  uprosc_w_miejscu(&wym1);
  printf("%d %d\n", wym1.licznik, wym1.mianownik);
  dodaj(wym1,wym2);
  printf("%d %d\n", wym1.licznik, wym1.mianownik);
  printf("%d %d\n", wym2.licznik, wym2.mianownik);
  pomnoz(&wym1, 3);
  pomnoz(&wym2, 4);
  printf("%d %d\n", wym1.licznik, wym1.mianownik);
  printf("%d %d\n", wym2.licznik, wym2.mianownik);
  return 0;
}
