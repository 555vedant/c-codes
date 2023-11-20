// #include<stdio.h>
// int primeno(int n)

// int main(){
//     int n
//     prime(4)
//     printf("enterd prime number%d", n);

// }
// int primeno(int n){
//     int count=0;
//     for (int i = 0; i < n; i++){
//         if (n<0)
//         count++;
//         {
//            return 0;
//         }

        
        
//     }
//     else {
//         return 1;
//     }
    

// }
#include <stdio.h>

int isPrime(int n); // Corrected function prototype

int main() {
    int n; // Corrected variable declaration
    n = 6; // Assign a value to n
    int result = isPrime(n); // Call the isPrime function and store the result
    printf("Entered number %d is prime: %s\n", n, result ? "Yes" : "No"); // Print the result
    return 0; // Added a return statement to indicate successful completion
}

int isPrime(int n) {
    if (n <= 1) { // Check if n is less than or equal to 1 (prime numbers start from 2)
        return 0; // Not a prime number
    }
    
    for (int i = 2; i <= n / 2; i++) { // Iterate from 2 to n/2
        if (n % i == 0) {
            return 0; // Not a prime number if divisible by any number in this range
        }
    }
    
    return 1; // If no divisors found, it's a prime number
}
