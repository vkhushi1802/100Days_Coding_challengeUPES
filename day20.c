// Q39- Write a program to find the product of odd digits of a number.

// #include <stdio.h>
// int main(){
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);

//     int digit;
//     int prod = 1;
//     int hasodd = 0;
//     while(num>0){
//         digit = num%10;
//         if(digit %2 != 0){
//             prod *= digit;
//             hasodd =1;
//         }
//         num = num / 10;
//     }

//     if(hasodd)
//     printf("PRODUCT = %d", prod);

//     else
//     printf("No odd digits found.");

//     return 0;
// }



// Q40-Write a program to find the 1’s complement of a binary number and print it.

#include <stdio.h>
#include <string.h>
int main(){
    char binary[100];
    printf("Enter a binary number: ");
    scanf("%s", binary);

    for(int i=0; i< strlen(binary); i++){
        if (binary[i] == '0'){
            binary[i] = '1';
        }
        else if (binary[i] == '1'){
            binary[i] = '0';
        }

        else{
        printf("Invalid binary digit: %c", binary[i]);
        return 1;
        }
            
        }

    printf("Complement = %s", binary);
    return 0;

}


