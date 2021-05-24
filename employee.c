#include <stdio.h>
 
struct employee{
    char    name[20];
    int     empno;
    float   salary;
};
 
int main()
{
    struct employee emp;
     

    printf("\nEnter details :\n");
    printf("Name :");          gets(emp.name);
    printf("employee no.:");            scanf("%d",&emp.empno);
    printf("Salary :");        scanf("%f",&emp.salary);

    printf("\n-----employee details------");
    printf("\nName: %s"   ,emp.name);
    printf("\ndepartment no.: %d"     ,emp.empno);
    printf("\nSalary: %f\n",emp.salary);
    return 0;
}
