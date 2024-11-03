#include <stdio.h>
#define ARRAY_LENGTH(arr) (sizeof(arr)/sizeof(arr[0]))

void func(int arr[], int len)
{
    for (int i = 0; i < len; i++){
        // printf("%d ", *(arr+i)); 
        (*(arr+i))+=1;  
        // printf("%d ", arr[i]);
        arr[i]+=1;
    }
}

// Driver program
int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
    int length = ARRAY_LENGTH(arr);

    func(arr,length);

    for(int i=0; i<length; i++){
        printf("%d ",arr[i]);
    }

    return 0;
}
