#include<stdio.h> // ANSI to ISO Now, using POSIX C Lib
#define ARRAY_LENGTH(arr) (sizeof(arr)/sizeof(arr[0]))

void selection_sort(int *arr, int len){
    
}

int main(void){

    int arr[] = {4,5,6,7,8,8,10,11};
    int len = ARRAY_LENGTH(arr);

    // print it THEN
    printf("Then\n\n");
    for(int i=0; i<len; i++){
        if(i==len-1){
            printf("%d\n\n",arr[i]);
        } else {
            printf("%d,",arr[i]);
        }
    }

    // sort it
    selection_sort(arr,len);

    // print it NOW
    printf("Now\n\n");
    for(int i=0; i<len; i++){
        if(i==len-1){
            printf("%d\n",arr[i]);
        } else {
            printf("%d,",arr[i]);
        }
    }

    return 0;
}