#include <stdio.h>

int cuadradoNum (int num);
void cuadradoNumVoid (int num);
void mostarDirecCont (int *pnum);
void invertir (int *pnum, int *pnum2);
void orden (int *pnum, int *pnum2);

int main(){
   int num, num2;
   printf("Ingrese el valor para la variable num: ");
   scanf("%d", &num);
   printf("\nIngrese el valor para la variable num2: ");
   scanf("%d", &num2);
   int *pnum = &num;
   int *pnum2 = &num2;

   printf("a. Cuadrado del valor de num: %d\n", cuadradoNum(num));

   cuadradoNumVoid(num);

   mostarDirecCont(pnum);

   invertir(pnum, pnum2);
   printf("d.Valor de la variable num ahora: %d\n", *pnum);
   printf("d.Valor de la variable num2 ahora: %d\n", *pnum2);

   orden(pnum, pnum2);
   printf("e.Menor valor, variable num: %d\n", *pnum);
   printf("e.Mayor valor, variable num2: %d\n", *pnum2);


   return 0;
}

int cuadradoNum (int num){
   return (num * num);
}

void cuadradoNumVoid (int num){
   printf("b. Cuadrado del valor de num: %d\n", num * num);
}

void mostarDirecCont (int *pnum){
   printf("c.Direccion de memoria de variable num: %d\n", pnum);
   printf("c.Contenido de la variable num: %d\n", *pnum);
}

void invertir (int *pnum, int *pnum2){
   int aux;
   printf("d.Valor de la variable num antes: %d\n", *pnum);
   printf("d.Valor de la variable num2 antes: %d\n", *pnum2);
   aux = *pnum;
   *pnum = *pnum2;
   *pnum2 = aux;
}

void orden (int *pnum, int *pnum2){
   int aux;
   if(*pnum > *pnum2){
      aux = *pnum;
      *pnum = *pnum2;
      *pnum2 = aux;
   }
}