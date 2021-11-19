#include <stdio.h>
//La cometa simple es perque la llibreria no es standard
#include "calc.h"

int main(){
    int a, b;
    printf("Introduce los dos operandos:");
    scanf("%d %d", &a,&b);
    printf("La suma entre %d y %d es: %d\n",a,b,suma(a, b));
    printf("La resta entre %d y %d es: %d\n",a,b,resta(a, b));
    printf("La multiplicación entre %d y %d es: %d\n",a,b,multiplica(a, b));
    printf("La división entre %d y %d es: %d\n",a,b,dividir(a, b));
    printf("El major entre %d y %d es: %d\n",a,b, major(a,b));
}