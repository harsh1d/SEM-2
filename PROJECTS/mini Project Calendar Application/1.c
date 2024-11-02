#include <stdio.h>
#include <time.h>

// Function to print the calendar for the given month and year
void print_calendar(int month, int year)
{
    // Create a time structure with the given month and year
    struct tm timeinfo = {.tm_year = year - 1900, .tm_mon = month - 1, .tm_mday = 1};
    mktime(&timeinfo);

    // Print the month and year
    printf("\n%12s %d\n", "MONTH:", month);
    printf("%12s %d\n\n", "YEAR:", year);

    // Print the column headers (days of the week)
    printf("  SUN  MON  TUE  WED  THU  FRI  SAT\n");

    // Get the day of the week for the first day of the month (0 = Sunday, 1 = Monday, ..., 6 = Saturday)
    int start_day = timeinfo.tm_wday;

    // Print leading spaces for the first row
    for (int i = 0; i < start_day; i++)
    {
        printf("     ");
    }

    // Loop through the days of the month
    while (timeinfo.tm_mon == month - 1)
    {
        // Print the day
        printf("%5d", timeinfo.tm_mday);

        // Move to the next day
        timeinfo.tm_mday++;
        mktime(&timeinfo);

        // If the day is Saturday, start a new line
        if (timeinfo.tm_wday == 6)
        {
            printf("\n");
        }
    }

    // Print a new line at the end of the calendar
    printf("\n");
}

int main()
{
    // Get the current time
    time_t t = time(NULL);
    struct tm *timeinfo = localtime(&t);

    // Get the current month and year
    int current_month = timeinfo->tm_mon + 1;
    int current_year = timeinfo->tm_year + 1900;

    // Print the calendar for the current month
    print_calendar(current_month, current_year);

    return 0;
}
