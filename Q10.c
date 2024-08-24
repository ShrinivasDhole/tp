#include<stdio.h>

int main(){

    char nameOfStudents [10][50];
    int n = 10;

    for(int i = 0 ; i< n; i++){
        scanf("%4s" , nameOfStudents[i]);
    }

    qsort(nameOfStudents,  n , sizeof(nameOfStudents[0]) , compare );

    printf("\nSorted list of student names:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", nameOfStudents[i]);
    }
}