struct date
{
    int day;
    int month;
    int year;
};
int main()
{
    struct date d1, d2;
    printf("Enter the first date (dd mm yyyy): ");
    scanf("%d %d %d", &d1.day, &d1.month, &d1.year);
    printf("Enter the second date (dd mm yyyy): ");
    scanf("%d %d %d", &d2.day, &d2.month, &d2.year);
  /* The Difference between dates */
    int days1 = d1.day + d1.month * 30 + d1.year * 365;
    int days2 = d2.day + d2.month * 30 + d2.year * 365;
    int diff = days2 - days1;
    printf("The difference between the two dates is %d days.\n", diff);
  /* The Difference how many years, months and days */
    int years = diff / 365;
    int months = (diff % 365) / 30;
    int days = (diff % 365) % 30;
    printf("The difference is %d years, %d months, and %d days.\n", years, months, days);


    return 0;
}
