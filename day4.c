//Q7. Write a program to swap two numbers without using a third variable.

#include <stdio.h>
int main(){
    int a,b;
    printf("Enter value of a and b: ");
    scanf("%d %d", &a, &b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("a= %d, b= %d", a,b);

    return 0;
}


// Q8. Write a program to find and display the sum of the first n natural numbers.

#include <stdio.h>
int main(){
    int n,i, sum=0 ;

    printf("Enter a number: ");
    scanf("%d ", &n);

    for (i =1; i <= n ; i++){
        sum = sum+i;
    }

    printf("Sum = %d", sum);

    return 0;

    




}
