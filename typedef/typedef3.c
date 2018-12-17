#include <stdio.h>
#include <string.h>
typedef struct Employee
{
    char name[100];
    int salary;
} Employee;
int main()
{
    Employee emp;
    printf("Enter the record:\n");
    printf("Enter Employee name:\n");
    scanf("%s", emp.name);
    printf("Enter the salary:\n");
    scanf("%d", &emp.salary);
    printf("Employee name is %s\n", emp.name);
    printf("Employee salary is %d", emp.salary);
}
