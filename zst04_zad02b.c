#include <stdio.h>
2
#include <stdlib.h>
3
4
typedef enum { okrag_, parabola_, hiperbola_ } rodzaj;
5
typedef struct {
6
// rodzaj obiektu
7
rodzaj   typ;
8
// liczba przechowywanych współrzędnych
9
unsigned ileWspl;
10
// wskaźnik na pierwszą współrzędną
11
float
*wspl;
16
Zestaw 4. Struktury, unie, tablice
12
} obiekt;
13
14
int main(void)
15
{
16
obiekt *obJeden, *obDwa;
17
18
// tworzymy dwa obiekty
19
obJeden = (obiekt *)malloc(sizeof(obiekt));
20
obDwa   = (obiekt *)malloc(sizeof(obiekt));
21
// alokujemy pamięć dla współrzędnych
22
obJeden->wspl = (float *)malloc(sizeof(float)*3);
23
obDwa->wspl   = (float *)malloc(sizeof(float)*3);
24
// przypisujemy wartości
25
obJeden->typ
= okrag_;
26
obJeden->ileWspl = 3;
27
obJeden->wspl[0] = 0;
// X środka
28
obJeden->wspl[1] = 0;
// Y środka
29
obJeden->wspl[2] = 5;
// promień
30
// drugi okrąg taki sam...
31
*obDwa
= *obJeden;
32
// ... ale przesunięty w pionie
33
obDwa->wspl[1]   = 10;
34
// wypisujemy na ekran i zwalniamy pamięć
35
printf(
36
"Obiekt pierwszy: %e, %e, %e\n",
37
obJeden->wspl[0],
38
obJeden->wspl[1],
39
obJeden->wspl[2]
40
);
41
free(obJeden->wspl);
42
free(obJeden);
43
printf(
44
"Obiekt drugi: %e, %e, %e\n",
45
obDwa->wspl[0],
46
obDwa->wspl[1],
47
obDwa->wspl[2]
48
);
49
free(obDwa->wspl);
50
free(obDwa);
51
return 0;
}
