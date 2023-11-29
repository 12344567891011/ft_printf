#include <stdio.h>
#include<stdarg.h>

int sum(int nb, ...)
{
  int max = 0;

  va_list ptr;

  va_start(ptr , nb);

  int i = 0;
  while (i < nb)
  {
    int tmp = va_arg(ptr, int);
    max = tmp > max ? tmp : max ;
    i++;
  }
  va_end(ptr);
  return(max);
}

int main(void)
{
  printf("addition de 4 nombre est %d",sum(3,10,5,20));
}
	 