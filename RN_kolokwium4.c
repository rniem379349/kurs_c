#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct {
int stopien; // ujemna wartość niech oznacza wielomian zerowy, stopien=0 oznacza wielomian stały;
double *wspolczynniki;
} wielomian;

void malok(wielomian *wiel)
{
  wiel->wspolczynniki = (double*)malloc((wiel->stopien+1) * sizeof(double));
}

wielomian suma(const wielomian A, const wielomian B)
{
  int i;
  wielomian *nowy_wiel;
  // double *wspol_wynik;
  if(A.stopien > B.stopien)
  {
    nowy_wiel->stopien = A.stopien;
  }
  else
  {
    nowy_wiel->stopien = B.stopien;
  }

  malok(nowy_wiel);

  for(i = 0; i < A.stopien+1; i++)
  {
    nowy_wiel->wspolczynniki[i] = A.wspolczynniki[i];
  }
  for(i = 0; i < B.stopien+1; i++)
  {
    nowy_wiel->wspolczynniki[i] += B.wspolczynniki[i];
  }
  return *nowy_wiel;
}

void wypisz_wielomian(const wielomian A)
{
  int i;
  printf("%lfx^0", A.wspolczynniki[0]);
  for(i = 1; i < A.stopien+1; i++)
  {
    if (A.wspolczynniki[i] >= 0) printf(" +%lfx^%d", A.wspolczynniki[i], i);
    else printf(" %lfx^%d", A.wspolczynniki[i], i);
  }
}

int pierwiastek(const wielomian A, double* rozw)
{
  if (A.stopien == 2)
  {
    double a = A.wspolczynniki[2];
    double b = A.wspolczynniki[1];
    double c = A.wspolczynniki[0];
    rozw = (double*)malloc(2 * sizeof(double));
    double delta = b*b - 4*a*c;
    double x1 = (-b - sqrt(delta)) / 2*a;
    double x2 = (-b + sqrt(delta)) / 2*a;
    rozw[0] = x1;
    rozw[1] = x2;
    printf("Rozw: %lf %lf\n", rozw[0], rozw[1]);
    return A.stopien;
  }
}

int main(int argc, char const *argv[]) {
  wielomian A;
  A.stopien = 2;
  malok(&A);
  A.wspolczynniki[0] = 2;
  A.wspolczynniki[1] = -3;
  A.wspolczynniki[2] = 1;
  int i;

  wielomian B;
  B.stopien = 3;
  malok(&B);
  B.wspolczynniki[0] = 0;
  B.wspolczynniki[1] = 0;
  B.wspolczynniki[2] = -1;
  B.wspolczynniki[3] = 1;
  printf("A:\n");
  wypisz_wielomian(A);
  printf("\n\n");
  printf("B:\n");
  wypisz_wielomian(B);
  printf("\n\n");
  printf("Suma A i B:\n");
  wielomian C;
  C = suma(A,B);
  wypisz_wielomian(C);
  printf("\n\n");
  double *rozw;
  pierwiastek(A, rozw);
  return 0;
}
