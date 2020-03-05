#include<stdio.h>

int main(){
    int ganzZahl = 0;
    while(scanf("%d", &ganzZahl) != EOF){
        printf("OKT: %o, HEX: %x \n", ganzZahl, ganzZahl);
    }
}