
// Q21 Write a program to display the month name and number of days using switch-case for a given month number.

#include <stdio.h>
int main(){
    int n;
    printf("Enter month number: ");
    scanf("%d", &n);

    switch (n){
        case 1 :
        printf("January, 31 days\n");
        break;

        case 2 :
        printf("February, 28 or 29 days (Depends on leap year)\n");
        break;

        case 3 :
        printf("March, 30 days\n");
        break;

        case 4 :
        printf("April, 30 days\n");
        break;

        case 5 :
        printf("May, 31 days\n");
        break;

        case 6 :
        printf("June, 30 days\n");
        break;

        case 7 :
        printf("July, 31 days\n");
        break;

        case 8:
        printf("August, 31 days\n");
        break;

        case 9:
        printf("September, 30 days\n");
        break;

        case 10:
        printf("October, 31 days\n");
        break;

        case 11:
        printf("November, 30 days\n");
        break;

        case 12:
        printf("December, 31 days\n");
        break;

        default:
        printf("Enter a valid month number.\n");
        break;

    }
    return 0;
}



// Q22 Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>
int main(){
    int cp,sp,p,l;
    printf("Enter Cost Price and Selling Price: ");
    scanf("%d %d", &cp, &sp);

    if (sp>cp){
    p = ((sp - cp)*100)/cp ;
    printf("Profit Percent is %d%%", p);
    }
    else if (cp>sp){
    l = ((cp - sp)*100)/cp ;
    printf("Loss Percent is %d%%", l);
    }

    else{
        printf("Neither loss nor profit.");
    }
   
    return 0;


}