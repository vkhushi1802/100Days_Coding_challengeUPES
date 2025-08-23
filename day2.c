// User inputs, Operations & Output)
// Q3. Write a program to calculate the area and perimeter of a rectangle given that its length and breadth.

#include <stdio.h>
int main(){
    float x,y,a,p;
    printf("Enter length and breadth");
    scanf("%f %f", &x, &y);
    a = x*y;
    p = 2*(x+y);
    printf("Area=%f, Perimeter=%f", a,p);
    return 0;
}


// Q4. Write a program to calculate the area and circumference of a circle given its radius.

#include <stdio.h>
int main(){
    float r,a,c;
    printf("Enter radius of the circle");
    scanf("%f", &r);
    a = 3.14*r*r;
    c = 2*3.14*r;
    printf("Area= %f, Circumference= %f", a, c);

    return 0;
}