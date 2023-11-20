// #include<stdio.h>
// void toh(int n , int tohi1 , int tohi2 , int tohi3);
// int main(){
//     int n ;
//     int tohi1;
//     int tohi2;
// int tohi3; 
//     printf("enter value of disc for tower of hannoi");
//     scanf("%d" , &n);
//     printf("enter tower number");
//     scanf("%d" , &tohi1);
//      printf("enter tower number");
//     scanf("%d" , &tohi2);
//      printf("enter tower number");
//     scanf("%d" , &tohi3);
//     void result = toh(n , tohi1 , tohi2 , tohi3);
//     printf(result);

// }
// void toh(int n , int tohi1 , int tohi2 , int tohi3){
//     toh(n -1 , tohi1 , tohi3 , tohi2);
//     printf( "%d %d %d  ",  n , tohi1 , tohi2);
//     toh(n -1 , tohi1 , tohi2 , tohi3);

// }
#include <stdio.h>

void toh(int n, int tohi1, int tohi2, int tohi3);

int main() {
    int n;
    int tohi1;
    int tohi2;
    int tohi3;

    printf("Enter value of discs for Tower of Hanoi: ");
    scanf("%d", &n);

    printf("Enter source tower number: ");
    scanf("%d", &tohi1);

    printf("Enter auxiliary tower number: ");
    scanf("%d", &tohi2);

    printf("Enter destination tower number: ");
    scanf("%d", &tohi3);

    toh(n, tohi1, tohi2, tohi3);

    return 0;
}

void toh(int n, int tohi1, int tohi2, int tohi3) {
    if (n > 0) {
        toh(n - 1, tohi1, tohi3, tohi2);
        printf("%d %d %d\n", n, tohi1, tohi2);
        toh(n - 1, tohi2, tohi1, tohi3);
    }
}
