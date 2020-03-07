#include<stdio.h>
#include<stdbool.h>

// checks if a permutation is a permutation

int main(){
    // read in
    int permutation[9];
    for(int i = 0; i < 9; i++){
        scanf("%d", &permutation[i]);
    }
    // check for every number
    for(int i = 1; i <= 9; i++){
        bool exist = false;
        // check all possible positions 
        for(int j = 0; j < 9; j++){
            if(permutation[j] == i){
                exist = true;
            }
        }
        // terminate on error
        if(exist == false){
            printf("keine gültige Permutation");
            return 0;
        }
    }

    // print out
    for(int i = 1; i < 10; i++){
        printf("%d ", i);
    }
    
    printf("\n");

    for(int i = 0; i < 9; i++){
        printf("%d ", permutation[i]);
    }

    return 0;
}