// #include<stdio.h>
// int main(){
//     FILE *ptr;
//     ptr = fopen("sample.txt" , "w");
//     return 0;
// }

// we can fscanf to take input from the file and also 
#include<stdio.h>
int main(){
    FILE *ptr;
    int num;
    ptr = fopen("demo.txt" , "r");
    fscanf(ptr , "%d" , &num);
    printf("the value of %d" , num);
    fclose(ptr);
    return 0;

}

// closing the file after read and write and as well as above i already done


