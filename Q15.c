#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){

    char str[100] ;
    char count[26] = {0};

    printf("Enter the string : ");
    fgets(str , sizeof(str) , stdin);

    for(int i = 0 ; i<strlen(str) ; i++){
        if(isalpha(str[i])){
            count[toupper(str[i]) - 'A']++;
        }
    }

    for(int i = 0 ; i<26 ; i++ ){
        if(count[i]>0){
            printf("%c : %d\n" , i + 'A' , count[i]);
        }
    }


}