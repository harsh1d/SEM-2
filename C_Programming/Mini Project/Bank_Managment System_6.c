#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

int current_acc_no;
char current_acc_no_pass[30];
static int i = 0;

struct Account
{
    int accNumber;
    char accHolderName[50];
    float balance;
    char password[30];
} account;

void login();
void login_menu();
void createAccount();

// TODO: implement the fuctionality of these functions PLEASS HELP ME GOD GIVE ME STRENGTH T~T
void checkBalance(struct Account acc)
{
    system("cls");
    printf("\n\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 ACOUNT DETAIL \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\n\t\t\tAccount Number: %d\n", acc.accNumber);
    printf("\n\t\t\tAccount Holder Name: %s\n", acc.accHolderName);
    printf("\n\t\t\tBalance: %.2f\n", acc.balance);
    Sleep(4000);
}

void deposit(struct Account *acc, float amount)
{
    acc->balance += amount;
    printf("Amount %.2f deposited successfully!\n", amount);
    checkBalance(*acc);
}

void withdraw(struct Account *acc, float amount)
{
    if (amount <= acc->balance)
    {
        acc->balance -= amount;
        printf("\n\n\tAmount %.2f withdrawn successfully!\n", amount);
        Sleep(3000);
    }
    else
    {
        printf("\n\n\tInsufficient balance!\n");
        Sleep(2000);
    }
    checkBalance(*acc);
}

int menu()
{
    // struct Account myAccount = {123456, "Maximals", 1000.00};
    int choice;
    float amount;

    do
    {
        system("cls");
        checkBalance(account);
        Sleep(5000);
        printf("\n\n\n\t\t\t\t  Bank Management System");
        printf("\n\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2  Welcome to the Main menu  \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n");
        printf("\n\t\t\t\t[1] - Check Account Balance");
        printf("\n\t\t\t\t[2] - Deposit");
        printf("\n\t\t\t\t[3] - Withdraw");
        printf("\n\t\t\t\t[0] - Exit\n");
        printf("\n\t\t\t\tEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            checkBalance(account);
            break;
        case 2:
            system("cls");
            printf("\n\n\n\t\tEnter amount to deposit: ");
            scanf("%f", &amount);
            deposit(&account, amount);
            break;
        case 3:
            system("cls");
            printf("\n\n\n\t\tEnter amount to withdraw: ");
            scanf("%f", &amount);
            withdraw(&account, amount);
            break;
        case 0:
            system("cls");
            printf("\n\n\n\t\tThank you for using Bank Management System!\n");
            break;
        default:
            system("cls");
            printf("\n\n\n\t\tInvalid choice. Please try again.\n");
        }
    } while (choice != 0);

    return 0;
}

int main()
{
    system("cls");
    char pass[10], password[10] = "admin";
    int main_exit;
    int i = 0;
    printf("\n\n\n\t\t\t\t   Bank Management System\n\t\t\t\t\t User Login ");
    printf("\n\n\n\n\n\t\t\t\tEnter Password:");
    scanf("%s", pass);

    if (strcmp(pass, password) == 0)
    {
        printf("\n\nPassword Match!\nLOADING");
        for (i = 0; i <= 6; i++)
        {
            Sleep(500);
            printf(". ");
        }
        printf("\n");
        system("pause");
        system("cls");

        login_menu();
    }
    else
    {
        printf("\n\nWrong password!!\a\a\a");
    login_try:
        printf("\nEnter 1 to try again and 0 to exit:");
        scanf("%d", &main_exit);
        if (main_exit == 1)
        {

            system("cls");
            main();
        }

        else if (main_exit == 0)
        {
            system("cls");
            exit(0);
        }
        else
        {
            printf("\nInvalid!");
            Sleep(2000);
            system("cls");
            goto login_try;
        }
    }
    return 0;
}
int j = 0;

void login()
{
    int i;
    start:
    system("cls");
    printf("\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 LOGIN \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\n\t\t\t Enter Account No: ");
    scanf("%d", &current_acc_no);
    printf("\n\n\n\t\t\t Enter Password: ");
    scanf("%s", current_acc_no_pass);
    for ( j = 0; j <= i; j++)
    {
        if (account.accNumber == current_acc_no || strcmp(account.password, current_acc_no_pass))
        {
            menu();
        }
        else
        {
            printf("incorect password");
            j++;
            goto start;
        }
    }
}

void createAccount()
{
    int temp_acc_no;
    int j = 0;
    system("cls");
account_no:
    printf("\n\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 ADD ACCOUNT \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\t\tEnter the Account Number:");
    scanf("%d", &temp_acc_no);
    if (temp_acc_no == account.accNumber)
    {
        printf("Account no. already in use!");
        Sleep(2000);
        system("cls");
        j++;

        if (j > 5)
        {
            goto done;
        }

        goto account_no;
    }
done:
    account.accNumber = temp_acc_no;
    printf("\nEnter the name:");
    scanf("%s", account.accHolderName);
    printf("\nEnter the Account Password: ");
    scanf("%s", account.password);
    printf("\nEnter the amount to deposit:$");
    scanf("%f", &account.balance);
    printf("\n\t Account created successfully!");
    i++;
    login_menu();
}

void login_menu()
{
    int choice;
start:
    system("cls");
    printf("\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 LOGIN MENU \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\n\t\t\t [1] - login by Account No");
    printf("\n\n\n\t\t\t [2] - create Account");
    printf("\n\n\n\t\t Enter your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        login();
        break;
    case 2:

        createAccount();
        break;

    default:
        printf("invalid suff");
        Sleep(2000);
        goto start;
    }
}
