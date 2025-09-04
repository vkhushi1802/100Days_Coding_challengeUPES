// Q29 Write a program to calculate the factorial of a number.

#include <stdio.h>
int main(){
    int n, fact,i;
    printf("Enter a number: ");
    scanf("%d", &n);

    fact = 1;
    for (i=1; i<=n ; i++){
        fact *= i;
    }
    printf("Factorial- %d", fact);
    return 0;
}

// Q30 Write a program to reverse a given number.

#include <stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int r=0;
    while(num>0){
    r = r*10;
    r = r + (num%10);
    num = num/10;
    }
    
    printf("Reversed number is: %d", r);
    return 0;
}
