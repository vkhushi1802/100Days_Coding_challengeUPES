//Q5. Write a program to convert temperature from celsius to Fahrenheit.

#include <stdio.h>
int main(){
    float tc, tf;
    printf("Enter temperature in celsius: ");
    scanf("%f", &tc);
    tf = (tc * 9/5)+32;
    printf("Fahreniet = %f", tf);

    return 0;

}


// Q6. Write a program to swap two numbers using a third variable.

#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter a and b before swap: ");
    scanf("%d %d", &a, &b);
    c = a;
    a = b;
    b = c;
    printf("After swap: %d %d", a, b);

    return 0;


}

