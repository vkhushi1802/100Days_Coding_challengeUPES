
// Q27-Write a program to print the sum of the first n odd numbers.

#include <stdio.h>
int main(){
    int n, i = 1, sum=0;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    
    for ( i =1; i<=2*n ; i+=2){
        sum += i;
    }
        printf("%d", sum);

        return 0;
    
}



// Q28-Write a program to print the product of even numbers from 1 to n.

#include <stdio.h>
int main(){
    int n, i = 1, prod=1;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    for ( i =1; i<=n ; i++){
        if (i % 2 == 0)
        prod *=i;

        
    }
        printf("%d", prod);

        return 0;
    
}