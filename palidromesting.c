// #include <stdio.h>
// #include<string.h>
// void palidrome(char str[]);
// int main(){


//     char str[] ="madam"
//     printf("%s" , palidrome);
//     return 0;

 


   
    
// }
// void palidrome(char str[]){
//     int n = strlen(str[])/strlen(str[0])
//     for (int i = 0; i < (n-1)/2; i++);
//     {
//         if (str[i] == str[n-i-1])
//         {
//            printf("palidrome string");
//         }
        
//     }
//     return palidrome;
    
// }
#include <stdio.h>
#include <string.h>

void palindrome(char str[]);

int main() {
    char str[] = "madam";
    palindrome(str);
    return 0;
}

void palindrome(char str[]) {
    int n = strlen(str);
    int isPalindrome = 1; // Assume it's a palindrome

    for (int i = 0; i < n / 2; i++) {
        if (str[i] != str[n - i - 1]) {
            isPalindrome = 0; // Not a palindrome
            break;
        }
    }

    if (isPalindrome) {
        printf("Palindrome string\n");
    } else {
        printf("Not a palindrome string\n");
    }
}

