// Q23 Write a program to calculate a library fine based on late days.

#include <stdio.h>
int main(){
    int days, fine=0, i;
    printf("Enter no. of days after the deadline: ");
    scanf("%d", &days);

    for (i = 0; i<=days; i++){
        fine += i * 5;
    }
    printf("Total fine - $%d", fine);

    return 0;
} 

// Q24 Write a program to calculate an electricity bill based on units consumed.

#include <stdio.h>
int main(){
    int units,costunit, bill=0;
    printf("Enter no. of units consumed: ");
    scanf("%d", &units);
    printf("Enter cost of 1 unit: ");
    scanf("%d", &costunit);

    bill = costunit * units;
    printf("Total fine - $%d", bill);

    return 0;
} 