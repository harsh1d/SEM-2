/*
Name:	Hospital Management system
Author:	Tejas A. Sheth
Version:	3.6			//(major change . minor edit )
Description:
	create a new patients file, manage his/her appointment, keep a note of all specialists,
	tests provided by the hospital, final bill incured by a patient.

v1.0 = refer hospital_demo1.c => created an admin,staff function and tried to get a log in id for both
v1.1 = created log in id for admin(static) and added fucntions like add_staff,delete_staff,etc
v1.2 = created the staff function which asked the staff to input any patients details and financial condition and medical background
v2.0 = revamped the whole code to make a different approach, the one that is followed here.
v2.1 = added ambulance services function
v2.2 = added insurance function
v2.3 = added specialist charges and consultation charges
v2.4 = added a report function to generate an overview of the patients activity
v2.5 = added random function and files to the code, to generate an unique code each time executed
v2.6 = added code to read data from the file using id
v2.7 = minor adjustments, font size, indentation in O/P,etc
v2.8 = added pending medical background function, still unfunctional...oopss!!!!
v2.9 = added more specialists to the list and increased consulting charges
v3.0 = a major change: linked the bank to the code, so we can even execute amount deduction from bank while paying the hospital charges
v3.1 = the data automatically gets stored in a .txt file, and the final report is stored in a .pdf form
v3.2 = displayed the account status(like Y/N), then account number (like 7** )
V3.3 = added contact us footer on each page
v3.4 = added time and date, updated the test list in such a way that it is more user-friendly now(no need to select any test no, automatically picks em up and displays the sum of all the tests).
v3.5 = added medical store facility, updated price for medicines.
v3.6 = added Blood Group
*/

// most imp part is done
// DONE	=== adding a file to the code to store a patients data safely and accessing it whenever called upon.
// DONE	=== ### find how to extract line by line the contents of the file ###
// DONE	=== calculating final_bill with an 5% gst, displaying (patients personal details + medical background questionairre + government aid(y/n) + specialist visited + tests taken + FINAL BILL)
// DONE	=== can also add specialist charges seperately.  !!
// DONE	=== calculating the final report is a challenge...!!!
// DONE	=== insurance aahe ki nahi just...
// DONE	=== ambulance used or not...

// DONE === a code to print date and time automatically in the report and bill.
// NOT NEEDED // link another code(.c file) which would generate the customer bill
// DONE === link the bank to this code for better transactions
// NOT NEEDED // before that, update the bank.c to alow user-2-user transactions
// DONE === need to find a way to just extract a single line from a file using a code and modify the value for bank_transaction
// DONE ===generate a file with account_no as file_name, store basic amount in it and deduct at the end.
// ON IT === CANTEEEN, medical store for visitors

/*
system("pause");
system("cls");
*/

//global variables
/*
float sub_total=0, cnslt_chrg=0, amb_chrg=0, total, grand_total;
char moretests;
char id[7];
char buffer[1000];
int test;

char name[1000], locality[1000], city[1000], state[1000], mno[1000], tele[1000], age[100];
char conf_sub_total[1000], conf_cnslt_chrg[1000], conf_total[1000], conf_grand_total[1000];
int num;
*/


// Actual Code Starts Right Here...

#include<stdio.h>
#include<string.h>
#include<stdlib.h>		//general purpose standard library, includes functions->memory allocation, process control, conversions
#include<math.h>
#include<time.h>
//#include<windows.h>
//#include <stdbool.h>

char ext_txt[10]=".txt";
char ext_pdf[10]=".pdf";

//delay loop
int iteration, temp_var, delay_dur;

//variables used for storing input and initialization
//int lower=1,upper=300000,count=1;
char id[10];

int num;
	int num1;

char name[1000], address[1000], mno[1000], tele[1000], age[100], gender[10], bg[10];
char pat_id[100]; 	//unused
	char bankacc, new_bankacc, more, b_acc[10];;
	int check;

char a[10], b[10], c[10], d[10], e[10], f[10], g[10], h[10], i[10], j[10];

char buffer[1000];

int loop;

//bank
	float principalamount=0.00, depositamount, bill_amount, min_amt=1000.00;
	char updated_pamt[100], amt_bank[100];
	char accno[10];

//medical store
int med_no=1;
int medicine;
char moremeds, shop, store[10];

//variables used for charges incured in hospital
float amb_chrg=0.00;
float cnslt_chrg=0.00;
float sub_total=0.00;
float med_total=0.00;
float test_total=0.00;
float total;
float conc_total;
float grand_total;

char conf_amb_chrg[1000];
char conf_sub_total[1000];
char conf_cnslt_chrg[1000];
char conf_med_total[1000];
char conf_test_total[1000];
char conf_total[1000];
char conf_conc_total[1000];
char conf_grand_total[1000];


//used for loop iterations,
char amb;
int amb_typ;

int fc;
char insur;
int h_insur;

int sp;
char loadmore;

int test;
char moretests;



//function declarations - hospital
void hospital_mngmt();	//
void intro();			//introduction of the hospital
void header();			//header of the hospital
void dspy_headerhosp();	//display in file
void flow();			//dictates the flow of the whole program in all
void p_new();			//new patient function
void pers_det();		//personal details of patient function
void dspy_persdet();	//DONE
void amb_srvs();		//ambulance services
void pat_medbg();		//patient medical background questionaire function
void dspy_pat_medbg();	//DONE
void pat_fc();			//patient financial condition and corresponding government aids available function
void specialist();		//specialists available in the hospital list function
void dspy_splst();		//UN-USED
void test_det();		//tests needed to perform and their prices function
void dspy_testdet();	//UN-USED
void bill();			//final bill generation function
void dspy_bill();		//UN-USED
void report();			//display per_det,pat_medbg,specialist,test_det,bill function
void random_hospid();	//function for genrating an id( random ) for user-identification in hospital
void contactus();		//contact details

//function declaration - medical store
void header_medicalstore();		//
void medical_store();			//
void med_opthalmologist();		//
void med_nephrologist();		//
void med_neurologist();			//
void med_genphysician();		//
void med_pediatrician();		//
void med_accupunctarist();		//
void med_entspecs();			//
void med_oncologist();			//
void med_gastoenterologist();	//
void med_endocrinologist();		//
void med_dermatologist();		//
void med_gensurgeon();			//
void med_naturopathist();		//
void med_psychiatrist();		//
void med_cardiologist();		//

//function declaration - bank
void bank_mngmt();		//
void dspy_bank();		//
void random_bank_acc();	//function for genrating an id( random ) for user-identification for bank
void intro_bank();		//introduction of the bank
void header_bank();		//header of the bank
void new_acc();			//opening a new bank account
void bank();			//carrying out bank processes, like account balance, deposit, withdraw, transfer
void deposit();			//deposit money
void protect();			//protect the user/patient from mis-use of his bank account no., * marks account number values...(5**)
void pay_bill();		//pay bill from bank, deducting from the bank as well

void dspy_time();			//unused

FILE *pat_data;			//patients details file (as .txt)
FILE *pat_d;			//as .pdf
	//not working currently
FILE *acc_no;			//bank account and bank balance maintaining file

void fordelay(delay_dur)
{
    for(iteration = 0;iteration < delay_dur;iteration++)
    {
		temp_var = iteration;
	}
}

void random_hospid(int lower, int upper, int count)
{
	num = (rand()%(upper-lower+1))+lower;
	printf("\tYour Unique-ID is: %d \n",num);
}

void random_bank_acc(int lower, int upper, int count)
{
	num1 = (rand()%(upper-lower+1))+lower;
	printf("\tYour Bank-AC No. is: %d \n",num1);
}

void contactus()
{
	printf("\tREACH US:-\n");
	printf("\tDIAL: 1010 0101\n");
	printf("\tEMAIL: a3hosp@hosp.com\n");
	printf("\tFOR ANY HELP.\n");
	printf("\t\t -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.- \n");
}

/*
void dspy_time()
{
	time_t now;
	time(&now);
	printf("\t\t\t\t\t%s", ctime(&now));
}
*/

void header()
{
	printf("\n\n\t\t\t\t***WELCOME TO A3 HOSPITAL***\n");
	printf("\t\t\t\t\t\tPATIENT FIRST.\n");
	printf("\t\t\t\t\t\tAssuring.Advanced.Accessible.\n\n");

}

void dspy_headerhosp()
{
	fprintf(pat_data,"\n\n\t\t\t\t***WELCOME TO A3 HOSPITAL***\n");
	fprintf(pat_data,"\t\t\t\t\t\tPATIENT FIRST.\n");
	fprintf(pat_data,"\t\t\t\t\t\tAssuring.Advanced.Accessible.\n\n");
}

void header_bank()
{
	printf("\n\n\t\t\t\t***WELCOME TO INDIA BANK***\n");
	printf("\t\t\t\t\t\tDesi.CashFree.Safe.\n\n");

//		fprintf(acc_no,"\n\n\t\t\t\t***WELCOME TO INDIA BANK***\n");
//		fprintf(acc_no,"\t\t\t\t\t\tDesi.CashFree.Safe.\n\n");
}

void header_medicalstore()
{
	printf("\n\n\t\t\t\t***WELCOME TO INDIANA MEDICALS***\n");
	printf("\t\t\t\t\t\t24*7.Hassle-Free.Authentic.\n\n");
}

void intro()
{
	header();
	printf("\t\tThe quality of care provided at A3 Hospital is tantamount to any other top-ranking hospitals in the world.\n");
    printf("\t\t\tWe are equipped with the finest cardiac, cancer and paediatric care,\n");
    printf("\t\t\tas well as liver and kidney transplantation facility.\n");
    printf("\t\tWe are the regions first institution with an NABH accreditation by the Quality Council of India.\n\n");
}

void intro_bank()
{
	header_bank();
	printf("\t\t\tThe AIM is to provide World-Class Facilities in Minimum Efforts.\n");
    printf("\t\t\t\tQUALITY,QUICK TRANSFERS and WITHDRAWAL & DEPOSIT.\n");
    printf("\t\t\t\t24*7 ATM Service around the Country.\n\n");
}

void hospital_mngmt()
{
		for(loop=1;loop<=10;loop++)
		{
			fordelay(100000000);
			printf("\n");
		}
	intro();
	   	printf("\n\t");
		system("pause");
		system("cls");


	header();

	int lower=10001,upper=99999,count=1;

	tryagain:
		srand(time(0));

		random_hospid(lower,upper,count);

		printf("\tRe-Enter your Unique-ID: ");
		gets(id);
		pat_data=fopen(strcat(id,ext_txt),"a");
//		pat_data=fopen(id,"a");
		if(pat_data!=NULL)
		{
			printf("\tFILE CREATED \n\n\tOPENING");
			for(loop=0;loop<=6;loop++)
        	{
        		fordelay(100000000);
		    	printf(". ");
        	}
        	printf("\n\t");
			system("pause");
			system("cls");
			flow();
			fclose(pat_data);
		}
		else
		{
			printf("\tFILE NOT FOUND...! \n\n");
			printf("\tLOADING");
			for(loop=0;loop<=6;loop++)
        	{
        		fordelay(100000000);
		    	printf(". ");
        	}
        	printf("\n\t");
			system("pause");
			system("cls");
			header();
			goto tryagain;
		}

		printf("\tLOADING");
		for(loop=0;loop<=6;loop++)
       	{
       		fordelay(100000000);
	    	printf(". ");
    	}

   	printf("\n\t");
	system("pause");
	system("cls");

	//read file begins

	report();
}

void bank_mngmt()
{
	intro_bank();
	int lower=100,upper=999,count=1;

	tryagain:
		srand(time(0));

		random_bank_acc(lower,upper,count);

		printf("\tRe-Enter ");
		gets(accno);
		printf("your Bank-AC No.: ");
		gets(accno);

		acc_no=fopen(strcat(accno,ext_txt),"a");

		if(acc_no!=NULL)
		{
			printf("\tFILE CREATED \n\n\tOPENING");
			for(loop=0;loop<=6;loop++)
        	{
        		fordelay(100000000);
		    	printf(". ");
        	}
        	printf("\n\t");
			system("pause");
			system("cls");


			new_acc();
//			go to bank page and for manipulate...
			fclose(acc_no);
		}
		else
		{
			printf("\tFILE NOT FOUND...! \n\n");
			printf("\tLOADING");
			for(loop=0;loop<=6;loop++)
        	{
        		fordelay(100000000);
		    	printf(". ");
        	}
        	printf("\n");
//        	printf("\t");
//			system("pause");
//			system("cls");
			goto tryagain;
		}

		printf("\tLOADING");
		for(loop=0;loop<=6;loop++)
       	{
       		fordelay(100000000);
	    	printf(". ");
    	}
    	printf("\n\n");
//		system("pause");
//		system("cls");

//		read file begins

//	report();
}

void new_acc()
{
	header_bank();
		printf("\n\n\t\tWELCOME USER # %d .\n",num1);
		printf("\tNew Bank Account\n\n");
		printf("\t\tPrincipal Amount = %.2f \n\n",principalamount);
	minimum:
		printf("\t\tYou need to have a minimum of Rs.1000 for your account to be active. \n\n");
		printf("\t\t\t NOTE: Principal Amount should be- \n");
		printf("\t\t\t 1. Greater than or Equal to Rs.1000. \n");
		printf("\t\t\t 2. Multiple of Rs.1000. \n\n");
		printf("\tEnter the Amount you wish to Deposit in your Bank Account : ");
		scanf("%f",&principalamount);
		printf("\n");
		if(principalamount < 1000 || (int)principalamount % 1000 != 0)
		{
			goto minimum;
		}
		else
		{
			printf("\tConfirm ");
			gets(amt_bank);
			printf("your Deposit Amount : ");
			gets(amt_bank);
			printf("\n");

				fputs(amt_bank,acc_no);
		}
}

void flow()
{
	p_new();
//	printf("\t\t\t-X--X--X--X--X--X- \n\n");
	specialist();
//	printf("\t\t\t-X--X--X--X--X--X- \n\n");
	test_det();
//	printf("\t\t\t-X--X--X--X--X--X- \n\n");
	medical_store();
//	printf("\t\t\t-X--X--X--X--X--X- \n\n");
	bill();
//	printf("\t\t\t-X--X--X--X--X--X- \n\n");
	pay_bill();
//	printf("\t\t\t-X--X--X--X--X--X- \n\n");
}

void p_new()
{
	header();
	printf("\n\t\t\tEnter the Patient's Personal Details: \n\n");
	pers_det();
	header();
	printf("\n\t\t\tEnter the Patient's Medical History: \n\n");
	pat_medbg();
	header();
	printf("\n\t\t\tDescribe the Patient's Financial Condition: \n\n");
	pat_fc();
}

void pers_det()
{
//	printf("\tEnter PATIENT ID: \t");
//	scanf("%s",&name);
//	gets(pat_id);

	printf("\tEnter Full Name: \t");
//	scanf("%s",&name);
	gets(name);
	printf("\tEnter Age(in years): \t");
//	scanf("%d",&age);
	gets(age);
	printf("\tEnter Blood Group: \t");
//	scanf("%s",&bg);
	gets(bg);
	printf("\tEnter Residential Address: \t");
	gets(address);
	printf("\tEnter Contact Information :- \n");
	printf("\t\tMobile Number (Mandatory): \t");
//	scanf("%s",&mno);
	gets(mno);
	printf("\t\tEnter Landline / Emergency Contact Number (Optional, enter '/' if N.A.): \t");
//	scanf("%s",&tele);
	gets(tele);
	printf("\n");
	printf("\tEnter Gender (M - Male / F- Female): \t");
//	scanf("%s",&tele);
	gets(gender);
	printf("\n\t");
	system("pause");
	system("cls");

	bank();
//data stored successfully..
	dspy_persdet();
	dspy_bank();

	amb_srvs();
}

void bank()
{
	header_bank();

	bank_check:
		printf("\n\tDo you have an Existing Bank Account? (Y/N): ");
//		gets(bankacc);
		scanf("%s",&bankacc);
//		printf("\n");
		printf("\t\t");
		gets(b_acc);
		printf("CONFIRM YOUR ANSWER? (Y/N): ");
		gets(b_acc);
		printf("\n");

		if(bankacc=='Y' || bankacc=='y')
		{
			check:
				printf("\tEnter your Bank-AC No.: ");
				gets(accno);
//				acc_no=fopen(strcat(accno,ext_txt),"a");
	            acc_no=fopen(accno,"a");
				printf("\n");
				do
				{
					printf("\tWhat do you want to do: \n");
					printf("\t01. Check Account Balance.\n");
					printf("\t02. Deposit Amount.\n");
					printf("\t03. Exit from Bank Portal.\n");
				check1:
					printf("\tEnter your Option: ");
					scanf("%d",&check);
					printf("\n\n");

					switch(check)
					{
						case 1:
//							acc_no=fopen(strcat(accno,ext_txt),"r");
							//just open the file and print account balance
                            acc_no=fopen(accno,"r");

							if(acc_no!=NULL)
							{
							printf("\tTotal Amount in your Account = ");
								while(fgets(buffer,100,acc_no)!=NULL)
								{
									printf("%s",buffer);
								}
							}
							else
							{
								printf("\tFILE NOT FOUND...!\n");
							}
							printf("\n\n");
								fclose(acc_no);
							break;
						case 2:

//							acc_no=fopen(strcat(accno,ext_txt),"r");
							acc_no=fopen(accno,"r");
						//ask user to input the amount to be deposited and show updated amount
							printf("\tTotal Amount in your Account = ");
							if(acc_no!=NULL)
							{
								while(fgets(buffer,100,acc_no)!=NULL)
								{
									printf("%s",buffer);
								}
							}
							else
							{
								printf("\tFILE NOT FOUND...!\n");
							}
							printf("\n\n");
//							fclose(acc_no);


//							acc_no=fopen(strcat(accno,ext_txt),"w");
							acc_no=fopen(accno,"w");
							printf("\tRe-Enter Total Amount in your Account: ");
							scanf("%f",&principalamount);
							printf("\n");

							deposit();

//							printf("\t\t\t NOTE: Deposit Amount should be- \n");
//							printf("\t\t\t 01. Greater than or Equal to Rs.1000. \n");
//							printf("\t\t\t 02. Multiple of Rs.1000. \n\n");
//						reenter:
//							printf("\tEnter the Amount to be Deposited: ");
//							scanf("%f",&depositamount);
//							printf("\n");
//							if(depositamount < 1000 || (int)depositamount % 1000 != 0)
//							{
//								goto reenter;
//							}
//							else
//							{
//								principalamount = principalamount + depositamount;
//
//								printf("\tUpdated Amount in your Account = %.2f \n",principalamount);
//
//								printf("\tRe-Enter ");
//								gets(updated_pamt);
//								printf("Updated Amount = ");
//								gets(updated_pamt);
//								printf("\n");
//									fputs(updated_pamt,acc_no);
//
///*								printf("Updated Amount = ");
//								while(fgets(buffer,100,acc_no)!=NULL)
//								{
//									printf("%s",buffer);
//								}
//*/
//									fclose(acc_no);
//							}
							break;
						case 3:
							goto exit;
							break;
						default:
							printf("\t\tWRONG INPUT...! \n\n");
							goto check1;
					}
					printf("\tWish to Check/Deposit again(Y/N): ");
					scanf("%s",&more);
					printf("\n");
				}while(more=='Y' || more=='y');
		}
		else if(bankacc=='N' || bankacc=='n')
		{
			new_bacc:
				printf("\tDo you wish to Open a \'NEW\' Bank Account (Y/N): \t");
//				gets(new_bankacc);
				scanf("%s",&new_bankacc);
				printf("\n");
				if(new_bankacc=='Y' || new_bankacc=='y')
				{
					printf("\tThat\'s Great..\n\tHold on till we transfer you to the Bank.\n\n");
				}
				else if(new_bankacc=='N' || new_bankacc=='n')
				{
					printf("\tThis Hospital is going Cash-Less...\n");
					printf("\tWhy don\'t you??\n");
					printf("\tTHINK WISE: Open a Bank Account & Go Digital..!\n\n");
				}
				else
				{
					printf("\t\tWRONG INPUT...! \n\n");
					goto new_bacc;
				}

				printf("\tTAKING YOU TO THE BANK ");
				for(loop=0;loop<=6;loop++)
				{
					fordelay(100000000);
					printf(". ");
				}
				printf("\n\t");
				system("pause");
				system("cls");
				bank_mngmt();			//create a file fucntion? account new
				goto check;
		// bank function to create a new acc./
		}
		else
		{
			printf("\t\tWRONG INPUT...! \n\n");
			goto bank_check;
		}
exit:

	printf("\tLOADING");
	for(loop=0;loop<=6;loop++)
	{
		fordelay(100000000);
		printf(". ");
	}
	printf("\n\t");
	system("pause");
	system("cls");

}

void deposit()
{
		printf("\t\t\t NOTE: Deposit Amount should be- \n");
		printf("\t\t\t 01. Greater than or Equal to Rs.%.2f . \n",min_amt);
		printf("\t\t\t 02. Multiple of Rs.1000 . \n\n");
	reenter:
		printf("\tEnter the Amount to be Deposited: ");
		scanf("%f",&depositamount);
		printf("\n");
		if(depositamount < min_amt || (int)depositamount % 1000 != 0)
		{
			printf("\t\tWRONG INPUT...!\n\n");
			goto reenter;
		}
		else
		{
			principalamount = principalamount + depositamount;

		printf("\tUpdated Amount in your Account = %.2f \n",principalamount);
		printf("\tRe-Enter ");
		gets(updated_pamt);
		printf("Updated Amount = ");
		gets(updated_pamt);
		printf("\n");
			fputs(updated_pamt,acc_no);

/*	printf("Updated Amount = ");
	while(fgets(buffer,100,acc_no)!=NULL)
	{
		printf("%s",buffer);
	}
*/
//			fclose(acc_no);
		}
}

void dspy_persdet()
{

//	dspy_headerhosp();
//	dspy_time();
	time_t now;
	time(&now);
	fprintf(pat_data,"\tREGISTRATION COMMENCED @ %s ",ctime(&now));

	fprintf(pat_data,"\n\t\t PATIENT\'s FILE-NAME:  ");
	fputs(id,pat_data);
//	fprintf(num,pat_data);
//	fprintf(pat_id,pat_data);
	fprintf(pat_data, "\n\n");

	fprintf(pat_data,"\t\t\t A) PERSONAL DETAILS ===>");
	fprintf(pat_data, "\n\n");
//	fprintf(pat_data, "\n");
	fprintf(pat_data,"tFull Name: ");
	fputs(name,pat_data);
	fprintf(pat_data, "\n");
	fprintf(pat_data,"\tAge: ");
	fputs(age,pat_data);
	fprintf(pat_data, "\n");
	fprintf(pat_data,"\tBlood Group: ");
	fputs(bg,pat_data);
	fprintf(pat_data, "\n");
	fprintf(pat_data,"\tAddress: ");
	fputs(address,pat_data);
	fprintf(pat_data, "\n");
	fprintf(pat_data,"\tMobile Number: ");
	fputs(mno,pat_data);
	fprintf(pat_data, "\n");
	fprintf(pat_data,"\tTelephone Number: ");
	fputs(tele,pat_data);
	fprintf(pat_data, "\n");
	fprintf(pat_data,"\tGender: ");
	fputs(gender,pat_data);
	fprintf(pat_data, "\n\n");
}

void dspy_bank()
{
//	diplay bank status, amount deposited
	fprintf(pat_data,"\t\t\t B) BANK DETAILS ===>");
	fprintf(pat_data, "\n\n");
	fprintf(pat_data,"\tBank Account (Y/N): ");
	fputs(b_acc,pat_data);
	fprintf(pat_data, "\n");

	if(bankacc=='Y' || bankacc=='y')
	{
		fprintf(pat_data,"\n");
		protect();
	}
	else if(bankacc=='N' || bankacc=='n')
	{
		fprintf(pat_data,"\n\tCreated a New Bank Account:- \n");
		protect();
	}
	else
	{
		fprintf(pat_data,"\tWRONG INPUT...!\n\n");
	}

	fprintf(pat_data, "\n");
//	fprintf(pat_data, "\n");


}

void protect()
{

	if(num1 / 100 == 1)
	{
		fprintf(pat_data,"\tBank Account No: 1**.\n");
	}
	else if(num1 / 100 == 2)
	{
		fprintf(pat_data,"\tBank Account No: 2**.\n");
	}
	else if(num1 / 100 == 3)
	{
		fprintf(pat_data,"\tBank Account No: 3**.\n");
	}
	else if(num1 / 100 == 4)
	{
		fprintf(pat_data,"\tBank Account No: 4**.\n");
	}
	else if(num1 / 100 == 5)
	{
		fprintf(pat_data,"\tBank Account No: 5**.\n");
	}
	else if(num1 / 100 == 6)
	{
		fprintf(pat_data,"\tBank Account No: 6**.\n");
	}
	else if(num1 / 100 == 7)
	{
		fprintf(pat_data,"\tBank Account No: 7**.\n");
	}
	else if(num1 / 100 == 8)
	{
		fprintf(pat_data,"\tBank Account No: 8**.\n");
	}
	else if(num1 / 100 == 9)
	{
		fprintf(pat_data,"\tBank Account No: 9**.\n");
	}

}

void amb_srvs()
{
	header();

		fprintf(pat_data,"\t\t\t C) AMBULANCE SERVICE ===>");
		fprintf(pat_data, "\n\n");

	printf("\tIs the Patient brought to the Hospital in an Ambulance? (Y/N): ");
//	scanf("%c",&amb);
	scanf("%s",&amb);
	printf("\n");
	if(amb=='y' || amb=='Y')
	{
	ambulance:
		printf("\tWhich type of Ambulance was used? \n");
		printf("\t00. No Ambulance. \n");
		printf("\t01. Basic type of Ambulance. \n");
		printf("\t02. Mobile Intensive Care Unit Ambulance. \n");
//		printf("\t03. Motorcycle Ambulance. \n");
		printf("\t03. Small vehicle for Minor road Ambulance. \n");
		printf("\tEnter your Option:- ");
		scanf("%d",&amb_typ);
		printf("\n");

		switch(amb_typ)
		{
			case 0:
				printf("\tAmbulance Type: N.A. \n");
					fprintf(pat_data,"\tAmbulance Type: N.A.");
					fprintf(pat_data, "\n\n");
				printf("\n");
				break;

			case 1:
				printf("\tAmbulance Type: Basic. \n");
				printf("\tAmbulance Charge = Rs. 1500\n");
					fprintf(pat_data,"\tAmbulance Type: Basic.");
					fprintf(pat_data, "\n\n");
				amb_chrg=amb_chrg+1500;
				printf("\n");
				break;
			case 2:
				printf("\tAmbulance Type: Mobile Intensive Care Unit. \n");
				printf("\tAmbulance Charge = Rs. 3000\n");
					fprintf(pat_data,"\tAmbulance Type: Mobile Intensive Care Unit.");
					fprintf(pat_data, "\n\n");
				amb_chrg=amb_chrg+3000;
				printf("\n");
				break;
/*			case 3:
				printf("\tAmbulance Type: Motorcycle. \n");
				printf("\tAmbulance Charge = Rs. 2750\n");
					fprintf(pat_data,"\tAmbulance Type: Motorcycle.");
					fprintf(pat_data, "\n\n");
				amb_chrg=amb_chrg+2750;
				printf("\n");
				break;
*/			case 3:
				printf("\tAmbulance Type: Small vehicle for Minor Road. \n");
				printf("\tAmbulance Charge = Rs. 4000\n");
					fprintf(pat_data,"\tAmbulance Type: Small vehicle for Minor Road.");
					fprintf(pat_data, "\n\n");
				amb_chrg=amb_chrg+4000;
				printf("\n");
				break;
			default:
				printf("\t\tWRONG INPUT...! \n\n");
				goto ambulance;
		}
	}
	else
	{
		printf("\tAmbulance Service Availed: NO. \n");
			fprintf(pat_data,"\tAmbulance Type: N.A.");
			fprintf(pat_data, "\n\n");
	}

	printf("\tAMBULANCE-CHARGE  = %.2f \n",amb_chrg);
	printf("\tConfirm ");
	gets(conf_amb_chrg);			//not printing, if written directly.
	printf("AMBULANCE-CHARGE = ");
	gets(conf_amb_chrg);
		fprintf(pat_data,"\tAMBULANCE-CHARGE = Rs. ");
		fputs(conf_amb_chrg,pat_data);
		fprintf(pat_data, "\n\n");
	printf("\n\n");

	printf("\tUPDATING");
	for(loop=0;loop<=6;loop++)
	{
		fordelay(100000000);
		printf(". ");
	}
	printf("\n\t");
	system("pause");
	system("cls");

}

void pat_medbg()
{

	printf("\tAnswer the Following Questions to the most of your Knowledge. \n");
	printf("\t01. Has you doctor ever said your blood pressure was too high or too low?(Y/N): ");
//	scanf("%s",&a);
	gets(a);
	printf("\n");
	printf("\t02. Do you have any known cardiovascular problems (abnormal ECG, previous heart attack, etc)?(Y/N): ");
//	scanf("%s",&b);
	gets(b);
	printf("\n");
	printf("\t03. Has your doctor ever told you that your cholesterol was too high?(Y/N): ");
//	scanf("%s",&c);
	gets(c);
	printf("\n");
	printf("\t04. Have you (or a family member) ever been told that you have diabetes?(Y/N): ");
//	scanf("%s",&d);
	gets(d);
	printf("\n");
	printf("\t05. Do you have any injuries or orthopedic problems (back, knees, etc)?(Y/N): ");
//	scanf("%s",&e);
	gets(e);
	printf("\n");
	printf("\t06. Do you have stisff or swollen joints?(Y/N): ");
//	scanf("%s",&f);
	gets(f);
	printf("\n");
	printf("\t07. Do you have tension or soreness in any area?(Y/N): ");
//	scanf("%s",&g);
	gets(g);
	printf("\n");
	printf("\t08. Are you taking any prescribed medications or dietary supplementation?(Y/N): ");
//	scanf("%s",&h);
	gets(h);
	printf("\n");
	printf("\t09. Do you ever have problems sleeping?(Y/N): ");
//	scanf("%s",&i);
	gets(i);
	printf("\n");
	printf("\t10. Have you ever been advised by a doctor, physician or specialist not to perform any type of exercise/activity?(Y/N): ");
//	scanf("%s",&j);
	gets(j);
	printf("\n");

	dspy_pat_medbg();

	printf("\tSTORING");
	for(loop=0;loop<=6;loop++)
	{
		fordelay(100000000);
		printf(". ");
	}
	printf("\n\t");
	system("pause");
	system("cls");
}

void dspy_pat_medbg()
{
	fprintf(pat_data,"\t\t\t D) MEDICAL BACKGROUND ===>");
	fprintf(pat_data,"\n\n");

	fprintf(pat_data,"\t01. Has you doctor ever said your blood pressure was too high or too low? : ");
	fputs(a,pat_data);
	fprintf(pat_data, "\n");

	fprintf(pat_data,"\t02. Do you have any known cardiovascular problems (abnormal ECG, previous heart attack, etc)? : ");
	fputs(b,pat_data);
	fprintf(pat_data, "\n");

	fprintf(pat_data,"\t03. Has your doctor ever told you that your cholesterol was too high? : ");
	fputs(c,pat_data);
	fprintf(pat_data, "\n");

	fprintf(pat_data,"\t04. Have you (or a family member) ever been told that you have diabetes? : ");
	fputs(d,pat_data);
	fprintf(pat_data, "\n");

	fprintf(pat_data,"\t05. Do you have any injuries or orthopedic problems (back, knees, etc)?: ");
	fputs(e,pat_data);
	fprintf(pat_data, "\n");

	fprintf(pat_data,"\t06. Do you have stiff or swollen joints? : ");
	fputs(f,pat_data);
	fprintf(pat_data, "\n");

	fprintf(pat_data,"\t07. Do you have tension or soreness in any area? : ");
	fputs(g,pat_data);
	fprintf(pat_data, "\n");

	fprintf(pat_data,"\t08. Are you taking any prescribed medications or dietary supplementation? : ");
	fputs(h,pat_data);
	fprintf(pat_data, "\n");

	fprintf(pat_data,"\t09. Do you ever have problems sleeping? : ");
	fputs(i,pat_data);
	fprintf(pat_data, "\n");

	fprintf(pat_data,"\t10. Have you ever been advised by a doctor, physician or specialist not to perform any type of exercise/activity? : ");
	fputs(j,pat_data);
	fprintf(pat_data, "\n\n");
}

void pat_fc()
{
		fprintf(pat_data,"\t\t\t E) FINANCIAL CONDITION & INSURANCE ===>");
		fprintf(pat_data,"\n\n");

	g_aid:
		printf("\tSelect the Patient's Apprx. Annual Income Range(in Rs.) \n");
		printf("\t1. <=1,00,000 \n");
		printf("\t2. 1,00,001 - 5,00,000 \n");
		printf("\t3. 5,00,001 - 10,00,000 \n");
		printf("\t4. >=10,00,001 \n");
		printf("\tChoose appropriate Income Bracket :- ");
		scanf("%d",&fc);
		printf("\n");

		switch(fc)
		{
			case 1:
				printf("\tGovernment Aid: 50PERCENT concession on Hospital Bill\n");
					fprintf(pat_data,"\tGovernment Aid: 50PERCENT concession on Hospital Bill.");
					fprintf(pat_data, "\n\n");
				printf("\n");
				break;
			case 2:
				printf("\tGovernment Aid: 25PERCENT concession on Hospital Bill\n");
					fprintf(pat_data,"\tGovernment Aid: 25PERCENT concession on Hospital Bill.");
					fprintf(pat_data, "\n\n");
				printf("\n");
				break;
			case 3:
				printf("\tGovernment Aid: 10PERCENT concession on Hospital Bill\n");
					fprintf(pat_data,"\tGovernment Aid: 10PERCENT concession on Hospital Bill.");
					fprintf(pat_data, "\n\n");
				printf("\n");
				break;
			case 4:
				printf("\tNot eligible for any benefits under Government Scheme \n");
					fprintf(pat_data,"\tGovernment Aid: N.A.");
					fprintf(pat_data, "\n\n");
				printf("\n");
				break;
			default:
				printf("\t\tWRONG INPUT...! \n\n");
				goto g_aid;
	}

	printf("\tUPDATING");
	for(loop=0;loop<=6;loop++)
    {
    	fordelay(100000000);
		printf(". ");
	}
	printf("\n\t");
	system("pause");
	system("cls");


	header();
	printf("\n\t\tDoes the Patient have a Health Insurance Policy?(Y/N): ");
	scanf("%s",&insur);
	if(insur=='y' || insur=='Y')
	{
		//mediclaim, critical illness cover, hospital cash plan, and personal accident insurance.
	insurance:
		printf("\tSelect which Health Insurance Policy the Patient has.. \n");
		printf("\t01. MediClaim Policy. \n");
		printf("\t02. Critical Illness Cover. \n");
		printf("\t03. Hospital Cash Plan. \n");
		printf("\t04. Personal Accident Insurance. \n");
		printf("\tEnter your Option:- ");
		scanf("%d",&h_insur);
		printf("\n");

		switch(h_insur)
		{
			case 1:
				printf("\tHealth Insurance Policy: MediClaim Policy. \n");
					fprintf(pat_data,"\tHealth Insurance Policy: MediClaim Policy.");
					fprintf(pat_data, "\n\n");
				printf("\n");
				break;
			case 2:
				printf("\tHealth Insurance Policy: Critical Illness Cover. \n");
					fprintf(pat_data,"\tHealth Insurance Policy: Critical Illness Cover.");
					fprintf(pat_data, "\n\n");
				printf("\n");
				break;
			case 3:
				printf("\tHealth Insurance Policy: Hospital Cash Plan. \n");
					fprintf(pat_data,"\tHealth Insurance Policy: Hospital Cash Plan.");
					fprintf(pat_data, "\n\n");
				printf("\n");
				break;
			case 4:
				printf("\tHealth Insurance Policy: Personal Accident Insurance. \n");
					fprintf(pat_data,"\tHealth Insurance Policy: Personal Accident Insurance.");
					fprintf(pat_data, "\n\n");
				printf("\n");
				break;
			default:
				printf("\t\tWRONG INPUT...! \n\n");
				goto insurance;
		}
	}
	else
	{
		printf("\tHealth Insurance Policy: N.A. \n");
			fprintf(pat_data,"\tHealth Insurance Policy: N.A.");
			fprintf(pat_data, "\n\n");
		printf("\n");
	}

	printf("\tUPDATING");
	for(loop=0;loop<=6;loop++)
    {
    	fordelay(100000000);
		printf(". ");
	}
	printf("\n\t");
	system("pause");
	system("cls");

}

void specialist()
{
	header();
		fprintf(pat_data,"\t\t\t F) SPECIALIST CONSULTED ===>");
		fprintf(pat_data, "\n\n");

	refer:
		printf("\tWhich Specialist would you like to Consult..\n");
		printf("\t  :Specialists:/ Room No.\n");
		printf("\t01. Ophthalmologist / 101,102 \n");
		printf("\t\t--Osteopathic Doctor who treats and diagnose Eye and Vision Problems. \n");
		printf("\t02. Nephrologist / 105,106 \n");
		printf("\t\t--Specialists who treats and diagnose diseases of Kidneys. \n");
		printf("\t03. Neurologist / 109,110 \n");
		printf("\t\t--Specialists who treats and diagnose disorders that affect the Brain, Spinal Cord, and Nerves. \n");
		printf("\t04. General Physician / 201,202 \n");
		printf("\t\t--Doctors who does not Specialize in one particular area of Medicine. \n");
		printf("\t05. Pediatrician / 206,207 \n");
		printf("\t\t--Specialists who treats and diagnose Childhood Illnesses. \n");
		printf("\t06. Accupuncturist / 208,209 \n");
		printf("\t\t--Doctors who Specialize in traditional medicine. \n");
		printf("\t07. E.N.T Specialist / 302,303 \n");
		printf("\t\t-Specialists who treats and diagnose disorders of the Head and Neck. \n\n");
	load:
		printf("\ta.) LOAD MORE. \n");
        printf("\tb.) Select Specialist from above List. \n");
		printf("\tEnter your Choice (A/B): ");
		scanf("%s",&loadmore);
		printf("\n");

		if(loadmore=='a' || loadmore=='A')
		{
			printf("\t08. Oncologist / 305,306 \n");
			printf("\t\t--Specialists who treats and provides medical care for a person diagnosed with Cancer \n");
			printf("\t09. Gastroenterologist / 307,308 \n");
			printf("\t\t--Specialists who treats and focuses on the Digestive Organs. \n");
			printf("\t10. Endocrinologist / 309,310 \n");
			printf("\t\t--Specialists who treats and diagnose disorders of the Endocrine system \n");
			printf("\t11. Dermatologist / 401,402 \n");
			printf("\t\t--Specialists who treats and diagnosis diseases of the Skin, Hair, and Nails. \n");
			printf("\t12. General Surgeon / 404,405,406,407 \n");
			printf("\t\t--Specialists who treats and diagnose Pre / Post -Operative, and Operative condition of Patient. \n");
			printf("\t13. Naturopathist  / 501,502 \n");
			printf("\t\t--Doctors who Specialize in Naturopathy or Naturopathic Medicine \n");
			printf("\t14. Psychiatrist / 504,505 \n");
			printf("\t\t--Specialists who treats and diagnosemental, emotional, or behavioral problems \n");
			printf("\t15. Cardiologist / 507,508,509,510 \n");
			printf("\t\t--Specialists who treats and focuses on the diseases of Heart and Blood Vessels. \n\n");

			printf("\tEnter your Preference :- ");
			scanf("%d",&sp);
			printf("\n");
		}
		else if(loadmore=='b' || loadmore=='B')
		{
			printf("\tEnter your Preference :- ");
			scanf("%d",&sp);
			printf("\n");
		}
		else
		{
			printf("\t\tWRONG INPUT...! \n\n");
			goto load;
		}


		switch(sp)
		{
		//charges need to be increased
			case 1:
				printf("\tReferring to : Ophthalmologist \n");
				printf("\tVisit Room No. : 101,102 \n");
				printf("\tConsulting Charge @ Rs. 4000.00 \n");
					fprintf(pat_data,"\tReferring to: General Physician.");
					fprintf(pat_data, "\n\n");
				cnslt_chrg=cnslt_chrg+4000.00;
				printf("\n");
				break;
			case 2:
				printf("\tReferring to : Nephrologist \n");
				printf("\tVisit Room No. : 105,106 \n");
				printf("\tConsulting Charge @ Rs. 5000.00 \n");
					fprintf(pat_data,"\tReferring to: E.N.T.");
					fprintf(pat_data, "\n\n");
				cnslt_chrg=cnslt_chrg+5000.00;
				printf("\n");
				break;
			case 3:
				printf("\tReferring to : Neurologist \n");
				printf("\tVisit Room No. : 109,110 \n");
				printf("\tConsulting Charge @ Rs. 5000.00 \n");
					fprintf(pat_data,"\tReferring to: Neurologist.");
					fprintf(pat_data, "\n\n");
				cnslt_chrg=cnslt_chrg+5000.00;
				printf("\n");
				break;
			case 4:
				printf("\tReferring to : General Physician \n");
				printf("\tVisit Room No. : 201,202 \n");
				printf("\tConsulting Charge @ Rs. 1000.00 \n");
					fprintf(pat_data,"\tReferring to: General Physician.");
					fprintf(pat_data, "\n\n");
				cnslt_chrg=cnslt_chrg+1000.00;
				printf("\n");
				break;
			case 5:
				printf("\tReferring to : Pediatrician \n");
				printf("\tVisit Room No. : 206,207 \n");
				printf("\tConsulting Charge @ Rs. 2000.00 \n");
					fprintf(pat_data,"\tReferring to: Pediatrician.");
					fprintf(pat_data, "\n\n");
				cnslt_chrg=cnslt_chrg+2000.00;
				printf("\n");
				break;
			case 6:
				printf("\tReferring to : Accupuncturist \n");
				printf("\tVisit Room No. : 208,209 \n");
				printf("\tConsulting Charge @ Rs. 3000.00 \n");
					fprintf(pat_data,"\tReferring to: Accupuncturist.");
					fprintf(pat_data, "\n\n");
				cnslt_chrg=cnslt_chrg+3000.00;
				printf("\n");
				break;
			case 7:
				printf("\tReferring to : E.N.T Specialist \n");
				printf("\tVisit Room No. : 302,303 \n");
				printf("\tConsulting Charge @ Rs. 5000.00 \n");
					fprintf(pat_data,"\tReferring to: E.N.T Specialist.");
					fprintf(pat_data, "\n\n");
				cnslt_chrg=cnslt_chrg+5000.00;
				printf("\n");
				break;
			case 8:
				printf("\tReferring to : Oncologist \n");
				printf("\tVisit Room No. : 305,306 \n");
				printf("\tConsulting Charge @ Rs. 7500.00 \n");
					fprintf(pat_data,"\tReferring to: Oncologist.");
					fprintf(pat_data, "\n\n");
				cnslt_chrg=cnslt_chrg+7500.00;
				printf("\n");
				break;
			case 9:
				printf("\tReferring to : Gastroenterologist \n");
				printf("\tVisit Room No. : 307,308 \n");
				printf("\tConsulting Charge @ Rs. 3000.00 \n");
					fprintf(pat_data,"\tReferring to: Gastroenterologist.");
					fprintf(pat_data, "\n\n");
				cnslt_chrg=cnslt_chrg+3000.00;
				printf("\n");
				break;
			case 10:
				printf("\tReferring to : Endocrinologist \n");
				printf("\tVisit Room No. : 309,310 \n");
				printf("\tConsulting Charge @ Rs. 4500.00 \n");
					fprintf(pat_data,"\tReferring to: Endocrinologist.");
					fprintf(pat_data, "\n\n");
				cnslt_chrg=cnslt_chrg+4500.00;
				printf("\n");
				break;
			case 11:
				printf("\tReferring to : Dermatologist \n");
				printf("\tVisit Room No. : 401,402 \n");
				printf("\tConsulting Charge @ Rs. 3500.00 \n");
					fprintf(pat_data,"\tReferring to: Dermatologist.");
					fprintf(pat_data, "\n\n");
				cnslt_chrg=cnslt_chrg+3500.00;
				printf("\n");
				break;
			case 12:
				printf("\tReferring to : General Surgeon \n");
				printf("\tVisit Room No. : 404,405,406,407 \n");
				printf("\tConsulting Charge @ Rs. 6000.00 \n");
					fprintf(pat_data,"\tReferring to: General Surgeon.");
					fprintf(pat_data, "\n\n");
				cnslt_chrg=cnslt_chrg+6000.00;
				printf("\n");
				break;
			case 13:
				printf("\tReferring to : Naturopathist \n");
				printf("\tVisit Room No. : 501,502 \n");
				printf("\tConsulting Charge @ Rs. 2500.00 \n");
					fprintf(pat_data,"\tReferring to: Naturopathist.");
					fprintf(pat_data, "\n\n");
				cnslt_chrg=cnslt_chrg+2500.00;
				printf("\n");
				break;
			case 14:
				printf("\tReferring to : Psychiatrist \n");
				printf("\tVisit Room No. : 504,505 \n");
				printf("\tConsulting Charge @ Rs. 4500.00 \n");
					fprintf(pat_data,"\tReferring to: Psychiatrist.");
					fprintf(pat_data, "\n\n");
				cnslt_chrg=cnslt_chrg+4500.00;
				printf("\n");
				break;
			case 15:
				printf("\tReferring to : Cardiologist \n");
				printf("\tVisit Room No. : 507,508,509,510 \n");
				printf("\tConsulting Charge @ Rs. 7500.00 \n");
					fprintf(pat_data,"\tReferring to: Cardiologist.");
					fprintf(pat_data, "\n\n");
				cnslt_chrg=cnslt_chrg+7500.00;
				printf("\n");
				break;
			default:
				printf("\t\tWRONG INPUT...! \n\n");
				goto refer;
		}
//	printf("Consulting Charges = %.2f \n",cnslt_chrg);

	printf("\tCONSULTING-CHARGES = %.2f \n",cnslt_chrg);
/*	printf("Confirm CONSULTING-CHARGES = ");
	gets(conf_cnslt_chrg);
	*/
	printf("\tConfirm ");
	gets(conf_cnslt_chrg);			//not printing, if written directly.
	printf("CONSULTING-CHARGES = Rs. ");
	gets(conf_cnslt_chrg);
		fprintf(pat_data,"\tCONSULTING-CHARGES = Rs. ");
		fputs(conf_cnslt_chrg,pat_data);
		fprintf(pat_data, "\n\n");
	printf("\n");

	printf("\tCHECKING");
	for(loop=0;loop<=6;loop++)
    {
    	fordelay(100000000);
		printf(". ");
	}
	printf("\n\t");
	system("pause");
	system("cls");

}

void test_det()
{
//	float sub_total=0;
	header();
	printf("\tGo through the tests suggested by your Specialist. \n\n");
//	printf("\n");
		fprintf(pat_data,"\t\t\t G) Medical Test Carried ===>");
		fprintf(pat_data, "\n\n");

	printf("\t\t::ADDITIONAL SERVICES-I::\n\n");
	printf("\t\t\t:TEST LIST:\n\n");

	printf("\tTest\'s Suggested: \n");
		fprintf(pat_data,"\tTest\'s Suggested: \n");
	switch(sp)
	{
		case 1:
			printf("\t01. Visual Acuity = Rs. 700.00 \n");
			printf("\t02. Refraction Test = Rs. 500.00 \n");
			printf("\t03. Slit Lamp Test = Rs. 350.00 \n");
			printf("\t04. Retina Test = Rs. 800.00 \n");
			printf("\t05. Optical Coherence Tomography(O.C.T.) = Rs. 1300.00 \n");
			printf("\t06. UltraSonography = Rs. 3000.00 \n");
				fprintf(pat_data,"\t\t01. Visual Acuity = Rs. 700.00");
				fprintf(pat_data, "\n");
				fprintf(pat_data,"\t\t02. Refraction Test = Rs. 500.00");
				fprintf(pat_data, "\n");
				fprintf(pat_data,"\t\t03. Slit Lamp Test = Rs. 350.00");
				fprintf(pat_data, "\n");
				fprintf(pat_data,"\t\t04. Retina Test = Rs. 800.00");
				fprintf(pat_data, "\n");
				fprintf(pat_data,"\t\t05. Optical Coherence Tomography(O.C.T.) = Rs. 1300.00");
				fprintf(pat_data, "\n");
				fprintf(pat_data,"\t\t06. UltraSonography = Rs. 3000.00");
				fprintf(pat_data, "\n");
			test_total=test_total+700.00+500.00+350.00+800.00+1300.00+3000.00;
			break;
		case 2:
			printf("\t01. Blood Test = Rs. 300.00 \n");
			printf("\t02. Kidney Biospy = Rs. 900.00 \n");
			printf("\t03. Urinalysis = Rs. 400.00 \n");
				fprintf(pat_data,"\t\t01. Blood Test = Rs. 300.00");
				fprintf(pat_data, "\n");
				fprintf(pat_data,"\t\t02. Kidney Biospy = Rs. 900.00");
				fprintf(pat_data, "\n");
				fprintf(pat_data,"\t\t03. Urinalysis = Rs. 400.00");
				fprintf(pat_data, "\n");
			test_total=test_total+300.00+900.00+400.00;
			break;
		case 3:
			printf("\t01. Computed Tomography (C.T.) Scan = Rs. 1500.00 \n");
			printf("\t02. Magnetic Resonance Imaging(M.R.I.) Scan = Rs. 3000.00 \n");
			printf("\t03. Positron Emission Tomography(P.E.T.) = Rs. 3000.00 \n");
				fprintf(pat_data,"\t\t01. Computed Tomography (C.T.) Scan = Rs. 1500.00");
				fprintf(pat_data, "\n");
				fprintf(pat_data,"\t\t02. Magnetic Resonance Imaging(M.R.I.) Scan = Rs. 3000.00");
				fprintf(pat_data, "\n");
				fprintf(pat_data,"\t\t03. Positron Emission Tomography(P.E.T.) = Rs. 3000.00");
				fprintf(pat_data, "\n");
			test_total=test_total+1500.00+3000.00+3000.00;
			break;
		case 4:
			printf("\t01. X-Ray Test = Rs. 300.00 \n");
			printf("\t02. Blood Test = Rs. 300.00 \n");
			printf("\t03. Stool Test = Rs. 300.00 \n");
			printf("\t04. Urine Test = Rs. 300.00 \n");
				fprintf(pat_data,"\t\t01. X-Ray Test = Rs. 300.00");
				fprintf(pat_data, "\n");
				fprintf(pat_data,"\t\t02. Blood Test = Rs. 300.00");
				fprintf(pat_data, "\n");
				fprintf(pat_data,"\t\t03. Stool Test = Rs. 300.00");
				fprintf(pat_data, "\n");
				fprintf(pat_data,"\t\t04. Urine Test = Rs. 300.00");
				fprintf(pat_data, "\n");
			test_total=test_total+300.00+300.00+300.00+300.00;
			break;
		case 5:
			printf("\t01. No Specific Test\'s Needed \n");
				fprintf(pat_data,"\t\t00. No Specific Tests Needed");
				fprintf(pat_data, "\n");
			test_total=test_total+0.00;
			break;
		case 6:
			printf("\t01. No Specific Test\'s Needed \n");
				fprintf(pat_data,"\t\t00. No Specific Tests Needed");
				fprintf(pat_data, "\n");
			test_total=test_total+0.00;
			break;
		case 7:
			printf("\t01. Nasal Endoscopy = Rs. 750.00 \n");
			printf("\t02. Computed Tomography (C.T.) Scan = Rs. 1500.00 \n");
			printf("\t03. Allergy Testing = Rs. 400.00 \n");
			printf("\t04. Audiometric Testing = Rs. 500.00 \n");
			printf("\t05. Biospies = Rs. 1300.00 \n");
				fprintf(pat_data,"\t\t01. Nasal Endoscopy = Rs. 750.00");
				fprintf(pat_data, "\n");
				fprintf(pat_data,"\t\t02. Computed Tomography (C.T.) Scan = Rs. 1500.00");
				fprintf(pat_data, "\n");
				fprintf(pat_data,"\t\t03. Allergy Testing = Rs. 400.00");
				fprintf(pat_data, "\n");
				fprintf(pat_data,"\t\t04. Audiometric Testing = Rs. 500.00");
				fprintf(pat_data, "\n");
				fprintf(pat_data,"\t\t05. Biospies = Rs. 1300.00");
				fprintf(pat_data, "\n");
			test_total=test_total+750.00+1500.00+400.00+500.00+1300.00;
			break;
		case 8:
			printf("\t01. Physical Examination = Rs. 300.00 \n");
			printf("\t02. Blood Test = Rs. 300.00 \n");
			printf("\t03. Urine Test = Rs. 300.00 \n");
			printf("\t04. Magnetic Resonance Imaging(M.R.I.) Scan = Rs. 3000.00 \n");
			printf("\t05. UltraSound Test = Rs. 1200.00 \n");
			printf("\t06. Computed Tomography (C.T.) Scan = Rs. 1500.00 \n");
				fprintf(pat_data,"\t\t01. Physical Examination = Rs. 300.00");
				fprintf(pat_data, "\n");
				fprintf(pat_data,"\t\t02. Blood Test = Rs. 300.00");
				fprintf(pat_data, "\n");
				fprintf(pat_data,"\t\t03. Urine Test = Rs. 300.00");
				fprintf(pat_data, "\n");
				fprintf(pat_data,"\t\t04. Magnetic Resonance Imaging(M.R.I.) Scan = Rs. 3000.00");
				fprintf(pat_data, "\n");
				fprintf(pat_data,"\t\t05. UltraSound Test = Rs. 1200.00");
				fprintf(pat_data, "\n");
				fprintf(pat_data,"\t\t06. Computed Tomography (C.T.) Scan = Rs. 1500.00");
				fprintf(pat_data, "\n");
			test_total=test_total+300.00+300.00+300.00+1200.00+1500.00+3000.00;
			break;
		case 9:
			printf("\t01. Liver Biospy = Rs. 750.00 \n");
			printf("\t02. Esophagal pH Monitoring = Rs. 2000.00 \n");
			printf("\t03. Capsule Endoscopy = Rs. 1500.00 \n");
			printf("\t04. Coloscopy = Rs. 1000.00 \n");
				fprintf(pat_data,"\t\t01. Liver Biospy = Rs. 750.00");
				fprintf(pat_data, "\n");
				fprintf(pat_data,"\t\t02. Esophagal pH Monitoring = Rs. 2000.00");
				fprintf(pat_data, "\n");
				fprintf(pat_data,"\t\t03. Capsule Endoscopy = Rs. 1500.00");
				fprintf(pat_data, "\n");
				fprintf(pat_data,"\t\t04. Coloscopy = Rs. 1000.00");
				fprintf(pat_data, "\n");
			test_total=test_total+750.00+2000.00+1500.00+1000.00;
			break;
		case 10:
			printf("\t01. Bone density Test = Rs. 300.00 \n");
			printf("\t02. Urine Test = Rs. 300.00 \n");
			printf("\t03. Oral Glucose Tolerance = Rs. 350.00 \n");
			printf("\t04. CRH Simulation = Rs. 900.00 \n");
				fprintf(pat_data,"\t\t01. Bone density Test = Rs. 300.00");
				fprintf(pat_data, "\n");
				fprintf(pat_data,"\t\t02. Urine Test = Rs. 300.00");
				fprintf(pat_data, "\n");
				fprintf(pat_data,"\t\t03. Oral Glucose Tolerance = Rs. 350.00");
				fprintf(pat_data, "\n");
				fprintf(pat_data,"\t\t04. CRH Simulation = Rs. 900.00");
				fprintf(pat_data, "\n");
			test_total=test_total+300.00+300.00+350.00+900.00;
			break;
		case 11:
			printf("\t01. Skin Allergy Test = Rs. 500.00 \n");
			printf("\t02. Skin Biospy = Rs. 750.00 \n");
				fprintf(pat_data,"\t\t01. Skin Allergy Test = Rs. 500.00");
				fprintf(pat_data, "\n");
				fprintf(pat_data,"\t\t02. Skin Biospy = Rs. 750.00");
				fprintf(pat_data, "\n");
			test_total=test_total+500.00+500.00+750.00;
			break;
		case 12:
			printf("\t01. Blood Test = Rs. 300.00 \n");
			printf("\t02. Chest X-Ray = Rs. 300.00 \n");
			printf("\t03. Sugar Test = Rs. 300.00 \n");
			printf("\t04. Electrocardiogram(E.C.G.) = Rs. 2500.00 \n");
				fprintf(pat_data,"\t\t01. Blood Test = Rs. 300.00");
				fprintf(pat_data, "\n");
				fprintf(pat_data,"\t\t02. Chest X-Ray = Rs. 300.00");
				fprintf(pat_data, "\n");
				fprintf(pat_data,"\t\t03. Sugar Test = Rs. 300.00");
				fprintf(pat_data, "\n");
				fprintf(pat_data,"\t\t04. Electrocardiogram(E.C.G.) = Rs. 2500.00");
				fprintf(pat_data, "\n");
			test_total=test_total+300.00+300.00+300.00+2500.00;
			break;
		case 13:
			printf("\t01. No Specific Test\'s Needed \n");
				fprintf(pat_data,"\t\t00. No Specific Tests Needed");
				fprintf(pat_data, "\n");
			test_total=test_total+0.00;
			break;
		case 14:
			printf("\t01. Millon Clinical Multiaxial Inventory = Rs. 1500.00 \n");
			printf("\t02. WISC / WAIS = Rs. 1750.00 \n");
				fprintf(pat_data,"\t\t01. Millon Clinical Multiaxial Inventory = Rs. 1500.00");
				fprintf(pat_data, "\n");
				fprintf(pat_data,"\t\t02. WISC / WAIS = Rs. 1750.00");
				fprintf(pat_data, "\n");
			test_total=test_total+1500.00+1500.00+1750.00;
			break;
		case 15:
			printf("\t01. Echo-Cardiography = Rs. 3000.00 \n");
			printf("\t02. Coronary Catheterization = Rs. 3000.00 \n");
			printf("\t03. Electrocardiogram(E.C.G.) = Rs. 2500.00 \n");
				fprintf(pat_data,"\t\t01. Echo-Cardiography = Rs. 3000.00");
				fprintf(pat_data, "\n");
				fprintf(pat_data,"\t\t02. Coronary Catheterization = Rs. 3000.00");
				fprintf(pat_data, "\n");
				fprintf(pat_data,"\t\t03. Electrocardiogram(E.C.G.) = Rs. 2500.00");
				fprintf(pat_data, "\n");
			test_total=test_total+3000.00+3000.00+2500.00;
			break;
		default:
			printf("\t\tWRONG INPUT...!\n\n");
//			goto test;

	}

/*	do
	{
	test:
		printf("\t\t::ADDITIONAL SERVICES::\n");
		printf("\t\t    :TEST LIST:\n");
		printf("\t00. No Test = Rs. 00.00 \n");
		printf("\t01.X-Ray = Rs. 300.00 \n");
		printf("\t02.Ultra-sound = Rs. 500.00 \n");
		printf("\t03.C.T.Scan = Rs.1800.00 \n");
		printf("\t04.TC,DC,HB = Rs.  90.00 \n");
		printf("\t05.Urine R/E = Rs.  80.00 \n");
		printf("\t06.Blood C/S = Rs. 250.00 \n");
		printf("\t07.Biliribin D/T = Rs. 200.00 \n");
		printf("\t08.Stool Test = Rs.  60.00 \n");
		printf("\t09.Sugar Test = Rs. 400.00 \n");
		printf("\tEnter Appropriate Number According to the test suggested by your Specialist.. :- ");
		scanf("%d",&test);
		printf("\n");

		switch(test)
		{
			case 0:
				printf("\tNo Test Suggested \n");
					fprintf(pat_data,"\tTest Suggested: N.A.");
					fprintf(pat_data, "\n");
				printf("\n");
				break;
			case 1:
				printf("\tX-Ray Test @ Rs. 300.00 \n");
					fprintf(pat_data,"\tTest Suggested: X-Ray Test.");
					fprintf(pat_data, "\n");
				sub_total=sub_total+300;
				printf("\n");
				break;
			case 2:
				printf("\tUltra-Sound Test @ Rs. 500.00 \n");
					fprintf(pat_data,"\tTest Suggested: Ultra-Sound Test.");
					fprintf(pat_data, "\n");
				sub_total=sub_total+500;
				printf("\n");
				break;
			case 3:
				printf("\tC.T.Scan @ Rs.1800.00 \n");
					fprintf(pat_data,"\tTest Suggested: C.T.Scan.");
					fprintf(pat_data, "\n");
				sub_total=sub_total+1800;
				printf("\n");
				break;
			case 4:
				printf("\tTC,DC,HB @ Rs. 90.00 \n");
					fprintf(pat_data,"\tTest Suggested: TC,DC,HB.");
					fprintf(pat_data, "\n");
				sub_total=sub_total+90;
				printf("\n");
				break;
			case 5:
				printf("\tUrine R/E @ Rs. 80.00 \n");
					fprintf(pat_data,"\tTest Suggested: Urine R/E.");
					fprintf(pat_data, "\n");
				sub_total=sub_total+80;
				printf("\n");
				break;
			case 6:
				printf("\tBlood C/S @ Rs. 250.00 \n");
					fprintf(pat_data,"\tTest Suggested: Blood C/S.");
					fprintf(pat_data, "\n");
				sub_total=sub_total+250;
				printf("\n");
				break;
			case 7:
				printf("\tBiliribin D/T @ Rs. 200.00 \n");
					fprintf(pat_data,"\tTest Suggested: Biliribin D/T.");
					fprintf(pat_data, "\n");
				sub_total=sub_total+200;
				printf("\n");
				break;
			case 8:
				printf("\tStool Test @ Rs. 60.00 \n");
					fprintf(pat_data,"\tTest Suggested: Stool Test.");
					fprintf(pat_data, "\n");
				sub_total=sub_total+60;
				printf("\n");
				break;
			case 9:
				printf("\tSugar Test @ Rs. 400.00 \n");
					fprintf(pat_data,"\tTest Suggested: Sugar Test.");
					fprintf(pat_data, "\n");
				sub_total=sub_total+400;
				printf("\n");
				break;
			default:
				printf("\t\tWRONG INPUT...! \n\n");
				goto test;
		}

		printf("\tDo you have any other tests pending (Y/N) : ");
		scanf("%s",&moretests);
		printf("\n");
	}while(moretests=='Y' || moretests=='y');
*/
/*	printf("\tCONSULTING-CHARGES = %.2f \n",cnslt_chrg);
	printf("Confirm CONSULTING-CHARGES = ");
	gets(conf_cnslt_chrg);

	printf("\tConfirm ");
	gets(conf_cnslt_chrg);			//not printing, if written directly.
	printf("CONSULTING-CHARGES = ");
	gets(conf_cnslt_chrg);
		fprintf(pat_data,"\tCONSULTING-CHARGES = Rs. ");
		fputs(conf_cnslt_chrg,pat_data);
		fprintf(pat_data, "\n");
	printf("\n");
*/

		fprintf(pat_data, "\n");
	printf("\n\tTEST-TOTAL = %.2f \n",test_total);
	printf("\tConfirm ");
	printf("TEST-TOTAL = Rs. ");
	gets(conf_test_total);

	printf("\n\tMandatory Bed Charge = Rs. 1500.00 \n");
	printf("\tHospital Visiting Charge = Rs. 2000.00 \n\n");

	printf("\tSub-Total = Test Charges + Ambulance Charges + Bed Charges + Hospital Visiting Charges\n\n");
	sub_total=test_total+amb_chrg+(1500.00+2000.00);

	printf("\tSUB-TOTAL = %.2f \n",sub_total);
	printf("\tConfirm ");
//	gets(conf_sub_total);			//not printing, if written directly.
	printf("SUB-TOTAL = Rs. ");
	gets(conf_sub_total);

/*	printf("\tConfirm SUB-TOTAL = ");
	gets(conf_sub_total);
*/

		fprintf(pat_data,"\tSUB-TOTAL = Rs. ");
		fputs(conf_sub_total,pat_data);
		fprintf(pat_data, "\n\n");
	printf("\n");

	printf("\tRECORDING");
	for(loop=0;loop<=6;loop++)
    {
    	fordelay(100000000);
		printf(". ");
	}
	printf("\n\t");
	system("pause");
	system("cls");
}

void med_opthalmologist()
{
	printf("\t01. Artificial Tear Drops = Rs. 400.75 \n");
	printf("\t02. Eye Drops = Rs. 20.05 \n");
	printf("\t03. Ofloxacin = Rs. 505.00 \n");
	printf("\t04. Ciprofloxacin = Rs. 550.50 \n");
	printf("\t05. Visine = Rs. 375.40 \n");

	do
	{
	again:
		printf("\n\tEnter Number According to Medicine suggested by your Specialist.(one by one) :- ");
		scanf("%d",&medicine);
		printf("\n");

		switch(medicine)
		{
			case 1:
				printf("\tArtificial Tear Drops @ Rs. 400.75 \n");
					fprintf(pat_data,"\t\t0%d. Artificial Tear Drops.",med_no);
					fprintf(pat_data, "\n");
				med_total=med_total+400.75;
				printf("\n");
				break;
			case 2:
				printf("\tEye Drops @ Rs. 20.05 \n");
					fprintf(pat_data,"\t\t0%d. Eye Drops.",med_no);
					fprintf(pat_data, "\n");
				med_total=med_total+20.05;
				printf("\n");
				break;
			case 3:
				printf("\tOfloxacin @ Rs. 505.00 \n");
					fprintf(pat_data,"\t\t0%d. Ofloxacin.",med_no);
					fprintf(pat_data, "\n");
				med_total=med_total+505.00;
				printf("\n");
				break;
			case 4:
				printf("\tCiprofloxacin @ Rs. 550.50 \n",med_no);
					fprintf(pat_data,"\t\t0%d. Ciprofloxacin.",med_no);
					fprintf(pat_data, "\n");
				med_total=med_total+550.50;
				printf("\n");
				break;
			case 5:
				printf("\tVisine @ Rs. 375.40 \n",med_no);
					fprintf(pat_data,"\t\t0%d. Visine.",med_no);
					fprintf(pat_data, "\n");
				med_total=med_total+375.40;
				printf("\n");
				break;
			default:
				printf("\t\tWRONG INPUT...!\n");
				goto again;
				break;
		}
			med_no++;
		printf("\tDo you require any other Medicine\'s (Y/N): ");
		scanf("%s",&moremeds);
		printf("\n");

	}while(moremeds=='Y' || moremeds=='y');

}
void med_nephrologist()
{
	printf("\t01. Blood Pressure Tablets = Rs. 45.00 \n");
	printf("\t02. Cholestrol Tablets = Rs. 39.74 \n");
	printf("\t03. Water Tablets = Rs. 80.00 \n");
	printf("\t04. Iron Syrup = Rs. 90.50 \n");
	printf("\t05. Phosphate Binders = Rs. 153.20 \n");

	do
	{
	again:
		printf("\n\tEnter Number According to Medicine suggested by your Specialist.(one by one) :- ");
		scanf("%d",&medicine);
		printf("\n");

		switch(medicine)
		{
			case 1:
				printf("\tBlood Pressure Tablets @ Rs. 45.30 \n");
					fprintf(pat_data,"\t\t0%d. Blood Pressure Tablets.",med_no);
					fprintf(pat_data, "\n");
				med_total=med_total+45.30;
				printf("\n");
				break;
			case 2:
				printf("\t Cholestrol Tablets @ Rs. 39.74 \n");
					fprintf(pat_data,"\t\t0%d. Cholestrol Tablets.",med_no);
					fprintf(pat_data, "\n");
				med_total=med_total+39.74;
				printf("\n");
				break;
			case 3:
				printf("\tWater Tablets @ Rs. 80.00 \n");
					fprintf(pat_data,"\t\t0%d. Water Tablets.",med_no);
					fprintf(pat_data, "\n");
				med_total=med_total+80.00;
				printf("\n");
				break;
			case 4:
				printf("\tIron Syrup @ Rs. 90.50 \n");
					fprintf(pat_data,"\t\t0%d. Iron Syrup.",med_no);
					fprintf(pat_data, "\n");
				med_total=med_total+90.50;
				printf("\n");
				break;
			case 5:
				printf("\tPhosphate Binders  @ Rs. 153.20 \n");
					fprintf(pat_data,"\t\t0%d. Phosphate Binders.",med_no);
					fprintf(pat_data, "\n");
				med_total=med_total+153.20;
				printf("\n");
				break;
			default:
				printf("\t\tWRONG INPUT...!\n");
				goto again;
				break;
		}
			med_no++;
		printf("\tDo you require any other Medicine\'s (Y/N): ");
		scanf("%s",&moremeds);
		printf("\n");

	}while(moremeds=='Y' || moremeds=='y');

}
void med_neurologist()
{
	printf("\t01. Phenytoin = Rs. 104.00 \n");
	printf("\t02. Phenobarbital = Rs. 58.40 \n");
	printf("\t03. Vigabatrin = Rs. 570.00 \n");

	do
	{
	again:
		printf("\n\tEnter Number According to Medicine suggested by your Specialist.(one by one) :- ");
		scanf("%d",&medicine);
		printf("\n");

		switch(medicine)
		{
			case 1:
				printf("\tPhenytoin @ Rs. 104.00 \n");
					fprintf(pat_data,"\t\t0%d. Phenytoin.",med_no);
					fprintf(pat_data, "\n");
				med_total=med_total+104.00;
				printf("\n");
				break;
			case 2:
				printf("\tPhenobarbital @ Rs. 58.40 \n");
					fprintf(pat_data,"\t\t0%d. Phenobarbital.",med_no);
					fprintf(pat_data, "\n");
				med_total=med_total+58.40;
				printf("\n");
				break;
			case 3:
				printf("\tVigabatrin @ Rs. 570.00 \n");
					fprintf(pat_data,"\t\t0%d. Vigabatrin.",med_no);
					fprintf(pat_data, "\n");
				med_total=med_total+570.00;
				printf("\n");
				break;
			default:
				printf("\t\tWRONG INPUT...!\n");
				goto again;
				break;
		}
			med_no++;
		printf("\tDo you require any other Medicine\'s (Y/N): ");
		scanf("%s",&moremeds);
		printf("\n");

	}while(moremeds=='Y' || moremeds=='y');

}
void med_genphysician()
{
	printf("\t00. No Specific Medicine(s) Needed \n");
		fprintf(pat_data,"\t00. Medicine Suggested: NIL");
		fprintf(pat_data,"\n");
}
void med_pediatrician()
{
	printf("\t01. Amooxicillin = Rs. 300.00 \n");
	printf("\t02. Albuterol = Rs. 50.00 \n");
	printf("\t03. Cephalexin = Rs. 83.00 \n");
	printf("\t04. Mupirocin = Rs. 45.00 \n");
	printf("\t05. Nystatin = Rs. 48.00 \n");
	printf("\t06. Budesonide = Rs. 29.00 \n");

	do
	{
	again:
		printf("\n\tEnter Number According to Medicine suggested by your Specialist.(one by one) :- ");
		scanf("%d",&medicine);
		printf("\n");

		switch(medicine)
		{
			case 1:
				printf("\tAmooxicillin @ Rs. 300.00 \n");
					fprintf(pat_data,"\t\t0%d. Amooxicillin.",med_no);
					fprintf(pat_data, "\n");
				med_total=med_total+300.00;
				printf("\n");
				break;
			case 2:
				printf("\tAlbuterol @ Rs. 50.00 \n");
					fprintf(pat_data,"\t\t0%d. Albuterol.",med_no);
					fprintf(pat_data, "\n");
				med_total=med_total+50.00;
				printf("\n");
				break;
			case 3:
				printf("\tCephalexin @ Rs. 83.00 \n");
					fprintf(pat_data,"\t\t0%d. Cephalexin.",med_no);
					fprintf(pat_data, "\n");
				med_total=med_total+83.00;
				printf("\n");
				break;
			case 4:
				printf("\tMupirocin  @ Rs. 45.00 \n");
					fprintf(pat_data,"\t\t0%d. Mupirocin.",med_no);
					fprintf(pat_data, "\n");
				med_total=med_total+45.00;
				printf("\n");
				break;
			case 5:
				printf("\tNystatin @ Rs. 43.00 \n");
					fprintf(pat_data,"\t\t0%d. Nystatin.",med_no);
					fprintf(pat_data, "\n");
				med_total=med_total+43.00;
				printf("\n");
				break;
			case 6:
				printf("\tBudesonide @ Rs. 29.00 \n");
					fprintf(pat_data,"\t\t0%d. Budesonide.",med_no);
					fprintf(pat_data, "\n");
				med_total=med_total+29.00;
				printf("\n");
				break;
			default:
				printf("\t\tWRONG INPUT...!\n");
				goto again;
				break;
		}
			med_no++;
		printf("\tDo you require any other Medicine\'s (Y/N): ");
		scanf("%s",&moremeds);
		printf("\n");

	}while(moremeds=='Y' || moremeds=='y');

}
void med_accupuntarist()
{
	printf("\t00. No Specific Medicine(s) Needed \n");
		fprintf(pat_data,"\t00. Medicine Suggested: NIL");
		fprintf(pat_data,"\n");

}
void med_entspecs()
{
	printf("\t01. Nystatin = Rs. 48.00 \n");
	printf("\t02. Ear Drops = Rs. 36.20 \n");
	printf("\t03. Ipratropium = Rs. 19.00 \n");

	do
	{
	again:
		printf("\n\tEnter Number According to Medicine suggested by your Specialist.(one by one) :- ");
		scanf("%d",&medicine);
		printf("\n");

		switch(medicine)
		{
			case 1:
				printf("\tNystatin @ Rs. 48.00 \n");
					fprintf(pat_data,"\t\t0%d. Nystatin.",med_no);
					fprintf(pat_data, "\n");
				med_total=med_total+48.00;
				printf("\n");
				break;
			case 2:
				printf("\tEar Drops @ Rs. 36.20 \n");
					fprintf(pat_data,"\t\t0%d. Ear Drops.",med_no);
					fprintf(pat_data, "\n");
				med_total=med_total+36.20;
				printf("\n");
				break;
			case 3:
				printf("\tIpratropium @ Rs. 19.00 \n");
					fprintf(pat_data,"\t\t0%d. Ipratropium.",med_no);
					fprintf(pat_data, "\n");
				med_total=med_total+19.00;
				printf("\n");
				break;
			default:
				printf("\t\tWRONG INPUT...!\n");
				goto again;
				break;
		}
			med_no++;
		printf("\tDo you require any other Medicine\'s (Y/N): ");
		scanf("%s",&moremeds);
		printf("\n");

	}while(moremeds=='Y' || moremeds=='y');

}
void med_oncologist()
{
	printf("\t01. Ibrance = Rs. 1300.75 \n");
	printf("\t02. Revlimid = Rs. 500.50 \n");
	printf("\t03. Neulasta = Rs. 800.10 \n");
	printf("\t04. Zytiga = Rs. 900.00 \n");

	do
	{
	again:
		printf("\n\tEnter Number According to Medicine suggested by your Specialist.(one by one) :- ");
		scanf("%d",&medicine);
		printf("\n");

		switch(medicine)
		{
			case 1:
				printf("\tIbrance @ Rs. 1300.75 \n");
					fprintf(pat_data,"\t\t0%d. Ibrance.",med_no);
					fprintf(pat_data, "\n");
				med_total=med_total+1300.75;
				printf("\n");
				break;
			case 2:
				printf("\tRevlimid @ Rs. 500.50 \n");
					fprintf(pat_data,"\t\t0%d. .Revlimid",med_no);
					fprintf(pat_data, "\n");
				med_total=med_total+500.50;
				printf("\n");
				break;
			case 3:
				printf("\tNeulasta @ Rs. 800.10 \n");
					fprintf(pat_data,"\t\t0%d. Neulasta.",med_no);
					fprintf(pat_data, "\n");
				med_total=med_total+800.10;
				printf("\n");
				break;
			case 4:
				printf("\tZytiga @ Rs. 900.00 \n");
					fprintf(pat_data,"\t\t0%d. Zytiga.",med_no);
					fprintf(pat_data, "\n");
				med_total=med_total+900.00;
				printf("\n");
				break;
			default:
				printf("\t\tWRONG INPUT...!\n");
				goto again;
				break;
		}
			med_no++;
		printf("\tDo you require any other Medicine\'s (Y/N): ");
		scanf("%s",&moremeds);
		printf("\n");

	}while(moremeds=='Y' || moremeds=='y');

}
void med_gastroenterologist()
{
	printf("\t01. Cyramza = Rs. 89.00 \n");
	printf("\t02. Entyvio = Rs. 50.60 \n");
	printf("\t03. Zerbaxa = Rs. 87.00 \n");
	printf("\t04. Stivarga = Rs. 90.30 \n");

	do
	{
	again:
		printf("\n\tEnter Number According to Medicine suggested by your Specialist.(one by one) :- ");
		scanf("%d",&medicine);
		printf("\n");

		switch(medicine)
		{
			case 1:
				printf("\tCyramza @ Rs. 89.00 \n");
					fprintf(pat_data,"\t\t0%d. Cyramza.",med_no);
					fprintf(pat_data, "\n");
				med_total=med_total+89.00;
				printf("\n");
				break;
			case 2:
				printf("\tEntyvio @ Rs. 50.60 \n");
					fprintf(pat_data,"\t\t0%d. Entyvio.",med_no);
					fprintf(pat_data, "\n");
				med_total=med_total+50.60;
				printf("\n");
				break;
			case 3:
				printf("\tZerbaxa @ Rs. 87.00 \n");
					fprintf(pat_data,"\t\t0%d. Zerbaxa.",med_no);
					fprintf(pat_data, "\n");
				med_total=med_total+87.00;
				printf("\n");
				break;
			case 4:
				printf("\tStivarga @ Rs. 90.30 \n");
					fprintf(pat_data,"\t\t0%d. Stivarga.",med_no);
					fprintf(pat_data, "\n");
				med_total=med_total+90.30;
				printf("\n");
				break;
			default:
				printf("\t\tWRONG INPUT...!\n");
				goto again;
				break;
		}
			med_no++;
		printf("\tDo you require any other Medicine\'s (Y/N): ");
		scanf("%s",&moremeds);
		printf("\n");

	}while(moremeds=='Y' || moremeds=='y');

}
void med_endocrinologist()
{
	printf("\t01. Carbimazole = Rs. 300.00 \n");
	printf("\t02. Metformin = Rs. 500.00 \n");
	printf("\t03. Insulin = Rs. 1800.00 \n");

	do
	{
	again:
		printf("\n\tEnter Number According to Medicine suggested by your Specialist.(one by one) :- ");
		scanf("%d",&medicine);
		printf("\n");

		switch(medicine)
		{
			case 1:
				printf("\tCarbimazole @ Rs. 300.00 \n");
					fprintf(pat_data,"\t\t0%d. Carbimazole.",med_no);
					fprintf(pat_data, "\n");
				med_total=med_total+300.00;
				printf("\n");
				break;
			case 2:
				printf("\tMetformin @ Rs. 500.00 \n");
					fprintf(pat_data,"\t\t0%d. Metformin.",med_no);
					fprintf(pat_data, "\n");
				med_total=med_total+500.00;
				printf("\n");
				break;
			case 3:
				printf("\tInsulin @ Rs. 1800.00 \n");
					fprintf(pat_data,"\t\t0%d. Insulin.",med_no);
					fprintf(pat_data, "\n");
				med_total=med_total+1800.00;
				printf("\n");
				break;
			default:
				printf("\t\tWRONG INPUT...!\n");
				goto again;
				break;
		}
			med_no++;
		printf("\tDo you require any other Medicine\'s (Y/N): ");
		scanf("%s",&moremeds);
		printf("\n");

	}while(moremeds=='Y' || moremeds=='y');

}
void med_dermatologist()
{
	printf("\t01. Antifungal(ORAL) = Rs. 320.00 \n");
	printf("\t02. Penicillin(ORAL) = Rs. 450.00 \n");
	printf("\t03. Acne Preparations(Topical) = Rs. 1300.00 \n");
	printf("\t04. Monoxidil(Topical) = Rs. 970.00 \n");

	do
	{
	again:
		printf("\n\tEnter Number According to Medicine suggested by your Specialist.(one by one) :- ");
		scanf("%d",&medicine);
		printf("\n");

		switch(medicine)
		{
			case 1:
				printf("\tAntifungal(ORAL) @ Rs. 320.00 \n");
					fprintf(pat_data,"\t\t0%d. Antifungal(ORAL).",med_no);
					fprintf(pat_data, "\n");
				med_total=med_total+320.00;
				printf("\n");
				break;
			case 2:
				printf("\tPenicillin(ORAL) @ Rs. 450.00 \n");
					fprintf(pat_data,"\t\t0%d. Penicillin(ORAL).",med_no);
					fprintf(pat_data, "\n");
				med_total=med_total+450.00;
				printf("\n");
				break;
			case 3:
				printf("\tAcne Preparations(TOPICAL) @ Rs. 1300.00 \n");
					fprintf(pat_data,"\t\t0%d. Acne Preparations(TOPICAL).",med_no);
					fprintf(pat_data, "\n");
				med_total=med_total+1300.00;
				printf("\n");
				break;
			case 4:
				printf("\tMonoxidil(TOPICAL) @ Rs. 970.00 \n",med_no);
					fprintf(pat_data,"\t\t0%d. Monoxidil(TOPICAL).",med_no);
					fprintf(pat_data, "\n");
				med_total=med_total+970.00;
				printf("\n");
				break;
			default:
				printf("\t\tWRONG INPUT...!\n");
				goto again;
				break;
		}
			med_no++;
		printf("\tDo you require any other Medicine\'s (Y/N): ");
		scanf("%s",&moremeds);
		printf("\n");

	}while(moremeds=='Y' || moremeds=='y');

}
void med_gensurgeon()
{
	printf("\t01. Heparin = Rs. 750.00 \n");
	printf("\t02. Argatroban = Rs. 150.00 \n");
	printf("\t03. Lovenox = Rs. 100.00 \n");
	printf("\t04. Coumadin = Rs. 96.00 \n");

	do
	{
	again:
		printf("\n\tEnter Number According to Medicine suggested by your Specialist.(one by one) :- ");
		scanf("%d",&medicine);
		printf("\n");

		switch(medicine)
		{
			case 1:
				printf("\tHeparin @ Rs. 750.00 \n");
					fprintf(pat_data,"\t\t0%d. Heparin.",med_no);
					fprintf(pat_data, "\n");
				med_total=med_total+750.00;
				printf("\n");
				break;
			case 2:
				printf("\tArgatroban @ Rs. 150.00 \n");
					fprintf(pat_data,"\t\t0%d. Argatroban.",med_no);
					fprintf(pat_data, "\n");
				med_total=med_total+150.00;
				printf("\n");
				break;
			case 3:
				printf("\tLovenox @ Rs. 100.00 \n");
					fprintf(pat_data,"\t\t0%d. Lovenox.",med_no);
					fprintf(pat_data, "\n");
				med_total=med_total+100.00;
				printf("\n");
				break;
			case 4:
				printf("\tArgatroban @ Rs. 96.00 \n");
					fprintf(pat_data,"\t\t0%d. Argatroban.",med_no);
					fprintf(pat_data, "\n");
				med_total=med_total+96.00;
				printf("\n");
				break;
			default:
				printf("\t\tWRONG INPUT...!\n");
				goto again;
				break;
		}
			med_no++;
		printf("\tDo you require any other Medicine\'s (Y/N): ");
		scanf("%s",&moremeds);
		printf("\n");

	}while(moremeds=='Y' || moremeds=='y');


}
void med_naturopathist()
{
	printf("\t00. No Specific Medicine(s) Needed \n");
		fprintf(pat_data,"\t00. Medicine Suggested: NIL");
		fprintf(pat_data,"\n");

}
void med_psychiatrist()
{
	printf("\t01. Zoloft = Rs. 690.48 \n");
	printf("\t02. Celexa = Rs. 50.03 \n");
	printf("\t03. Xanax = Rs. 120.80 \n");
	printf("\t04. Desyrel = Rs. 90.24 \n");
	printf("\t05. Prozac = Rs. 117.30 \n");

	do
	{
	again:
		printf("\n\tEnter Number According to Medicine suggested by your Specialist.(one by one) :- ");
		scanf("%d",&medicine);
		printf("\n");

		switch(medicine)
		{
			case 1:
				printf("\tZoloft @ Rs. 690.48 \n");
					fprintf(pat_data,"\t\t0%d. Zoloft.",med_no);
					fprintf(pat_data, "\n");
				med_total=med_total+690.48;
				printf("\n");
				break;
			case 2:
				printf("\tCelexa @ Rs. 50.03 \n");
					fprintf(pat_data,"\t\t0%d. Celexa.",med_no);
					fprintf(pat_data, "\n");
				med_total=med_total+50.03;
				printf("\n");
				break;
			case 3:
				printf("\tXanax @ Rs. 120.80 \n");
					fprintf(pat_data,"\t\t0%d. Xanax.",med_no);
					fprintf(pat_data, "\n");
				med_total=med_total+120.80;
				printf("\n");
				break;
			case 4:
				printf("\tDesyrel @ Rs. 90.24 \n");
					fprintf(pat_data,"\t\t0%d. Desyrel.",med_no);
					fprintf(pat_data, "\n");
				med_total=med_total+90.24;
				printf("\n");
				break;
			case 5:
				printf("\tProzac @ Rs. 117.30 \n");
					fprintf(pat_data,"\t\t0%d. Prozac.",med_no);
					fprintf(pat_data, "\n");
				med_total=med_total+117.30;
				printf("\n");
				break;
			default:
				printf("\t\tWRONG INPUT...!\n");
				goto again;
				break;
		}
			med_no++;
		printf("\tDo you require any other Medicine\'s (Y/N): ");
		scanf("%s",&moremeds);
		printf("\n");
	}while(moremeds=='Y' || moremeds=='y');

}
void med_cardiologist()
{
	printf("\t01. Warfarin = Rs. 3030.00 \n");
	printf("\t02. Aspirin = Rs. 1269.30 \n");
	printf("\t03. Trandolapril = Rs. 105.00 \n");
	printf("\t04. Valsartan = Rs. 975.00 \n");
	printf("\t05. Nadolal = Rs.6556.00 \n");
	printf("\t06. Digoxin = Rs. 345.00 \n");
	printf("\t07. Metalozone = Rs. 2805.00 \n");
	printf("\t08. Niacin = Rs. 497.90 \n");

	do
	{
	again:
		printf("\n\tEnter Number According to Medicine suggested by your Specialist.(one by one) :- ");
		scanf("%d",&medicine);
		printf("\n");

		switch(medicine)
		{
			case 1:
				printf("\tWarfarin @ Rs. 3030.00 \n");
					fprintf(pat_data,"\t\t0%d. Warfarin.",med_no);
					fprintf(pat_data, "\n");
				med_total=med_total+3030.00;
				printf("\n");
				break;
			case 2:
				printf("\tAspirin @ Rs. 1269.30 \n");
					fprintf(pat_data,"\t\t0%d. Aspirin.",med_no);
					fprintf(pat_data, "\n");
				med_total=med_total+1269.30;
				printf("\n");
				break;
			case 3:
				printf("\tTrandolapril @ Rs. 105.00 \n");
					fprintf(pat_data,"\t\t0%d. Trandolapril.",med_no);
					fprintf(pat_data, "\n");
				med_total=med_total+105.00;
				printf("\n");
				break;
			case 4:
				printf("\tValsartan @ Rs. 975.00 \n");
					fprintf(pat_data,"\t\t0%d. Valsartan.",med_no);
					fprintf(pat_data, "\n");
				med_total=med_total+975.00;
				printf("\n");
				break;
			case 5:
				printf("\tNadolal @ Rs. 6556.00 \n");
					fprintf(pat_data,"\t\t0%d. Nadolal.",med_no);
					fprintf(pat_data, "\n");
				med_total=med_total+6556.00;
				printf("\n");
				break;
			case 6:
				printf("\tDigoxin @ Rs. 345.00 \n");
					fprintf(pat_data,"\t\t0%d. Digoxin.",med_no);
					fprintf(pat_data, "\n");
				med_total=med_total+345.00;
				printf("\n");
				break;
			case 7:
				printf("\tMetalozone @ Rs. 2805.00 \n");
					fprintf(pat_data,"\t\t0%d. Metalozone.",med_no);
					fprintf(pat_data, "\n");
				med_total=med_total+2805.00;
				printf("\n");
				break;
			case 8:
				printf("\tNiacin @ Rs. 497.90 \n");
					fprintf(pat_data,"\t\t0%d. Niacin.",med_no);
					fprintf(pat_data, "\n");
				med_total=med_total+497.90;
				printf("\n");
				break;
			default:
				printf("\t\tWRONG INPUT...!\n");
				goto again;
				break;
		}
			med_no++;
		printf("\tDo you require any other Medicine\'s (Y/N): ");
		scanf("%s",&moremeds);
		printf("\n");
	}while(moremeds=='Y' || moremeds=='y');
}

void medical_store()
{
	header();
  up:
	printf("\tDo you prefer to get Medicine\'s from the MEDICAL-STORE here? (Y/N): ");
	scanf("%s",&shop);
	printf("\tConfirm ");
	gets(store);
	printf("your Choice (Y/N): ");
	gets(store);
	printf("\n");

	if(shop=='Y' || shop=='y')
	{
		printf("\tTaking you to the Medical-Store...\n");
		printf("\n\t");
		system("pause");
		system("cls");

		header_medicalstore();

		printf("\tList of Medicines Required. \n\n");

			fprintf(pat_data,"\t\t\t H) Medical Store ===>");
			fprintf(pat_data, "\n\n");
			fprintf(pat_data,"\tHospital\'s ");
//			fputs(store,pat_data);
			fprintf(pat_data,"Medical-Store: ");
			fputs(store,pat_data);
			fprintf(pat_data,"\n\n");
			fprintf(pat_data,"\tMedicine Suggested: \n");

//		printf("\t\t::ADDITIONAL SERVICES-II::\n\n");
		printf("\t\t::MEDICAL STORE::\n\n");
		printf("\t\t\t:DRUG LIST:\n\n");

	//if....else-if : can ask user to decide if he wants medicines or not.

		switch(sp)
		{
			case 1:
				med_opthalmologist();
				break;
			case 2:
				med_nephrologist();
				break;
			case 3:
				med_neurologist();
				break;
			case 4:
				med_genphysician();
				break;
			case 5:
				med_pediatrician();
				break;
			case 6:
				med_accupuntarist();
				break;
			case 7:
				med_entspecs();
				break;
			case 8:
				med_oncologist();
				break;
			case 9:
				med_gastroenterologist();
				break;
			case 10:
				med_endocrinologist();
				break;
			case 11:
				med_dermatologist();
				break;
			case 12:
				med_gensurgeon();
				break;
			case 13:
				med_naturopathist();
				break;
			case 14:
				med_psychiatrist();
				break;
			case 15:
				med_cardiologist();
				break;
			default:
				printf("\tWRONG INPUT...!\n\n");
				break;
		}

	printf("\n\tMEDICINE-CHARGES = %.2f \n",med_total);
	printf("\tConfirm ");
	gets(conf_med_total);			//not printing, if written directly.
	printf("MEDICINE-CHARGES = Rs. ");
	gets(conf_med_total);
		fprintf(pat_data,"\n\tMEDICINE-CHARGES = Rs. ");
		fputs(conf_med_total,pat_data);
		fprintf(pat_data, "\n\n");
	printf("\n");

	}
	else if(shop=='N' || shop=='n')
	{
		goto fine;
	}
	else
	{
		printf("\t\tWRONG INPUT...!\n\n");
		goto up;
	}

	fine:
		printf("\tUPDATING");
		for(loop=0;loop<=6;loop++)
	    {
	    	fordelay(100000000);
			printf(". ");
		}
		printf("\n\t");
		system("pause");
		system("cls");

}

void bill()
{
	header();
		fprintf(pat_data,"\t\t\t I) Bill ===>");
		fprintf(pat_data, "\n\n");
	printf("\t\t\t***BILL***\n");

		fprintf(pat_data,"\tAmbulance Charges\t\t = Rs. ");
		fputs(conf_amb_chrg,pat_data);
		fprintf(pat_data, "\n");

		fprintf(pat_data,"\tConsulting Charges\t\t = Rs. ");
		fputs(conf_cnslt_chrg,pat_data);
		fprintf(pat_data, "\n");

		fprintf(pat_data,"\tTest Charges\t\t\t = Rs. ");
		fputs(conf_test_total,pat_data);
		fprintf(pat_data, "\n");

		fprintf(pat_data,"\tBed Charges\t\t\t = Rs. 1500.00");
		fprintf(pat_data, "\n");

		fprintf(pat_data,"\tHospital Visiting Charges\t = Rs. 2000.00");
		fprintf(pat_data, "\n");

		fprintf(pat_data,"\tMedicine Charges\t\t = Rs. ");
		fputs(conf_med_total,pat_data);
		fprintf(pat_data, "\n");

	printf("\tTotal = Sub-Total + Consulting Charges + Medicine Charges\n");
	total = (sub_total + cnslt_chrg + med_total);
	printf("\tTOTAL  = %.2f \n",total);
	printf("\tConfirm TOTAL = ");
	gets(conf_total);
		fprintf(pat_data,"\tTOTAL\t\t\t\t = Rs. ");
		fputs(conf_total,pat_data);
		fprintf(pat_data, "\n\n");
	printf("\n");

	if(fc==1)
	{
		conc_total=(50*total)/100;
		printf("\t50%% Government Aid Applied\n");
		fprintf(pat_data,"\t50%% Government Aid Applied\n");
	}
	else if(fc==2)
	{
		conc_total=(25*total)/100;
		printf("\t25%% Government Aid Applied\n");
		fprintf(pat_data,"\t25%% Government Aid Applied\n");
	}
	else if(fc==3)
	{
		conc_total=(10*total)/100;
		printf("\t10%% Government Aid Applied\n");
		fprintf(pat_data,"\t10%% Government Aid Applied\n");
	}
	else if(fc==4)
	{
		conc_total=(00*total)/100;
		printf("\t00%% Government Aid Applied\n");
		fprintf(pat_data,"\t00%% Government Aid Applied\n");
	}

	total=total-conc_total;
	printf("\tTOTAL(after concession) = %.2f \n",total);
	printf("\tConfirm TOTAL(after concession) = ");
	gets(conf_conc_total);
		fprintf(pat_data,"\tTOTAL(after concession) = Rs. ");
		fputs(conf_conc_total,pat_data);
		fprintf(pat_data, "\n\n");
	printf("\n");

	printf("\tGovernment Taxes :- \n");
	printf("\tCgst=2.5%% \n");				//to display %, need to write %% ++or++ printf("%c",'%') ++or++ printf("%s",'%')
	printf("\tSgst=2.5%% \n");
	grand_total = (total) + (total*(2.5+2.5))/100;

		fprintf(pat_data,"\tGovernment Taxes\t\t = 5%% ");
		fprintf(pat_data, "\n\n");

	printf("\tGRAND-TOTAL(incl. of all taxes)  = %.2f \n",grand_total);
	printf("\tConfirm GRAND-TOTAL(incl. of all taxes) = ");
	gets(conf_grand_total);
		fprintf(pat_data,"\tGRAND-TOTAL(incl. of all taxes) = Rs. ");
		fputs(conf_grand_total,pat_data);
		fprintf(pat_data, "\n\n");
	printf("\n");

	printf("\tDISPLAYING");
	for(loop=0;loop<=6;loop++)
    {
    	fordelay(100000000);
		printf(". ");
	}
	printf("\n\n\t");
	system("pause");
	system("cls");


}

void pay_bill()
{
	header_bank();
//	acc_no=fopen(accno,"r");
	acc_no=fopen(strcat(accno,ext_txt),"r");

	printf("\tGRAND-TOTAL(incl. of all taxes)  = %.2f \n\n",grand_total);

//ask user to input the amount to be deposited and show updated amount

	if(acc_no!=NULL)
	{
	again:
		printf("\tTotal Amount in your Account = ");
		while(fgets(buffer,100,acc_no)!=NULL)
		{
			printf("%s",buffer);
		}
		printf("\n");
//	acc_no=fopen(strcat(accno,ext_txt),"w");
		acc_no=fopen(accno,"w");
		printf("\tRe-Enter Total Amount in your Account: ");
		scanf("%f",&principalamount);
		printf("\n\n");
//	printf("\tEnter the Bill Amount: ");
//	scanf("%f",&bill_amount);

//	again:
		if(principalamount > grand_total)
		{
			principalamount = principalamount - grand_total;
	//	principalamount = principalamount - bill_amount;

			printf("\tBalance Amount in your Account = %.2f \n",principalamount);
			printf("\tRe-Enter ");
			gets(updated_pamt);
			printf("Balance Amount = ");
			gets(updated_pamt);
			printf("\n");
				fputs(updated_pamt,acc_no);

/*	printf("Updated Amount = ");
	while(fgets(buffer,100,acc_no)!=NULL)
	{
		printf("%s",buffer);
	}
*/

		}
		else if((principalamount - grand_total) < 0)
		{
			printf("\t\tINSUFFICIENT BALANCE...! \n\n");

			printf("\tDeposit Minimum Amount in your Account:  \n");
			min_amt = (grand_total - principalamount);
			printf("\tMinimum Amount = %.2f\n\n", min_amt);

			deposit();
			goto again;

		}
		else if((grand_total - principalamount) == 0)
		{
			principalamount = principalamount - grand_total;
	//	principalamount = principalamount - bill_amount;

			printf("\tBalance Amount in your Account = %.2f \n",principalamount);
			printf("\tRe-Enter ");
			gets(updated_pamt);
			printf("Balance Amount = ");
			gets(updated_pamt);
			printf("\n");
				fputs(updated_pamt,acc_no);


			printf("\t\tBALANCE IS VERY THIN...! \n\n");

			printf("\tDeposit Rs. 1000 in your Account:  \n");
			min_amt == 1000.00;
			printf("Minimum Amount = %.2f", min_amt);

			deposit();
			goto again;
		}
		else
		{
			printf("\t\tUN-KNOWN ERROR OCCURED...!\n\n\n");
		}
	}
	else
	{
		printf("\tFILE NOT FOUND...!\n");
	}
	printf("\n");
//	fclose(acc_no);



		fclose(acc_no);
}

void report()
{

	header();
//	printf("\t\t\t***PATIENT REPORT***\n\n");
//	printf("\t\t\tPatient ID: %d\n\n",id);

	pat_data=fopen(id,"r");
//	pat_data=fopen(strcat(id,ext_txt),"r");


	if(pat_data!=NULL)
	{
		printf("\tLOADING");
		for(loop=0;loop<=6;loop++)
    	{
    		fordelay(100000000);
			printf(". ");
		}
		printf("\n");
//		system("pause");
		system("cls");
		header();
		contactus();
		printf("\n\n");
		printf("\t\t\t\t*_._* <<< PATIENT REPORT >>> *_._*\n\n");
// print current date and time.
//		pat_data=fopen(id,"r");
		while(fgets(buffer,1000,pat_data)!=NULL)
		{
			printf("%s",buffer);

		}

/*		//storing data as pdf file
//			pat_d=fopen(id,"w");
			pat_d=fopen(strcat(id,ext_pdf),"w");
			if(pat_d != NULL)
			{
				fprintf(pat_d,"%s",buffer);
			}
//			fclose(pat_d);
*/	}
	else
	{
		printf("\tLOADING");
		for(loop=0;loop<=6;loop++)
    	{
    		fordelay(100000000);
			printf(". ");
		}
		printf("\n\n\t");
//		system("pause");
//		system("cls");
		printf("Oopss..! \n\tFile Not Found...!\n\n");
	}

	fprintf(pat_data,"\n\t\t\tSTAY SAFE! EAT HEALTHY! BE HAPPY!\n");

	fclose(pat_data);
	fclose(pat_d);
	fclose(acc_no);

	printf("\n\t\t\tSTAY SAFE! EAT HEALTHY! BE HAPPY!\n");

}

void main()
{
	hospital_mngmt();
}

