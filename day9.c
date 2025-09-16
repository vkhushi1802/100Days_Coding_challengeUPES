// Q-17. Write a program to find the roots of a quadratic equation and categorize them.

#include <stdio.h>
#include <math.h>
int main(){
    int a,b,c;
    double dis,r1,r2;
    printf("Enter the value of coefficents of the quadratic equations:: ");
    scanf("%d %d %d", &a, &b, &c);

    
    dis = b*b - 4*a*c;
    r1 = (-b- sqrt(dis)) / (2.0*a);
    r2 = (-b+ sqrt(dis)) / (2.0*a);

    if (dis > 0)
    printf("Roots are Real and Distinct %.00f, %.00f", r1,r2);

    else if (dis == 0)
    printf("Roots are Real and Same %.00f", r1);

    else
    printf("Roots don't exist");

    return 0;

}


// Q-18. Write a program to assign grades based on a percentage input.

#include <stdio.h>
int main(){
    int inp;
    printf("Enter percentage: ");
    scanf("%d", &inp);

    if (inp>=0 && inp<=10)
    printf("Grade J");

    if (inp>=11 && inp<=20)
    printf("Grade I");

    if (inp>=21 && inp<=30)
    printf("Grade H");

    if (inp>=31 && inp<=40)
    printf("Grade G");

    if (inp>=41 && inp<=50)
    printf("Grade F");

    if (inp>=51 && inp<=60)
    printf("Grade E");

    if (inp>=61 && inp<=70)
    printf("Grade D");

    if (inp>=71 && inp<=80)
    printf("Grade C");

    if (inp>=81 && inp<=90)
    printf("Grade B");

    if (inp>=91 && inp<=100)
    printf("Grade A");

return 0;

}