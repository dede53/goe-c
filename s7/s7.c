#include<stdio.h>

int main(){
    int number      = 0;
    int squareSum   = 0;

    scanf("%d", &number);
    while(number > 0){
        int digit   = number % 10;
        number      = number / 10;

        squareSum += digit;
    }
    printf("%d", squareSum);
    return 0;
}