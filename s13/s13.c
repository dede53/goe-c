//
// This is really Ugly, but multiplies matrices...
//
#include<stdio.h>

int main(){
    // first Matrix
    int matrix1x = 0;
    int matrix1y = 0;

    scanf("%d %d", &matrix1x, &matrix1y);
    
    if(matrix1x > 20 || matrix1x < 0){
        matrix1x = 20;
    }
    if(matrix1y > 20 || matrix1y < 0){
        matrix1y = 20;
    }

    // read values
    int matrix1[matrix1y][matrix1x];
    for(int i = 0; i < matrix1y; i++){
        int j = 0;
        while(j < matrix1x ){
            scanf("%d", &matrix1[i][j]);
            j++;
        }
    }


    // second Matrix
    int matrix2x = 0;
    int matrix2y = 0;

    scanf("%d %d", &matrix2x, &matrix2y);
    
    if(matrix2x > 20 || matrix2x < 0){
        matrix2x = 20;
    }
    if(matrix2y > 20 || matrix2y < 0){
        matrix2y = 20;
    }

    // read values
    int matrix2[matrix2y][matrix2x];
    for(int i = 0; i < matrix2y; i++){
        int j = 0;
        while(j < matrix2x ){
            scanf("%d", &matrix2[i][j]);
            j++;
        }
    }

    // multiply
    int result[matrix1y][matrix2x];
    for(int i = 0; i < matrix1y; i++){
        for(int j = 0; j < matrix2x; j++){
            int sum = 0;
            for(int k = 0; k < matrix2y; k++){
                sum += matrix1[i][k] * matrix2[k][j];
            }
            result[i][j] = sum;
        }
    }

    for(int i = 0; i < matrix1y; i++){
        for(int j = 0; j < matrix2x; j++){
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}