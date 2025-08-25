// Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>
#include <math.h>                          
int main(){
    float P,R,T,SI,CI;
    printf("Enter value of P,R,T");
    scanf("%f %f %f", &P, &R, &T);
    

    SI = (P*R*T)/100;
    CI = P*(pow((1+ R /100), T)) - P;

    printf("SI= %f, CI= %f", SI, CI);

    return 0;
}

// Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include <stdio.h>
int main(){
    int num,hours,min,sec;

    printf("Enter time in seconds: ");
    scanf("%d", &num);

    hours = num / 3600;
    min = (num % 3600) / 60;
    sec = num % 60;
    
    printf("%d:%d:%d", hours,min,sec);

    return 0;

}