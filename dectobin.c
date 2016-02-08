
//brute force binaire avec nombre de bits variable
//reste a definir ce qu'est un 1 et un 0 sur le signal - temps , niveau , ect ...
// remplacer le printf par un envoi du signal et de sa definition
#include <stdio.h>
#include <math.h>
int main()
{
  int n, c, k, b;
//b est le nombre de bits
   printf("nb de bits\n");
   scanf("%d",&b);

for (n=0; n<pow(2,b); n++)
//pow est la fonction puissance dans math.h; permet 2 puissance b
{


  printf("%d en binaire :\n", n);

  for (c = b; c > 0; c--)
  {
    k = n >> (c-1);

    if (k & 1)
      printf("1");
//remplacer par sortie 1 sur arduino , raspberry ou esp8266
    else
      printf("0");
//remplacer par sortie 1 sur arduino , raspberry ou esp8266
  }

  printf("\n");
}
  return 0;
}
