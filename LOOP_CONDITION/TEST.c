#include <stdio.h>

// Function to determine the day of the week using Zeller's Congruence
int zellers_congruence(int year, int month, int day) {
    if (month < 3) {
        month += 12;
        year--;
    }

    int h = (day + (13 * (month + 1)) / 5 + year + year / 4 - year / 100 + year / 400) % 7;

    // Zeller's Congruence returns values 0 (Saturday) through 6 (Friday)
    return h;
}

// Function to print the calendar for a given year
void print_calendar(int year) {
    for (int month = 1; month <= 12; month++) {
        // Print the month name and year
        printf("%s %d\n", (month == 1) ? "January" : (month == 2) ? "February" : (month == 3) ? "March" :
                          (month == 4) ? "April" : (month == 5) ? "May" : (month == 6) ? "June" :
                          (month == 7) ? "July" : (month == 8) ? "August" : (month == 9) ? "September" :
                          (month == 10) ? "October" : (month == 11) ? "November" : "December", year);
        
        // Print the weekdays abbreviation
        printf("Mo Tu We Th Fr Sa Su\n");

        // Find the day of the week for the first day of the month
        int start_day = zellers_congruence(year, month, 1);

        // Determine the number of days in the month
        int days_in_month = (month == 2) ? ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) ? 29 : 28 :
                                            (month == 4 || month == 6 || month == 9 || month == 11) ? 30 : 31;

        int current_day = 1;

        // Print each week in the month
        for (int i = 0; i < 6; i++) {
            for (int j = 0; j < 7; j++) {
                if (i == 0 && j < start_day) {
                    printf("   ");
                } else if (current_day <= days_in_month) {
                    printf("%2d ", current_day);
                    current_day++;
                } else {
                    printf("   ");
                }
            }
            printf("\n");
        }

        printf("\n");
    }
}

int main() {
    // Print the calendar for the year 2024
    print_calendar(2024);

    return 0;
}
