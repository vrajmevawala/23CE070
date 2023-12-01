#include<stdio.h>
struct Address
{
    char street[50];
    char city[50];
    char state[50];
};
struct Employee
{
    char name[50];
    int age;
    struct Address address;
    float salary;
};
int main()
{
    struct Employee employee;
    printf("Enter Employee Name :");
    scanf("%[^\n]s",employee.name);
    printf("Enter Employee Age :");
    scanf("%d",&employee.age);
    printf("Enter Employee Address(Street) :");
    scanf("%s",employee.address.street);
    printf("Enter Employee Address(City) :");
    scanf("%s",employee.address.city);
    printf("Enter Employee Address(State) :");
    scanf("%s",employee.address.state);
    printf("Enter Employee Salary :");
    scanf("%f",&employee.salary);
    //Display employee details
    printf("\nEmployee Details\n");
    printf("Name : %s\n",employee.name);
    printf("Age : %d\n",employee.age);
    printf("Address : %s %s %s\n",employee.address.street,employee.address.city,employee.address.state);
    printf("Salary : %.2f\n",employee.salary);
    printf("\n23CE070_vraj mevawala");
    return 0;
}
