/*
Structures - a collection of hetrogeneous datatype used to represent data, when data is having many members (parts)
For ex - to represent salary, I'd no., and name of a employee of any comapny. Here employee is the structure if all those 3
categories are under employee.
But, if I declare those as 3 independent variables it will be no linking with each other.
A structure programs has 3 components -
1. Structure definition
2. Structure declaration
3. Structure Initialization

1. Structure Definition:
We need to define the skeleton of the structure.
Structure of the code:

#include<stdio.h>

int main(){
    struct employee
    {
        float salary;
        int Id;
        char name[50];
    };
    
    return 0;
}

2. Structure Declaration:
declaring the variables for the defined structure.
Structure of the code:


*/
#include<stdio.h>
struct employee {
    int eno;
    char ename[20];
    float salary;
};

int main(){
    struct employee e1;
    printf("Enter the employee number :");
    scanf("%d",&e1.eno);
    printf("Enter the employee name:");
    scanf("%[^\n]s",&e1.ename[20]);
    printf("Enter the employee salary:");
    scanf("%f",&e1.salary);
    printf("Employee details:\nI'd number: %d\nName: %s\nSalary: %.2f",e1.eno,e1.ename[20],e1.salary);
    return 0;
}