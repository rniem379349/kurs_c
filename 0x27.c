//(ad+bc)/bd
#include <stdio.h>
#include <stdlib.h>
#include <String.h>
#define ROZMIAR 10


typedef struct {
        int licznik;
        int mianownik;
    } wymierna;

void f(void);
wymierna uprosc(wymierna);
int nwd(int, int);
wymierna dodaj(wymierna);

main(){
    //f();
    exit(EXIT_SUCCESS);
}

void f(void){

}

wymierna uprosc(wymierna a) {
    int nwd = nwd(a.licznik, a.mianownik);
    a.licznik /= nwd;
    a.mianownik /= nwd;
}

void uprosc_w_miejscu(wymierna a) {
    int nwd = nwd(a->licznik, a->mianownik);
    (*a).licznik /= nwd;
    (*a).mianownik /= nwd;
}
