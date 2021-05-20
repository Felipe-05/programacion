#include <stdio.h> 

int main (){
    int num1, num2, num3;
    printf("ingrese el primer número:\n");
    scanf("%d",&num1);
    printf("ingrese el segundo número:\n");
    scanf("%d",&num2);
    printf("ingrese el tercer número:\n");
    scanf("%d",&num3);

    if((num1 > num2) && (num1 > num3)) {

       printf("el primer número es mayor:\n");
        } else if ((num2 > num3) && (num2> num1)) {
            printf("el segundo número es mayor:\n");
            } else if ((num3 > num1) && (num3 > num2)) {
            printf ("el tercer número es mayor:\n");
            } else if ((num1 == num2) && (num1 > num3)){
              printf ("el primer y segundo número son iguales y mayores al tercero:\n");
            } else if ((num2 == num3) && (num2 > num1)){
              printf ("el segundo y tercer número son iguales y mayores al primero:\n");
            } else if ((num1 == num3) && (num1 > num2)){
              printf ("el primer y tercer número son iguales y mayores al segundo:\n");
            } else {
                printf ("los tres numeros son iguales");
            }
    return 0;
}
