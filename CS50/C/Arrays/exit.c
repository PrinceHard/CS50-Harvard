#include <stdio.h>
#include <cs50.h>

int main(int argc, string argv[])
{
  if(argc != 3)
  {
    printf("Faltando argumento na linha de comando\n");
    return 1;
  }
  else
  {
    printf("hello, %s\n", argv[1]);
    return 0;
  }
}
