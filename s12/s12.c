// Alle Primzahlen <= x

#include<stdio.h>
#include<limits.h>

int main(){
    int length = 998; // da 0,1 und 2 weg fallen...
    int numbers[length];

    // Init array
    for(int i = 0; i < length; i++){
        numbers[i] = i + 2;
    }

    // laufe durch alle Zahlen deren vielfaches enthalten sein könnte
    for(int j = 2; j <= length/2; j++){
        // Durchlaufe das komplette Array
        // printf("Teilbar durch: \t%d\n", j);
        // printf("streiche:");
        for(int k = 0; k < length; k++){
            // Prüfe jeden Eintrag auf Teilbarkeit und setze ihn bei teilbarkeit und wenn es nicht der erste wert ist auf -1.
            if(numbers[k] % j == 0 && numbers[k] != j){
                // printf("%d ", numbers[k]);
                numbers[k] = -1;
            }
        }
        // printf("\n");
    }
    
    // Ergebnis: gebe alle positiven Werte aus.
    for(int i = 0; i < length; i++){
        if(numbers[i] > 0){
            printf("%d ", numbers[i]);
        }
    }
    printf("\n");

    return 0;
}