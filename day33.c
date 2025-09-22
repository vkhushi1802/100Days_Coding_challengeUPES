// Q65-Search in a sorted array using binary search.

// #include <stdio.h>

// int binsearch(int *arr, int n, int key){
//     int st= 0;
//     int end= n-1;
//     while(st<=end){
//         int mid= (st+end)/2;
//         if(arr[mid] == key)
//         return mid;

//         else if(arr[mid]<key)
//         st = mid+1;

//         else 
//         end = mid-1;
//     }
//     return -1;
// }
// int main(){
//     int n;
//     printf("Enter size of array: ");
//     scanf("%d", &n);

//     int arr[n];
//     printf("Enter elements of array: ");
//     for(int i=0; i<n; i++){
//         scanf("%d", &arr[i]);
//     }

//     int key;
//     printf("Enter key: ");
//     scanf("%d", &key);

//     printf("%d", binsearch(arr, n, key));
//     return 0;
// }



// Q66-Insert an element in a sorted array at the appropriate position.

#include <stdio.h>

void insertsorted(int *arr, int *n, int key){
    int i, pos;
    //find correct position.
    for(pos=0; pos< *n; pos++){
        if(arr[pos]>key)
        break;
    }

    //shift elements to right
    for(i = *n; i>pos; i--){
        arr[i] = arr[i-1];
    }

    //insert elements
    arr[pos] = key;
    (*n)++; //update size
}

void printarr(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
}

int main(){
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements of array: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int key;
    printf("Enter key: ");
    scanf("%d", &key);

    insertsorted(arr, &n, key);

    printarr(arr,n);
    return 0;
}
