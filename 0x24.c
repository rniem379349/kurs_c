//char ** slowa;
//
//malloc(25);
//
//scanf do rozmiaru

#include <stdio.h>
#include <stdlib.h>
#include <String.h>
#define MAX 24
#define MAX_S "24"



void f(void);
void czytaj(void);
void wypisz(void);
char ** tab;
int liczba;
int cmp(const void *, const void *);


main(){
    czytaj();
    f();
    wypisz();
    exit(EXIT_SUCCESS);
}

void f() {
    qsort(tab, liczba, sizeof(char*), cmp);
}

void czytaj(void){
    printf("Liczba slow: ");
    scanf("%d", &liczba);

    /*
    obiekt *tablica;
    tablica = (obiekt*)malloc(20*sizeof(obiekt));
    ...
    free(tablica);
    */

    tab = (char **)malloc(liczba*sizeof(char*));
    for (int i = 0; i < liczba; i++){
        tab[i] = (char*)malloc((MAX+1)*sizeof(char));
        scanf("%"MAX_S"s",tab[i]);
    }
    printf("\n");
}

void wypisz(void) {
    for (int i = 0; i < liczba; i++){
        printf("%s\n", tab[i]);
    }
}

int cmp(const void* s1, const void* s2){
    /*char * s1c = (char*)s1;
    char * s2c = (char*)s2;
    return strcmp(s1c, s2c);*/
    return strcmp(*((char**)s1),*((char**
                                   )s2));
}
