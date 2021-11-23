#include <stdio.h>

int fun(char *str1)

{

  char *str2 = str1;

  while(*++str1);

  return (str1-str2);

}

int main()

{

  char *str = "PROcoders";

  printf("%d", fun(str));

  return 0;

}
