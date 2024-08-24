#include<stdio.h>
int main(){
    int sub1 , sub2 , sub3 , sub4 , sub5;
    printf("Enter the marks for 5 subjects\n");
    printf("Marks should not be more than 100 and less than 0\n");
    printf("Subject 1 : ");
    scanf("%d" , &sub1);
    printf("Subject 2 : ");
    scanf("%d" , &sub2);
    printf("Subject 3 : ");
    scanf("%d" , &sub3);
    printf("Subject 4 : ");
    scanf("%d" , &sub4);
    printf("Subject 5 : ");
    scanf("%d" , &sub5);

    int grade = (sub1+sub2+sub3+sub4+sub5)/5;

    if(grade>=90){
        printf("EX");
    }else if(grade<90 && grade>=80){
        printf("A");
    }else if(grade<80 && grade>=70){
        printf("B");
    }else if(grade<70 && grade>=60){
        printf("C");
    }else if(grade<60 ){
        printf("F");
    }else{
        printf("Inappropriate Grade");
    }
}