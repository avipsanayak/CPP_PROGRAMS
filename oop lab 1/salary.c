#include <stdio.h>

struct Employee {
    char name[100];
    int id;
    float basicSalary, grossSalary;
};

int main()
{
    // No. of employees
    int n;
    printf("Enter the number of Employees: ");
    scanf("%d",&n);

    // Initialising
    struct Employee e[n];

    for( int i = 0; i < n; i++ ){
        printf("Employee %d:- \n", i+1);

        //Name
        printf("Name: ");
        scanf(" %[^\n]s", e[i].name);

        //ID
        printf("Id: ");
        scanf("%d", &e[i].id);

        //Salary
        printf("Salary: ");
        scanf("%f", &e[i].basicSalary);

        e[i].grossSalary = e[i].basicSalary + (0.8*e[i].basicSalary) + (0.1*e[i].basicSalary);
    }
    
    printf("-------------- All Employees Details --------------\n");
    printf("| Name\t | ID\t | B. Salary\t | G. Salary\t |\n");
    for( int i = 0; i < n; i++ )
        printf("| %s\t | %d\t | %.2f\t | %.2f\t |\n", e[i].name, e[i].id, e[i].basicSalary, e[i].grossSalary);
    
    return 0;
}