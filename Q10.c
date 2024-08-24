#include<stdio.h>
#include<string.h>
#include <stdlib.h> 
int compare(const void *a, const void *b) {
    return strcmp((char *)a, (char *)b);
}

int main(){

    char nameOfStudents [10][50];
    int n = 10;


    for(int i = 0 ; i< n; i++){
        scanf("%49s" , nameOfStudents[i]);
    }

    qsort(nameOfStudents,  n , sizeof(nameOfStudents[0]) , compare );

    printf("\nSorted list of student names:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", nameOfStudents[i]);
    }
}