#include<stdio.h>
#include<string.h>

int main(){
    char *arr = "aabaa";
    int i = 0 ;
    int count = 0;
    int isPalindrom = 0;
    while(arr[i]!='\0'){
        count++;
        i++;
    }
    count--;
    i = 0;
    while(i<count){
        if(arr[i]!=arr[count]){
            isPalindrom = 0;
            break;

        }else{
            isPalindrom = 1;
        }
        i++;
        count--;
    }

    if(isPalindrom!=0){
        printf("The string is a palindrome");
    }
    else{
        printf("The string is not a palindrome");
    }

}