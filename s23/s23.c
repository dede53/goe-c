#include<stdio.h>
#include<string.h>

// 
// This snippet gives back the name of a given day.
// https://de.wikipedia.org/wiki/Wochentagsberechnung#4._Allgemeing%C3%BCltige_Formel

//                    Jan Feb Mar Arp Mai Jun Jul Aug Sep Okt Nov Dez
int monthLength[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }; 
char* weekdays[] = { "Montag", "Dienstag", "Mittwoch", "Donnerstag", "Freitag", "Samstag", "Sonntag"}; 

int main(){
    int day, month, year;
    scanf("%d.%d.%d", &day, &month, &year);

    if((year < 1582 && month < 10 && day < 15) || year > 5000){
        return 0;
    }

    int dayInt = day % 7;
    int monthInt = 0;
    switch(month){
        case 1:
            monthInt = 0;
            break;
        case 2:
        case 3:
        case 11:
            monthInt = 3;
            break;
        case 4:
        case 7:
            monthInt = 6;
            break;
        case 5:
            monthInt = 1;
            break;
        case 9:
        case 12:
            monthInt = 5;
            break;
        case 6:
            monthInt = 4;
            break;
        case 8:
            monthInt = 2;
            break;
        default:
            // Oktober
            break;
    }
    int decadeInt = 0;
    switch(year / 100){
        case 18:
        case 22:
        case 26:
            decadeInt = 2;
            break;
        case 17:
        case 21:
        case 25:
            decadeInt = 4;
            break;
        case 16:
        case 20:
        case 24:
            decadeInt = 6;
            break;
        default:
            break;
    }
    
    int yearInt = (year % 100 / 4 + year % 100) % 7;

    int leapYear = 0;
    if(month < 3){
        leapYear = 6;
    }

    int dayOfWeek = (leapYear + yearInt + monthInt + dayInt + decadeInt -1) % 7;

    printf("%s\n", weekdays[dayOfWeek]);

    return 0;
}