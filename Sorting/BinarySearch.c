#include <stdio.h>
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // 0 - 9
    int s = 90;
    // right = r; left = l; middle = m ,search = s ;

    int r = 9;
    int l = 0;
    int k = 0;
    
    while(l <= r){
        int m = (l + r) / 2;
        if(arr[m] == s){
            printf("%d is found\n",s);
            k = 1;
            break;
        }
        if(s > arr[m]){
            l = m + 1;
        }
        if(s < arr[m]) {
            r = m - 1;
        }
    }

    if( k == 0){
        printf("Element not found\n");
    }
        return 0;
}

// take num in each iteration and put in array i th index.


/*
* Binary Search
-> Required sort array
*/

// 5 th line content for taking input and display element.
/*   int size = sizeof(arr) / sizeof(arr[0]);
   printf("The size of array is %d\n",size);
   // int num;
   int i;

   for (i = 0; i < size; i++)
   {
       printf("Enter arr[%d] value: ", i);
       scanf("%d", &arr[i]);
   }
   printf("Array value\n");
   for (i = 0; i < size; i++){
       printf("%d ",arr[i]);
   }
   printf("\n");
*/