/*
 *  main.c
 *  DaysInAMonth_C
 *
 *  This program will give you the number of days of any given month of any given year
 *
 *  C Standard: C99
 *
 *  Author: León Felipe Guevara Chávez
 *  email:  leon.guevara@itesm.mx
 *  date:   May 31st, 2017
 */
#include <stdio.h>

int main() {
    unsigned short month, daysOfMonth;     //  They are unsigned because they cannot be negative
    int year;                       //  The year number could be a negative number

    //  We ask for and read the month's number
    printf("Give me the number of the month (1 - 12): ");
    scanf("%hu", &month);

    //  We ask for and read the year's number
    printf("Give me the number of the year (XXXX): ");
    scanf("%i", &year);

    //  We find out the number of days that last this particular month
    switch(month) {
        case 1: case 3: case 5: case 7:
        case 8: case 10: case 12:
            daysOfMonth = 31;
            break;
        case 4: case 6: case 9: case 11:
            daysOfMonth = 30;
            break;
        default:
            if((year % 4 == 0) && (year % 100 != 0 || year % 400 == 0)) {
                daysOfMonth = 29;
            } else {
                daysOfMonth = 28;
            }
    }

    //  We display our findings
    printf("The numbers of days in this month is %d", daysOfMonth);

    return 0;   //  We exit main with code 0
}