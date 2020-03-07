#include<stdio.h>

int main(){
    int year = 0;
    scanf("%d", &year);
    if(year % 2 == 0){
        if(year % 4 == 0){
            printf("Sommerspiele\n");
        }else{
            printf("Winterspiele\n");
        }
    }else{
        printf("keine Spiele\n");
    }
    return 0;
}