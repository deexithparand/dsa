// ANSI to ISO
#include<stdio.h>
#include<time.h>

int get_len1(const char *str_pointer){
    // using const on ptr
    // not modifying pointer, just temporarily changing the offset and pointing to a new mem location

    int len = 0;
    while(*(str_pointer + len) != '\0'){
        len++;
    }
    return len;
}

int get_len2(const char *str_pointer){
    // using const on pointer
    // but modifying the pointer

    const char *temp_pointer = str_pointer;
    while(*temp_pointer != '\0'){
        temp_pointer++;
    }

    return temp_pointer - str_pointer;
}

int get_len3(const char *str_pointer){
    // using const on pointer
    // but modifying the pointer itself, const var can be modified and not assigned to new value
    // additionally memory used compared to previous approach
    
    int len = 0;
    while(*str_pointer != '\0'){
        str_pointer++;
        len++;
    }
    return len;
}

double measure_time_of_execution(int (*func)(const char *), const char *str_pointer[]){
    clock_t start_time = clock(); // start time
    int index = 0;
    int len_arr[3];
    while(str_pointer[index] != NULL ){
        len_arr[index] = func(str_pointer[index]); // trigger function
        index++;
    }
    printf("Result -> len 1 : %d, len 2 : %d, len 3 : %d\n", len_arr[0], len_arr[1], len_arr[2]);
    clock_t end_time = clock(); // end time
    return ((double)(end_time-start_time)) / CLOCKS_PER_SEC; // return time in seconds
}

int main(void){

    char str_arr1[] = "Hello\n";
    char str_arr2[] = {'H','e','l','l','o','\n','\0'};
    char *str_arr3 = "Hello\n"; // implicitly adds the null pointer

    const char *input_arr[] = {
        str_arr1, str_arr2, str_arr3, NULL 
    };

    double execution_time_1 = measure_time_of_execution(get_len1,input_arr);
    double execution_time_2 = measure_time_of_execution(get_len2,input_arr);
    double execution_time_3 = measure_time_of_execution(get_len3,input_arr);

    printf("exectuion time 1 : %f\n",execution_time_1);
    printf("exectuion time 2 : %f\n",execution_time_2);
    printf("exectuion time 3 : %f\n",execution_time_3);

    return 0;
}

// this code proved CLAUDE is Wrong