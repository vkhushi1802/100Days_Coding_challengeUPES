// Q33-Write a program to check if a number is an Armstrong number.

#include <stdio.h>
#include <math.h>
int main(){
    int num,digit,count =0,sum=0,original;
    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    int temp = num;     //count no. of digits
    while(temp >0){
        temp = temp/10;
        count++;
    }

    temp = num;         
    while (temp>0){
        digit = temp % 10;
        sum += pow(digit,count);
        temp = temp/10;
    }

    if (sum == original)
    printf("It is an Armstrong number.\n");

    else
    printf("Not an armstrong number.");

    return 0;
}

// Q34- Write a program to check if a number is prime.

#include <stdio.h>
int main(){
    int num, div;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i=2; i<num; i++){
        div = num %i;
        if(div == 0){
            printf("It is a prime number.");
            break;
        }
        else{
        printf("Not a prime number.");
        break;
        }
    }
    return 0;
}