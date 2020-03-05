#include<stdio.h>
#include<string.h>

int main(){
    char input1[15] = "";
    char input2[15] = "";

    int i = 0;
    int j = 0;
    // read first charstring
    while(i < 15 && (input1[i] = getchar()) != '\n' ){
        i++;
    }
    // read second charstring
    while(j < 15 && (input2[j] = getchar()) != '\n' ){
        j++;
    }
    
    if(i >= 15 || j >= 15){
        printf("Fehler\n");
    }else{
        input1[i] = '\0';
        input2[j] = '\0';
        printf("%s%s", input2, input1);
    }

    return 0;
}