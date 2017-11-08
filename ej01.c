/* programa que te dice el numero num en pantalla */
//comentario en una sola linea, el otro se abre y cierra
#include <stdio.h>
int main(int argc, char** argv)
{
  int num;
  printf ("Escribi un numero entero: ");
  scanf("%d", &num); // le digo en que direccion de mem escribir
  printf("el numero es %d \n",num);
  return 0;
}
