// Write a program to input an integer and check whether it is even or odd using if–else.

#include <stdio.h>
int main(){
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num%2 == 0)
    printf("%d is even", num);

    else{
    printf("%d is odd", num);
    }
    return 0;

}


// Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

#include <stdio.h>
int main(){
    int num;
    printf("Enter an integer");
    scanf("%d", &num);
    
    if (num>0)
        printf("Positive");
    else
    {
        if(num<0)
        printf("Negative");
        else
        printf("0");
    }
    return 0;
}

