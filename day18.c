// Q35- Write a program to print all factors of a given number.

#include <stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i =1; i<=num; i++){
       if(num%i == 0)
        printf("%d ", i);

    }
    return 0;
}

// Q36 Write a program to find the HCF (GCD) of two numbers.

#include <stdio.h>
int main(){
    int num1,num2,hcf;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    int min = (num1>num2)? num1 : num2;

    for(int i=1; i<=min; i++){
        if (num1%i == 0 && num2%i == 0){
            hcf = i;
        }
    }

    printf("HCF of %d and %d is: %d\n", num1, num2,hcf);

    return 0;
}
