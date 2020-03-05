// Dez => Zählweise der Trolle (viele = 4)

#include<stdio.h>

int main(){
    int number = 0;
    scanf("%d", &number);
    for(int i = 0; i < number / 4; i++){
        if(i == 0){
            printf("viele");
        }else{
            printf("-viele");
        }
    }
    if(number % 4 != 0){
        if(number / 4 >= 1){
            printf("-%d", number % 4);
        }else{
            printf("%d", number % 4);

        }
    }
    return 0;
}