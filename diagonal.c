#include<stdio.h>
int main(){
    int rows =4;
    int cols=4;
    for(int i = 0; i<rows ; i++){
      for(int j =0; j <cols ; j++){
        printf("enter the element of the array");
        scanf("%d\n" , &arr[i][j]);
      }
        
    }
     for(int i = 0; i<rows ; i++){
        for ( int j = 0; rows- i < cols; j++)
        {
            printf("%d\n" , arr[i][j]);
        }
        
    }
    return 0;
    
}

// #include <stdio.h>

// int main() {
//     int rows, cols;

//     printf("Enter the number of rows: ");
//     scanf("%d", &rows);

//     printf("Enter the number of columns: ");
//     scanf("%d", &cols);

//     int arr[rows][cols]; // Declare a 2D array based on user input

//     // Input loop to fill the array
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             printf("Enter the element at row %d, column %d: ", i, j);
//             scanf("%d", &arr[i][j]);
//         }
//     }
//       for(int i = 0; i<rows ; i++){
//         for ( int j = 0; rows- i < cols; j++)
//         {
//             printf("%d\n" , arr[i][j]);
//         }
        
//     }
//     return 0;



// }   
#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int arr[rows][cols]; // Declare a 2D array based on user input

    // Input loop to fill the array
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter the element at row %d, column %d: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // Output loop to display the elements and print the diagonal elements
    printf("The 2D array you entered:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", arr[i][j]);

            // Check if it's a diagonal element (i.e., row index == column index)
            if (i == j) {
                printf(" (Diagonal)"); // Mark the diagonal element
            }
        }
        printf("\n"); // Move to the next row
    }

    return 0;
}
