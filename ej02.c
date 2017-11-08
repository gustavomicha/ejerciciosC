/* definir numeros multiplos de 3 y 5 y sumar todos  */
#include <stdio.h>
int main(int argc, char** argv)
{
 int i;
 int res;
 res = 0;
 for(i=1;i<=1000;i++){
   if(i%3==0 || i%5==0)
  //printf("%d\n",i); chequeo que funciona el if
  res = res + i ;
  };
  printf("%d\n",res);
return 0;
}
