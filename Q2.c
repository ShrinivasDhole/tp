#include<stdio.h>
int main(){
    int n, fact =1;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n<0){
        printf("Number you have entered should not be less than zero");
    }
    else{
        for(int i = 2 ; i <= n ; i++){
            fact = fact * i;
        }
    }

    printf("Factorial of %d : %d" , n , fact);
}