#include<stdio.h>

// Prints out a Table like this:
// 
// 1  2  3  4  5
// 2  4  6  8 10
// 3  6  9 12 15
// 4  8 12 16 20
// 5 10 15 20 25

int main(){
    for(int i = 1; i < 6; i++){
        int counter = i;
        for(int j = 1; j < 6; j++){
            printf("\t%d", counter);
            counter += i;
        }
        printf("\n");
    }
    return 0;
}