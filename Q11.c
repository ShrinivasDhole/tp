#include<stdio.h>
#include<string.h>

struct Employee
{
    char firstName[20];
    char lastName[20];
    double salary;

    
};
void emp_init(struct Employee* e , char* first , char* last , double sal){
        strncpy(e->firstName , first , sizeof(e->firstName)-1);
        e->firstName[sizeof(e->firstName)-1] = '\0';

        strncpy(e->lastName , last , sizeof(e->lastName)-1);
        e->lastName[sizeof(e->lastName)-1] = '\0';

        e->salary = sal;
}

void setSalary(struct Employee* e , double sal){
        e->salary = sal;
}

void display(struct Employee* e){
        printf("Employee Name : %s %s\n",e->firstName,e->lastName);
        printf("Salary : %f\n" ,e->salary);
}

int main(){

    struct Employee emp;

    emp_init(&emp , "Shri" , "Dhole" , 100000);
    setSalary(&emp , 120000);
    display(&emp);

}