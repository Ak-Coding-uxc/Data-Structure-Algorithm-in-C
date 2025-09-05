#include<stdio.h>
int main(){
    int arr[] = {12,3,4,5,6,90,21};
    int size = sizeof(arr)/sizeof(arr[0]);// best practice for all int, float, char etc.
    printf("The size of array is %d\n",size);
    int i;
    int search;
    int check = 0;
    printf("Enter element you want to search:- ");
    scanf("%d",&search);

    for(i = 0;i < size;i++){
        if(arr[i] == search){
            printf("%d is found at index %d of array\n",search,i);
            check = 1;
            break;
        }
    }
    if(check == 0){
        printf("Element is not found\n");
    }
    return 0;
}
/*
* Linear Search
-> Work for all sorted and unsorted array.
-> Best practice is sizeof(arr)/sizeof(arr[0]) => 20 / 4 = 5
*/