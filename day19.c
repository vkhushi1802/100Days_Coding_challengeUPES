// Q37-Write a program to find the LCM of two numbers.

// #include <stdio.h>
// int main(){
//     int a,b,lcm;
//     printf("Enter a and b: ");
//     scanf("%d %d", &a,&b);

//     int max = (a>b)? a : b;

//     while( 1){
//         if (max % a == 0 && max % b == 0){
//         lcm = max;
//         break;
//         }
//         max++;

//     }
    
//     printf("L.C.M = %d", lcm);
//     return 0;
   
// }


// Q38-Write a program to find the sum of digits of a number.

#include <stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int sum=0;
    int n= 1;

    if(num<0) num = -num;

    while(num != 0){
        n = num%10;
        sum += n;
        num /= 10;
    }
    printf("sum = %d", sum);
    return 0;
}