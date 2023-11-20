// #include<stdio.h>
// #include<stdio.h>
// int permutation(char str[] , int n , int r);
// int facto(int n );
// int main(){
//     int n =3;
//     int r =2;
//     char str[]="ved";
//      int result = permutation(str , n , r);
//      int len = 3;
//     printf("the number of permutation of the string is %d" , result);
//       for ( int i = 0; i<3; i++)
//     {
//         int temp = i;
//        for ( int j = 3; j >0; j--)
//        {
//         int q = temp /j;
//         int r = temp %j;
//         printf("%c\n " , str[r]);
//         removeCharInPlace(str, r);

    

     
       
        
        
        
//        }
       
       
//     }
  
    
//     return 0;

// }
// int facto(int n ){
//     if (n ==0 || n==1 )
//     {
//         return 1;
//     }
    
//     int a = facto(n-1);
//     int b = a*n;
//     return b ;
// }
// int permutation(char str[] , int n , int r){
//     // where r is the number of thing selected at a time of selection from n number of atoms
//     int result = facto(n)/facto(n-r);
//     return result;


// }

// above code providing the correct number of string but we want that sting also with got permuted
#include<stdio.h>

int permutation(char str[], int n, int r);
int facto(int n);
void removeCharInPlace(char str[], int indexToRemove);  // Declaration

int main() {
    int n = 3;
    int r = 2;
    char str[] = "ved";
    int result = permutation(str, n, r);
    printf("The number of permutations of the string is %d\n", result);

    for (int i = 0; i < 3; i++) {
        int temp = i;
        for (int j = 3; j > 0; j--) {
            int q = temp / j;
            int r = temp % j;
            printf("%c\n", str[r]);
            removeCharInPlace(str, r);
        }
    }

    return 0;
}

int facto(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }

    int a = facto(n - 1);
    int b = a * n;
    return b;
}

int permutation(char str[], int n, int r) {
    // where r is the number of things selected at a time of selection from n number of atoms
    int result = facto(n) / facto(n - r);
    return result;
}

void removeCharInPlace(char str[], int indexToRemove) {
    // Remove the character at the specified index by shifting the remaining characters
    int i;
    for (i = indexToRemove; str[i] != '\0'; i++) {
        str[i] = str[i + 1];
    }
}
