#include<stdio.h>
#include<ctype.h>

int main(){

    char str[100];
    int uppercase = 0;
    int lowercase = 0;
    int digit = 0;
    int other = 0;

    printf("Enter the string : ");
    fgets(str , sizeof(str) , stdin);

    for(int i = 0 ; str[i]!='\0' ; i++){
        char c = str[i];
        if((c)>=65 && (c<=90)){
            uppercase++;
        }
        else if((c)>=97 && (c)<=122){
            lowercase++;
        }else if((c)>=0x30 && (c)<=0x39){
            digit++;
        }else if(c>=32 && c<=47 || c>=58 && c<=64 || c>=91 && c<=96 || c>=123 && c<=126 ){
            other++;
        }
    }

    printf("Uppercases are : %d \n" , uppercase);
    printf("Lowercases are : %d \n" , lowercase);
    printf("Digits are : %d \n" , digit);
    printf("Others are : %d " , other);
}