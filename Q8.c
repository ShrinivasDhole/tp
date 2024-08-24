#include<stdio.h>
struct student
{
    char studentName[20];
    int rollNo;
    int totalMarks;
};
void main(){
    struct student s1;
    printf("Enter the name of the student : ");
    fgets(s1.studentName ,sizeof(s1.studentName) ,stdin);
    printf("Enter the roll number : ");
    scanf("%d" , &s1.rollNo);
    printf("Enter the total marks : ");
    scanf("%d" , &s1.totalMarks);
    
    printf("Entered Values\n");
    printf("Name : %s\n" , s1.studentName);
    printf("Roll No : %d\n" , s1.rollNo);
    printf("Total Marks : %d\n" , s1.totalMarks);

}
