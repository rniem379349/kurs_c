#include <stdio.h>
#include <stdlib.h>
#include <String.h>
#define ROZMIAR 500

typedef struct {
    float wartosc;
    char nazwa[16];
} obiekt;

obiekt spis[ROZMIAR];

void f(void);
int comp(const void *, const void *);


int main(){
    qsort(spis, ROZMIAR, sizeof(obiekt),comp);
    f();
    exit(EXIT_SUCCESS);
    return 0;
}

void f(void){
    for (int i=0; i< ROZMIAR; i += 10){
        printf("%s", spis[i].nazwa);
    }
}

int comp(const void *p, const void *q){
    // p - wskaznik>> odwolanie poprzez p->wartosc
    obiekt *pp  = (obiekt*)p;
    obiekt *qq = (obiekt*)q;
    if (pp->wartosc > qq->wartosc){
        return 1;
    } else if (pp->wartosc < qq->wartosc){
        return -1;
    } else {
        return 0;
    }
}
