/* Fibonacci, sumar los terminos menores a 1 mill */
#include <stdio.h>
int fib(int);
int main(int argc, char** argv) {
// printf("%d\n%d\n%d\n",fib(0), fib(1), fib(5));chequeo que anda bien

//ahora pido que sea menor que 1millon y lo guardo
 int j;
 int res;
 while(fib(j)<1000000) {
  if (fib(j)%2==0)
   res = res + fib(j);
  j++;
 }
printf("%d\n",res);

}

int fib(int num) {
 int res, a, b, c, i;
 a = 0;
 b = 1;
 for (i=0; i<num; i++) {
    c = b;
    b = b + a;
    a = c;
 };  
 return a; 
}
