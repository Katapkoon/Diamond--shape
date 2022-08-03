#include <stdio.h>
int main()
{
  int size,size_input,symbol;

  scanf("%d",&size_input);
  
  for(size = 1 ; size <= size_input; size++)
  {
    for(int space = 0; space < size_input - size; space++)
    {
      printf("-");
    }
    for(symbol = 0; symbol < 2*(size) - 1; symbol++)
    {
      printf("*");
    }
    
    for(int space = 0;space < size_input - size; space++)
    {
      printf("-");
    }
    printf("\n");
  }
  for(size = 1; size <= size_input - 1; size++)
  {
    for(int space = 0; space != size; space++)
    {
      printf("-");
    }
    for(symbol = 2*(size_input)- 2; symbol > 2*(size) - 1; symbol--)
    {
      printf("*");
    }
    
    for(int space = 0; space != size ; space++)
    {
      printf("-");
    }
    printf("\n");
  }
}