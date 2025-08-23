// Q1. Write a program to input two numbers and display their sum.

#include <stdio.h>
int main(){
    int a,b,s;
    printf("Enter value of a and b");
    scanf("%d %d", &a ,&b);
    s=a+b;
    printf("Sum= %d", s);

    return 0;

}


// Q2. // Write a program to input two numbers and display their sum,difference,product,and quotient.

#include <stdio.h>
int main(){
    int a,b,s,d,p,q;
    printf("Enter value of a and b: ");
    scanf("%d %d", &a, &b);
    s = a+b;
    d = a-b;
    p = a*b;
    
    printf("Sum= %d, diff= %d, product= %d, ", s, d, p);

    if (b != 0){
        q = a/b;
        printf("Quotient = %d", q );
    }
    else{
        printf("Quotient-error! any num divided by 0 is not defined.");
    }

    
    return 0;
}