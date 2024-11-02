#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <stdbool.h>

static int i = 0;
int current_acc_no;
char current_acc_no_pass[30];
struct Account
{
    int accNumber;
    char accHolderName[50];
    float balance;
    char password[30];
} Accounts[50];

void createAccount();
void checkBalance(int user_acc_no);
void login();
void login_menu();


void menu()
{
    // struct Account Accounts[] = {123456, "John Doe", 1000.00};
    int choice;
    float amount;

    do
    {
        system("cls");
        printf("\n\n\n\t\t\t\t  Bank Management System");
        printf("\n\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2  Welcome to the Main menu  \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n");
        printf("\n\t\t\t\t[1] - Create New Account");
        printf("\n\t\t\t\t[2] - Check Account Balance");
        printf("\n\t\t\t\t[3] - Deposit");
        printf("\n\t\t\t\t[4] - Withdraw");
        printf("\n\t\t\t\t[0] - Exit\n");
        printf("\n\t\t\t\tEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {

        case 1:
            system("cls");
            createAccount();
            break;
        case 2:
            system("cls");
            printf("\n\n\n\t\tEnter your Bank Account No.: ");
            scanf("%d", &current_acc_no);
            checkBalance(current_acc_no);
            Sleep(5000);
            break;
        case 3:
            system("cls");
            printf("\n\n\n\t\t\tEnter amount to deposit: ");
            scanf("%f", &amount);
            // deposit(&Accounts, amount);
            Sleep(5000);
            break;
        case 4:
            system("cls");
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);
            // withdraw(&Accounts, amount);
            Sleep(5000);
            break;
        case 0:
            system("cls");
            printf("\n\n\n\t\t\tThank you for using Bank Management System!\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 0);
}
void checkBalance(int user_acc_no)
{
    int it = 0;
    if (Accounts[it].accNumber == user_acc_no)
    {
        printf("\n\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 ACOUNT DETAIL \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        printf("\n\n\n\t\t\tAccount Number: %d\n", Accounts[it].accNumber);
        printf("\n\t\t\tAccount Holder Name: %s\n", Accounts[it].accHolderName);
        printf("\n\t\t\tBalance: %.2f\n", Accounts[it].balance);
    }
    else
    {
    end:
        printf("\n\n\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Invalid Account Number! \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        menu();
    }

    it++;
    if (it > 50)
    {
        goto end;
    }
}

void deposit(struct Account *acc, float amount)
{
    acc->balance += amount;
    printf("\n\t\tAmount %.2f deposited successfully!\n", amount);
    checkBalance(current_acc_no);
}

void withdraw(struct Account *acc, float amount)
{
    if (amount <= acc->balance)
    {
        acc->balance -= amount;
        printf("Amount %.2f withdrawn successfully!\n", amount);
    }
    else
    {
        printf("Insufficient balance!\n");
    }
    checkBalance(current_acc_no);
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
    if (temp_acc_no == Accounts[j].accNumber)
    {
        printf("Account no. already in use!");
        Sleep(2000);
        system("cls");
        j++;

        if (j > 50)
        {
            goto done;
        }

        goto account_no;
    }
done:
    Accounts[i].accNumber = temp_acc_no;
    printf("\nEnter the name:");
    scanf("%s", Accounts[i].accHolderName);
    printf("\nEnter the Account Password: ");
    scanf("%s", Accounts[i].password);
    printf("\nEnter the amount to deposit:$");
    scanf("%f", &Accounts[i].balance);
    printf("\n\t Account created successfully!");
    i++;
    login_menu();
}

void login_menu(){
    int choice;
    system("cls");
    printf("\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 LOGIN MENU \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\n\t\t\t [1] - login by Account No");
    printf("\n\n\n\t\t\t [2] - create Account");
    printf("\n\n\n\t\t Enter your choice: ");
    scanf("%d", &choice);
    switch (choice){
        case 1:
            login();
            break;
        case 2:

            createAccount();
            break;

        default :
            printf("invalid suff");
    }
}
int j = 0;

void login(){
    system("cls");
    printf("\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 LOGIN \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\n\t\t\t Enter Account No: ");
    scanf("%d", &current_acc_no);
    printf("\n\n\n\t\t\t Enter Password: ");
    scanf("%s",current_acc_no_pass);
    printf("%d", j);
    if (Accounts[j].accNumber == current_acc_no && Accounts[j].password == current_acc_no_pass)
    {
        printf("Invalid credentials");
        login_menu();
    }
    else{
        menu();
    }

}

int main()
{
    login_menu();
    // char pass[10],password[10]="admin";
    // int i=0;
    // printf("\n\n\n\t\t\t\t   Bank Management System\n\t\t\t\t\t User Login ");
    // printf("\n\n\n\n\n\t\t\t\tEnter Password:");
    // scanf("%s",pass);

    // if (strcmp(pass,password)==0)
    //     {printf("\n\nPassword Match!\nLOADING");
    //     for(i=0;i<=6;i++)
    //     {
    //         Sleep(500);
    //         printf(". ");
    //     }
    //     printf("\n");
    //             system("pause");
    // 			system("cls");

    //         menu();
    //     }
    // else
    //     {   printf("\n\nWrong password!!\a\a\a");
    //         login_try:
    //         printf("\nEnter 1 to try again and 0 to exit:");
    // scanf("%d",&main_exit);
    // if (main_exit==1)
    // {

    // system("cls");
    // main();
    // }

    // else if (main_exit==0)
    // {
    // system("cls");
    // close();
    // }
    // else
    // {printf("\nInvalid!");
    // Sleep(100);
    // system("cls");
    // // goto login_try;}

    //         }
    //         return 0;
}
