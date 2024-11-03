// ANSI to ISO
#include<stdio.h> 
#include<unistd.h>

void useprintf(void){
    int a = 10;
    printf("Hello World %d\n",a);
}

void useputs(void){
    // adds a \n automatically at the end
    int a = 10;
    // puts("Hello World %d",a); won't work
    puts("Hello World");
}

int get_len(const char *str_pointer){
    int string_length = 0;
    while(*(str_pointer+string_length) != '\0' ){
        // str_pointer++;
        string_length++;
    }
    return string_length;
}

void usesyscallwrite(void){
    char *ptr_to_str = "hello, world\n";
    char str[] = {'h','e','l','l','o','\n','\0'};
    char arr_str[] = "hello\n"; // implicity adds the \0 at the end 

    int str_length = get_len(str);
    int arr_str_length = get_len(arr_str);

    printf("str_length : %d\n",str_length);
    printf("arr_str_length : %d\n",arr_str_length);

    write(1,str,str_length);
    write(1,arr_str,str_length);
}

int main(void){
    useprintf();
    useputs(); // attaches the \n automatically at the last
    usesyscallwrite();
    return 0;
}