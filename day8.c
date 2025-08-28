// Q 15- Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

#include <stdio.h>
int main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
        printf("The character is Uppercase alphabet.");
    else if (ch >= 'a' && ch <= 'z')
        printf("The character is Lowercase alphabet.");
    else if (ch >= '0' && ch <= '9')
        printf("The character is a digit.");
    else
    printf("The character is a special character.");

    return 0;

}

// Q 16-Write a program to input three numbers and find the largest among them using if–else.

#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter three numbers");
    scanf("%d %d %d", &a,&b,&c);

    if (a>b && a>c)
    printf("%d is greatest", a);

    else if (b>a && b>c)
    printf("%d is greatest", b);

    else 
    printf("%d is greatest", c);
    
    return 0;

}
