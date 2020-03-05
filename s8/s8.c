#include <stdio.h>
#include <math.h>

int main(){
    float summe     = 0;
    int counter     = 0;
    float ganzZahl  = 0;
    while(scanf("%f", &ganzZahl) != EOF){
        summe += ganzZahl;
        counter++;
        ganzZahl = 0;
    }
    printf("%f", summe/counter);
    return 0;
}