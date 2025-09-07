#include<stdio.h>
int main(){
    int arr[5] = {12,23,53,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);// 20 / 4 = 5
    int i,j,min;

    printf("\nBefore Selection Sorting:- \n");
    for(i = 0; i < n;i++){
        printf("%d\t",arr[i]);
    }

    for(i = 0; i < n-1;i++){
        min = i;
        for(j = i + 1;j < n;j++){ // n because if i = 3 then check with j = 4 also
            if(arr[min] > arr[j]){ 
                min = j;
            }
        }
        if(arr[min] != arr[i]){ // why if min != i , means min value not change in j condition
            // swap without using another variable.
             arr[min] = arr[min] + arr[i];   // ex:- i = i2 + j6 = 8
             arr[i] = arr[min] - arr[i];     // j = 8 - 6 = 2
             arr[min] = arr[min] - arr[i];   // i = 8 - 2; = 6 mission complete.
        }
        printf("\nAfter i = %d value\n",i);
         for(int k = 0; k < n;k++){
        printf("%d\t",arr[k]);
    }
    printf("\n");
    }

    // printf("\nAfter Selection Sorting:- \n");
    // for(i = 0; i < n;i++){
    //     printf("%d\t",arr[i]);
    // }

    return 0;
}
/* Steps:-
1. i = 0 to n-1; n - 1(0123 if n = 5 n-1 = 4(0123)) because j goes to i + 1 to < n(01234 if n = 5)
2. Then assign min = i; 
3. Then j to i + 1 to < n.
4. Then check if min > arr[j] .
4-1. if yes then assign min = j(current index of j).
4-2. if no then move to next iteration(next round of loop).


/// Swap without any third variable.
    a = 14; b = 20;
    
    if a = a + b; // 14 + 20 = 34;
    a =34;
    b = a - b; 34 - 20 = 14 means b take a value. now ;;; 
    b = 14;
    now , a = a - b; // 34 - 14 = 20

    a = 20 ; b = 14; misssion Complete.

*/


    