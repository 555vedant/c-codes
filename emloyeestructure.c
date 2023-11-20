// #include<stdio.h>
// struct emloyeestructure
// {
//     int Employeeid;
//     char Name;
//     int Salary;
//     char Department;

// };



// int main(){
// struct emloyeestructure e1;
// struct emloyeestructure e2;
// struct emloyeestructure e3;
// printf("emplouid for the first employee");
// scanf("%d", e1.Employeeid);
// printf("emplouid for the first employee");
// scanf("%d", e2.Employeeid);
// printf("emplouid for the first employee");
// scanf("%d", e3.Employeeid);
// printf("emplouid for the first employee");
// scanf("%s", e1.Name);
// printf("emplouid for the first employee");
// scanf("%s", e1.Name);
// printf("emplouisalaryfirst employee");
// scanf("%s", e1.Name);
// printf("emplouid for the first employee");
// scanf("%d", e1.Salary);
// printf("emplouid for the first employee");
// scanf("%d", e1.Salary);
// printf("emplouid for the first employee");
// scanf("%d", e1.Salary);
// printf("emplouid for the first employee");
// scanf("%d", e1.Employeeid);
// printf("emplouid for the first employee");
// scanf("%d", e1.Employeeid);
// printf("emplouid for the first employee");
// scanf("%d", e1.Employeeid);
// printf("emplouid for the first employee");
// scanf("%d", e1.Employeeid);
// printf("emplouid for the first employee");
// scanf("%d", e1.Employeeid);
// printf("emplouid for the first employee");
// scanf("%d", e1.Employeeid);
// printf("emplouid for the first employee");
// scanf("%d", e1.Employeeid);


// }
// you can make this code i am just doing half of the code you can impliment the full code



// q)2
// Find and display the employee with the highest salary.
#include <stdio.h>

struct employeeStructure {
    int Employeeid;
    char Name[50]; // Assuming a maximum length for the name
    int Salary;
    char Department[50]; // Assuming a maximum length for the department
};

// int maxSalary(int salary1, int salary2, int salary3) {
//     int maxSalary = salary1;

//     if (salary2 > maxSalary) {
//         maxSalary = salary2;
//     }
//     if (salary3 > maxSalary) {
//         maxSalary = salary3;
//     }

//     return maxSalary;
// }

int main() {
    struct employeeStructure e1;
    struct employeeStructure e2;
    struct employeeStructure e3;

    printf("Salary for the first employee: ");
    scanf("%d", &e1.Salary);

    printf("Salary for the second employee: ");
    scanf("%d", &e2.Salary);

    printf("Salary for the third employee: ");
    scanf("%d", &e3.Salary);
    int newSlary1= (10*e1.Salary)/100;
    //  int newSlary2= (10*e2.Salary)/100;
    //   int newSlary2= (10*e2.Salary)/100;
      printf("the new salary is %d", newSlary1);


    // int result = maxSalary(e1.Salary, e2.Salary, e3.Salary);
    // printf("The maximum salary of the employees is %d\n", result);

    return 0;
}
