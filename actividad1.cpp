#include <stdio.h>

int numero;

int main(){
    // pedir un número
    printf("Ingrese un número:\n");
    // leer un número
    scanf("%d", &numero);
    // verificar si es par o impar
    if(numero%2 == 0){
        // entregar respuesta
        printf("El número es par!\n");
    } else {
        // entregar respuesta
        printf("El número es impar!\n");
    }
    
    return 0;
}
