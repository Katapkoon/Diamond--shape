#include <stdio.h>
int main()
{
  int size,size_input,symbol,space;

  scanf("%d",&size_input);
  
  for(size = 1 ; size <= size_input; size++)
  {
    for(space = 1; space <= size_input - size; space++)
    {
      printf(" ");
    }
    for(symbol = 1; symbol <= 2*(size) - 1; symbol++)
    {
      printf("*");
    }
    printf("\n");
  }
  for(size = 1; size <= size_input - 1; size++)
  {
    for(space  = 1; space <= size; space++)
    {
      printf(" ");
    }
    for(symbol = 1; symbol <= 2*(size_input - size) - 1; symbol++)
    {
      printf("*");
    }
    printf("\n");
  }
}