#include <stdio.h>
#include <stdlib.h>
#include <String.h>
#define ROZMX 2
#define ROZMY 2

typedef struct
{
  enum { pusta_, tekst_, liczba_, formula_ } typ; // typ komórki
  union
  {
    char *tekst; // treść tekstu lub formuły
    double liczba; // przechowywana wartość liczbowa
  } dane;
} komorka;


void csv(komorka kom)
{
  printf("1\n");
  char *type = (char*)malloc(sizeof(char) * 10);
  // char *str = (char*)malloc(sizeof(char) * 20);
  printf("2\n");
  double num;
  switch(kom.typ)
  {
    case pusta_:
      strcpy(type, "pusta_");
      break;
    case tekst_:
      strcpy(type, "tekst_");
      break;
    case liczba_:
      strcpy(type, "liczba_");
      break;
    case formula_:
      strcpy(type, "formula_");
      break;
    default:
      break;
  }
  printf("3\n");
  // printf("%s\n", kom.dane.tekst);
  // strcpy(str, kom.dane.tekst);
  printf("4\n");
  num = kom.dane.liczba;
  printf("5\n");
  printf("%s,%lf\n", type, num);
  printf("6\n");
  free(type);
  // free(str);
}

int main(int argc, char const *argv[]) {
  //create the array and populate it
  komorka arkusz[ROZMY][ROZMX];
  arkusz[0][0].typ = pusta_;
  arkusz[0][0].dane.tekst = "Chicken";
  arkusz[0][0].dane.liczba = 12.49;
  arkusz[0][1].typ = tekst_;
  arkusz[0][1].dane.tekst = "Pizza";
  arkusz[0][1].dane.liczba = 9.99;
  arkusz[1][0].typ = liczba_;
  arkusz[1][0].dane.tekst = "Beer";
  arkusz[1][0].dane.liczba = 2.99;
  arkusz[1][1].typ = formula_;
  arkusz[1][1].dane.tekst = "Wine";
  arkusz[1][1].dane.liczba = 4.99;
  csv(arkusz[0][0]);
  csv(arkusz[0][1]);
  csv(arkusz[1][0]);
  csv(arkusz[1][1]);
  return 0;
}
