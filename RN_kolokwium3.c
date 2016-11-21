#include <stdio.h>
#include <string.h>

int strend1(char *s, char *t)
{
  char *x;
  // printf("%s %s\n", s, t);
  int indeks = strlen(s) - strlen(t);
  // printf("%d\n", indeks);
  printf("%c %c\n", *s++, *t++);
  printf("%c %c\n", *s++, *t++);
  x = 0;
  return 0;
}


int strend2(char *s, char *t)
{
  int i, j;
  // printf("%s %s\n", s, t);
  int indeks = strlen(s) - strlen(t);
  // printf("%d\n", indeks);
  for(i = indeks, j = 0; i < strlen(s); i++,j++)
  {
    // printf("%c %c\n", s[i],t[j]);
    if(s[i] != t[j])
    {
      // printf("0 <-\n");
      return 0;
    }
  }
  return 1;
}


int strend3(char *s, char *t, int check)
{
  int i, j;
  check = 1;
  // printf("%s %s\n", s, t);
  int indeks = strlen(s) - strlen(t);
  // printf("%d\n", indeks);
  for(i = indeks, j = 0; i < strlen(s); i++,j++)
  {
    // printf("%c %c\n", s[i],t[j]);
    if(s[i] != t[j])
    {
      check = 0;
    }
  }
  if(check == 0)
    printf("0\n");
  else if(check == 1)
    printf("1\n");
}


int main()
{
  strend1("xyz","yz");
  printf("%d\n",strend2("xyz","yz"));
  strend3("xyz","yz",0);
  return 0;
}
