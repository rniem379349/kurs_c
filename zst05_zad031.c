#include <stdio.h>
#include <stdlib.h>

// void pas_tri(int rows)
// {
//   int i,j,el;
//   int *line = malloc(sizeof(int));
//   line[0] = 1;
//   printf("%d\n", line[0]);
//   for (i = 0; i < rows; i++)
//   {
//     printf("Row %d: ", i);
//     int *lineol = malloc((i+2)*sizeof(int));
//     lineol[0] = 1;
//     for (j = 0; j < (sizeof(line)/sizeof(line[0]))-1; j++)
//     {
//       printf("j: %d", j);
//       lineol[j] = line[j] + line[j+1];
//     }
//     lineol[j+1] = 1;
//     // line = lineol;
//     for (el = 0; el < (sizeof(lineol)/sizeof(lineol[0])); el++)
//     {
//       printf("%d ", lineol[el]);
//     }
//     printf("\n");
//   }
// }

void pascal(int rows)
{
  int i,j;
  int arr[rows][rows];
  for (i = 0; i < rows; i++)
  {
    for (j = 0; j < rows; j++)
    {
      arr[i][j] = 0;
    }
  }
  arr[0][0] = 1;
  int cur_size = 1;
  for (i = 1; i < rows; i++)
  {
    arr[i][0] = 1;
    for (j = 1; j < cur_size; j++)
    {
      arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
    }
    arr[i][cur_size] = 1;
    cur_size++;
  }
  for (i = 0; i < rows; i++)
  {
    for (j = 0; j < rows; j++)
    {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }
}

int main(int argc, char const *argv[])
{
  // pas_tri(3);
  pascal(5);
  return 0;
}
