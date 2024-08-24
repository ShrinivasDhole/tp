#include<stdio.h>
#include<string.h>
int main(){
    char *arr[] = {
        "Shri",
        "Aniket",
        "Amol",
        "Umita",
        "Amol",
        "Umita"
    };

    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Duplicate Values are : ");
    for(int i = 0 ; i<n ; i++){
        for(int j = i+1 ; j<n ; j++){
            if(strcmp(arr[i] , arr[j])==0){
                printf("%s ", arr[i]);
                break;
            }
        }
    }
}