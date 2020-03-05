#include<stdio.h>
#include<limits.h>

int main(){
    int counter = 0;
    // printf("Anzahl der Elemente:");
    scanf("%d", &counter);

    // printf("Eingabe der Elemente:");
    int unsortedArray[counter];
    for(int j = 0; j < counter; j++){
        scanf("%d", &unsortedArray[j]);
    }

    // printf("Ausgabe eingegebenes Array:");
    for(int i = 0; i < counter; i++){
        printf("%d ", unsortedArray[i]);
    }
    printf("\n");

    int minimum = INT_MAX;
    int position = 0;
    // durchlaufen aller Elemente
    for(int j = 0; j < counter; j++){
        // Minimum finden
        for(int i = j; i < counter; i++){
            if(unsortedArray[i] < minimum){
                minimum = unsortedArray[i];
                position = i;
            }
        }
        // Tauschen des aktuellen Elements und des Minimums
        int temp                = unsortedArray[j];
        unsortedArray[j]        = minimum;
        unsortedArray[position] = temp;
        minimum                 = INT_MAX;

        // // Ausgabe des neues Zustandes
        // for(int i = 0; i < counter; i++){
        //     printf("%d ", unsortedArray[i]);
        // }
        // printf("\n");
    }


    // printf("Ausgabe sortiertes Array:");
    for(int i = 0; i < counter; i++){
        printf("%d ", unsortedArray[i]);
    }

    return 0;
}