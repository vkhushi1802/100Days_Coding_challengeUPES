// Q-19 Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include <stdio.h>
int main(){
    int s1, s2, s3;
    printf("Enter the sides of triangle: ");
    scanf("%d %d %d", &s1, &s2 , &s3);

    if (s1 == s2 && s2 == s3)
    printf("Equilateral");

    else if (s1 == s2 || s2 == s3  || s1 == s3)
    printf("Isosceles");

    else
    printf("Scalene");

    return 0;
}


// Q-20 Write a program to display the day of the week based on a number (1–7) using switch-case.

#include <stdio.h>
int main(){
    int day;
    printf("Enter day: ");
    scanf("%d ", &day);

    if (day == 1)
    printf("Monday");

    if (day == 2)
    printf("Tuesday");

    if (day == 3)
    printf("Wednesday");

    if (day == 4)
    printf("Thursday");

    if (day == 5)
    printf("Friday");

    if (day == 6)
    printf("Saturday");

    return 0;
}



