// #include<stdio.h>
// #include<math.h>
// int printpower(int base ,int power);

// int main(){
//     printpower( 2,3);
//     printf(printpower);
// ui

//     return 0;

// }
// int printpower(int base ,int power){
//     if (power == 0)
//     {
//         return 1;
//     }
//     int c;
//     int d;
//     int result = pow(c ,d);
//     return result;

    
// }
#include <stdio.h>
#include <math.h>

int printpower(int base, int power);

int main() {
    int result = printpower(2, 3);
    printf("Result: %d\n", result);

    return 0;
}

int printpower(int base, int power) {
    if (power == 0) {
        return 1;
    }
    int result = pow(base, power);
    return result;
}

