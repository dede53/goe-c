// Bin to Dec

#include<stdio.h>

int main(){
    int length = 255;
    char input[length];
    int i = 0;
    while(i < length && (input[i] = getchar()) != '\n'){
        i++;
    }

    if(i > length){
        return -1;
    }else{
        input[i] = '\0';
    }

    int value       = 0;
    int wertigkeit  = 1;
    for(int j = i -1; j >= 0; j--){
        if(input[j] == 49){
            value += wertigkeit;
        }
        
        wertigkeit *= 2;
    }
    printf("%d", value);

    return 0;
}