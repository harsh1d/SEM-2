// Bank Management System

#include <stdio.h> //printf(),scanf()
#include <stdlib.h> //exit(0),system()
#include <conio.h> //getch()
#include <time.h> //time(),ctime()
char name[20];
int dip_amt, amt = 10000, acc_no, ac, count = 0; // Global variables
int trans_amt;
int with_amt;
int i;
void deposit_money();
void withdraw_money();
void transfer_money();
void checkDetail();
void LastDetail();
void transaction_details();
void menu();

void divider()
{
    for ( i = 0; i < 50; i++)
    {
        printf("-");
    }
}

//#Driver function
int main()
{
    FILE *ptr = fopen("Account.txt", "w");

    int ch;
    printf("\n\n\n\t\t\t\tEnter your name : ");
    gets(name);
    fprintf(ptr, "\nName : %s\n", name);
    printf("\n\t\t\t\tEnter your account no. : ");
    scanf("%d", &acc_no);
    fprintf(ptr, "Account no. : %d\n", acc_no);

    fclose(ptr);
    while (1)
    {
        menu();
        printf("\n\n\n\t\tEnter your choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            system("cls");
            deposit_money();
            break;
        case 2:
            system("cls");
            withdraw_money();
            break;

        case 3:
            system("cls");
            transfer_money();
            break;

        case 4:
            system("cls");
            checkDetail();
            break;

        case 5:
            transaction_details();
            break;

        case 0:
            system("cls");
            LastDetail();
            exit(0);

        default:
            printf("Invalid choice");
        }
    }

    return 0;
}

void menu()
{

    system("cls");
    divider();
    printf("\n\t\t\tMENU\n");

    divider();
    printf("\n\t\t[1] - Deposit Money\n");
    printf("\t\t[2] - Withdraw Money\n");
    printf("\t\t[3] - Transfer Money\n");
    printf("\t\t[4] - Account details\n");
    printf("\t\t[5] - Transaction details\n");
    printf("\t\t[0] - logout\n");
    divider();
}

//!---------------------------------------------------------
void deposit_money()
{
    int i;
    time_t tm;
    time(&tm);
    FILE *ptr = fopen("Account.txt", "a");
    printf("\n\n\t\tDEPOSITING MONEY\n");
    for ( i = 0; i < 50; i++)
    {
        printf("-");
    }

    printf("\n\tEnter the amount you want to deposit\n");
    scanf("%d", &dip_amt);
    amt += dip_amt;
    printf("\t\t*Money Deposited*\n");
    printf("\t\tNow balance : %d\n", amt);
    fprintf(ptr, "\nRs%d had been deposited to your account \n", dip_amt);
    fprintf(ptr, "Date/Time of transaction : %s\n", ctime(&tm));
    count++;

    fclose(ptr);
    printf("\t\tPress any key....\n");
    getch();
}

//!---------------------------------------------------------

void withdraw_money()
{
    int i;
    time_t tm;
    time(&tm);
    FILE *ptr = fopen("Account.txt", "a");
    printf("\t\tWITHDRAWING MONEY\n");
    for ( i = 0; i < 50; i++)
    {
        printf("-");
    }

    printf("\n\tEnter the amount you want to withdraw\n");
    scanf("%d", &with_amt);

    if (amt < with_amt)
    {
        printf("\t\t*Insufficient balance*\n");
    }
    else
    {
        amt = amt - with_amt;
        printf("\t\tMoney withdrawn\n");
        printf("\t\tCurrent balance : %d\n", amt);
        fprintf(ptr, "\nRs%d had been withdrawn from your account \n", with_amt);
        fprintf(ptr, "Date/Time of transaction : %s\n", ctime(&tm));
        count++;
    }
    fclose(ptr);
    printf("\t\tPress any key....\n");

    getch();
}

//!---------------------------------------------------------

void transfer_money()
{
    int i;
    time_t tm;
    time(&tm);
    FILE *ptr = fopen("Account.txt", "a");
    printf("\t\tTRANSFERRING MONEY\n");
    for ( i = 0; i < 50; i++)
    {
        printf("-");
    }

    printf("\nEnter the account no. in which you want to transfer the money : ");
    scanf("%d", &ac);
    printf("\n\tEnter the amount you want to transfer\n");
    scanf("%d", &trans_amt);

    if (amt < trans_amt)
    {
        printf("\t\t*You have not sufficient balance*\n");
    }
    else
    {
        amt = amt - trans_amt;
        printf("\t\t*Money Transferred*\n");
        printf("\t\tCurrent balance : %d\n", amt);
        fprintf(ptr, "\nRs%d had been transferred from your account to %d\n", trans_amt, ac);
        fprintf(ptr, "Date/Time of transaction : %s\n", ctime(&tm));
        count++;
    }
    fclose(ptr);
    printf("\t\tPress any key....\n");
    getch();
}

//!---------------------------------------------------------

void checkDetail()
{
    int i;
    printf("\t\tACCOUNT DETAILS\n");
    for ( i = 0; i < 50; i++)
    {
        printf("-");
    }

    printf("\n\t\tName : %s\n", name);
    printf("\t\tAccount No. : %d\n", acc_no);
    printf("\t\tTotal balance = %d\n ", amt);
    printf("\n\t%d transactions have been made from your account \n", count);
    printf("\t\tPress any key.....");
    getch();
}

//!---------------------------------------------------------

void transaction_details()
{

    system("cls");

    FILE *ptr;
    ptr = fopen("Account.txt", "r");
    char c = fgetc(ptr);
    if (c == EOF)
    {
        printf("\t\tTRANSACTION DETAILS\n");
        divider();
        printf("\n\t\t**NO RECENT TRANSACTION\n");
    }
    else
    {
        printf("\t\tTRANSACTION DETAILS\n");
        divider();
        printf("\n%d transactions have been made from your account \n", count);
        while (c != EOF) // EOF=End of file
        {
            printf("%c", c);
            c = fgetc(ptr);
        }
    }

    getch();
}

//!---------------------------------------------------------

void LastDetail()
{
    int i;
    printf("\t\tACCOUNT DETAILS\n");
    for ( i = 0; i < 50; i++)
    {
        printf("-");
    }
    printf("\n\t\tName : %s\n", name);
    printf("\t\tAccount No. : %d\n", acc_no);
    printf("\t\tTotal balance = %d\n ", amt);

    printf("\n\n\tPress any key to exit.....");
    getch();
    system("cls");
}
