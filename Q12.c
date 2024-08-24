#include<stdio.h>
#include<string.h>
int main(){
    char str [20] = "Shri";
    char revStr[20];
    
    int count = 0;
    int i = 0;
    while(str[i] != '\0' ){
        count++;
        i++;
    }
    i = 0;
    count--;
    while(count>=0){
        revStr[i] = str[count];
        count--;
        i++;
    }
    revStr[i] = '\0';
    printf("Original String : %s", str);
    printf("\n");

    printf("Reversed String : %s", revStr);



}