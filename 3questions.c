// // problem from coder group

// // Q 1)
// #include<stdio.h>


// int calculate(int *num1, int *num2, int *sum, int *avg);

// int main(){
//     int num1 = 4;
//     int num2 = 6;
//     int sum, avg;

//     calculate(&num1, &num2, &sum, &avg);

//     printf("Sum: %d\n", sum);
//     printf("Average: %d\n", avg);

//     return 0;
// }

// int calculate(int *num1, int *num2, int *sum, int *avg){
//     *sum = *num1 + *num2;
//     *avg = (*num1 + *num2) / 2;
// }

// Q2)
// #include<stdio.h>

// struct student
// {
//     char name[20]; // Assuming the name can be up to 20 characters
//     int rollno;
//     int arr[5];
// };

// int average(struct student s1) {
//     int c = 0;
//     int avg;

//     for (int i = 0; i < 5; i++) {
//         c += s1.arr[i];
//     }
    
//     avg = c / 5;

//     return avg;
// }

// int main() {
//     struct student s1;
//     s1.arr[0] = 1;
//     s1.arr[1] = 2;
//     s1.arr[2] = 3;
//     s1.arr[3] = 4;
    
//     strcpy(s1.name, "vedant"); // Use strcpy to copy string to char array
//     s1.rollno = 20230010118;

//     printf("The name of student is %s\n", s1.name);
//     printf("The roll number of student is %d\n", s1.rollno);

//     int avg = average(s1);
//     printf("The average of grades is %d\n", avg);

//     return 0;
// }

// Q)3
// TAKING TIME INPUT
#include<stdio.h>

struct time
{
    int seconds;
    int minutes;
    int hours;
};

struct time addition(struct time t1, struct time t2) {
    struct time result;
    result.seconds = t1.seconds + t2.seconds;
    result.minutes = t1.minutes + t2.minutes;
    result.hours = t1.hours + t2.hours;

    // Adjust for overflow
    if (result.seconds >= 60) {
        result.seconds -= 60;
        result.minutes += 1;
    }

    if (result.minutes >= 60) {
        result.minutes -= 60;
        result.hours += 1;
    }

    return result;
}

int main() {
    struct time t1, t2, sum;

    t1.seconds = 12;
    t1.minutes = 24;
    t1.hours = 2;

    t2.seconds = 5;
    t2.minutes = 23;
    t2.hours = 4;

    sum = addition(t1, t2);

    printf("Time for first: %d:%d:%d\n", t1.hours, t1.minutes, t1.seconds);
    printf("Time for second: %d:%d:%d\n", t2.hours, t2.minutes, t2.seconds);
    printf("Sum of times: %d:%d:%d\n", sum.hours, sum.minutes, sum.seconds);

    return 0;
}


