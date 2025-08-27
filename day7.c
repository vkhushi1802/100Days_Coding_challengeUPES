// Q 13. Write a program to input a year and check whether it is a leap year or not using conditional statements.

#include <stdio.h>
int main(){
    int year;
    printf("Enter year");
    scanf("%d", &year);

    if (year%4 == 0 && year%100 != 0)
    printf("Leap year");

    else if (year%400 == 0 && year%100 == 0)
    printf("Leap year");

    else
    printf("Not a leap year.");

    return 0;
}

// Q 14. Write a program to input a character and check whether it is a vowel or consonant using if–else.

#include <stdio.h>
int main(){
    char ch;
    printf("Enter a charaacter.");
    scanf("%c", &ch);

    //conversion of uppercase to lowecase using ascii value
    if (ch >= 'A' && ch <= 'Z'){
        ch = ch+32;
    }

    if (ch== 'a' || ch== 'e' || ch== 'i' || ch== 'o' || ch== 'u'){
        printf("Vowel");
    }

    else if (ch >= 'a' && ch <= 'z'){
        printf("Consonant");
    }

    else{
        printf("Enter a valid character.");
    }

    return 0;
}
