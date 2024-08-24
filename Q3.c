#include<stdio.h>

int main(){
    int num;
    printf("Enter Count for fibonacci more than 3 : ");
    scanf("%d" , &num);

    int temp1 = 1;
    int temp2 = 0;
    int series;
    for(int i = 1 ; i<=num ; i++ ){
        series = temp1 + temp2;
        temp1 = temp2;
        temp2 = series;
        printf("%4d" , series);
        
    }
}