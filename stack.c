// #include <stdio.h>

// int dowork(int n, int m); // Updated function declaration

// int main() {
//     int n = 6;
//     int m = 2;
//     int result = dowork(n, m);
//     printf("%d", result);
//     return 0; // Corrected the return statement
// }

// int dowork(int n, int m) { // Updated function definition
    // int sum = n + m;
    // int sub = n - m;
    // int mul = n * m;
    // int div = n / m;
//     return sum; // You can return a value here, I'm returning 'sum' as an example.
// }
// by aboove fuction we cant print lots of value value we can only print the refered value between sum , product and division thsts why we need to print pointers
#include <stdio.h>

void dowork(int n, int m, int *sum, int *sub, int *mul, int *div);

int main() {
    int n = 6;
    int m = 3;
    int sum, sub, mul, div; // Declare these variables

    dowork(n, m, &sum, &sub, &mul, &div);
    printf("%d %d %d %d", sum, sub, mul, div); // Add a comma between the format string and variables
}

void dowork(int n, int m, int *sum, int *sub, int *mul, int *div) {
    *sum = n + m;
    *sub = n - m;
    *mul = n * m;
    *div = n / m;
}
++