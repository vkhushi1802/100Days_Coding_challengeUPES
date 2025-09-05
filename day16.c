// Q31- Write a program to take a number as input and print its equivalent binary representation.

#include <stdio.h>
int main(){
    int i=0,num,bin[32];
    printf("Enter a number: ");
    scanf("%d", &num);


    if (num == 0){
    printf("binary-0\n");
    return 0;
    }

    while(num>0){
        bin[i]= num%2;
        num = num/2;
        i++;
    }

    for(int j=i-1; j>=0; j--){
        printf("%d", bin[j]);
    }
    
    return 0;

}


// Q32-Write a program to check if a number is a palindrome.

#include <stdio.h>
int main(){
    int num, rev, original;
    printf("Enter a number: ");
    scanf("%d", &num);
    original = num;

    int r=0;
    while(num>0){
    r = r*10;
    r = r + (num%10);
    num = num/10;
    }
    
    if (original == r)
    printf("It is a palindrome.");

    else
    printf("Not a palindrome.");

    return 0;

}
