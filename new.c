// // #include<stdio.h>
// // int main(){
// //     int arr[5] ={1,2,3,4,5};
// //     printf("%d",2[arr]);
// //     return 0;
// // }
// #include <stdio.h>
// #include <math.h>

// int main() {
//     int n;
//     int nod = 0;

//     printf("Enter a number: ");
//     scanf("%d", &n);

//     int temp = n;

//     // Calculate the number of digits in the input number
//     while (temp != 0) {
//         temp = temp / 10;
//         nod++;
//     }

//     int div = (int)pow(10, nod - 1);

//     printf("Digits of the number in reverse order: ");

//     // Extract and print each digit from the number using a for loop
//     for (int i = 0; i < nod; i++) {
//         int q = n / div;
//         printf("%d", q);
//         n = n % div;
//         div = div / 10;
//     }

//     printf("\n");

//     return 0;
// }
// ex 25 output 7
// #include<stdio.h>
// int main(){
//     int str[]=25
//     int sum =0;
//     int n = strlen(str);
//     for (int i = 0; i < n; i++)
//     {
//         int a = str[i];
//         int  sum = sum +a ;
//         return sum;
//     }
//     return 0;
    
    
// }
// #include <stdio.h>
// #include<string.h>

// int main() {
//     int str[] = {25};
//     int sum = 0;
//     int n = sizeof(str) / sizeof(str[0]);

//     for (int i = 0; i < n; i++) {
//         int a = str[i];
//         sum = sum + a;
//     }

//     printf("The sum is: %d\n", sum);
//     return 0;
// }
// #include <stdio.h>

// int main() {
//     int number = 25;
//     int sum = 0;

//     while (number > 0) {
//         int digit = number % 10;
//         sum += digit;
//         number /= 10;
//     }

//     printf("The sum of the digits is: %d\n", sum);

//     return 0;
// }
#include <stdio.h>
#include <string.h>

int main() {
    int number = 25;
    char num_str[20];  // Use a sufficiently large buffer to hold the string representation of the number
    sprintf(num_str, "%d", number);  // Convert the number to a string

    int sum = 0;
    for (int i = 0; i < strlen(num_str); i++) {
        if (isdigit(num_str[i])) {
            sum += num_str[i] - '0';  // Convert character to integer
        }
    }

    printf("The sum of the digits is: %d\n", sum);

    return 0;
}



