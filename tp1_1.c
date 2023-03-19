#include <stdio.h>

int main(){
   int num = 369;
   int *pnum = &num;

   printf("Hola mundo\n");
   printf("Direccion de memoria almacenada por el puntero: %d\n", pnum);
   printf("Direccion de memoria de la variable: %d\n", &num);
   printf("Direccion de memoria del puntero: %d\n", &pnum);
   printf("Tamano de memoria de la variable: %d", sizeof(num));
   
   return 0;
}