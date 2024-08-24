#include<stdio.h>

void binaryNum(int n){
    int binary[32];
    int i = 0 ;
    while(n>0){
        binary[i] = n & 1;
        n >>= 1;
        i++;
    }
    printf("Binary Number :");

    for(int j = i-1 ; j>=0 ; j--){
        printf("%d" , binary[j]);
    }
    printf("\n");
}

void octalNum(int n){
    int octal = 0; 
    int place = 1;
    while(n>0){
        int remainder = n & 7;
        octal = octal + remainder * place;
        place *= 10;
        n >>= 3;
    }
    printf("Octal Number: %d\n", octal);

}
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d" , &n);
    binaryNum(n);
    octalNum(n);
}