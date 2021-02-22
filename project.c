/* Banking Transaction Application using C
for MANDELA BANKING CONSOLE SYSTEM
    writing by Mandela Thomas
    on 2/21/2021*/



#include<stdio.h>
#include<conio.h>
int main()
{

//Declaring of data types to a various  variables and their values
float draw,dep,transfer;
char accountname[24];
float accountbalance=5000;
int account,account1,account2;
int accounttype;
int transaction=1;
//Displaying of bank name and a welcome note to user//

printf("\n\t\t\t\MANDELA CONSOLE BANKING SYSTEM\n\n");
printf("\t\t\4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4\n");
printf("\t\t\4\t\t\t\t\t\t\4\n");
printf("\t\t\4\t\t\t\t\t\t\4\n");
printf("\t\t\4\ WELCOME TO MANDELA CONSOLE BANKING SYSTEM\t\t\t\t\t\t\t\4\n");
printf("\t\t\4\t\t\t\t\t\t\4\n");
printf("\t\t\4\t\t\t\t\t\t\4\n");
printf("\t\t\4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4\n");
//requesting user account information for verification//
printf("Enter your Account Name: ");
scanf("%s",&accountname);
printf("\nplease enter your account no.: ");
scanf("%d",&accounttype);
//using a loop to determine the transactions in selecting listed number assigned to various names//

while(transaction == 1)
{
int option;
printf("\nchoose what you want to do\n");
printf("1 - Balance Enquiry\n");
printf("2 - Deposit\n");
printf("3 - Withdraw\n");
printf("4 - transfer\n");
//user transaction input//
scanf("%d",&option);

//using the loop and condition to determine the activities whether to check balance, add money or withdrawal from account//
switch(option)
{
case 1:
printf("\t\t\t*BALANCE ENQUIRY*\n\n");
printf("your current balance is: %.2usd\n",accountbalance);
break;
case 2:
printf("\n\t\t\t*DEPOSIT AMMOUNT*\n\n");
printf("how much money do you want to deposit:");
scanf("%f",&dep);
if(dep > 0 && dep<=20000)
{
printf("\n your %.2usd deposited in your account.\n\n",dep);
accountbalance+=dep;
}

else if(dep>20000)
{
printf("\n you can not deposit that much amount in one time.\n\n");
}
else
{
printf("\n invalid deposit amount\n");//denying user from add money money more than 2,0000 at one time//
}
break;
case 3:
printf("\n\t\t*WITHDRAW AMMOUNT*\n\n");

//asking user for amount to be taking with condition to tell how much was taken//
printf("how much money do you want to withdraw:");
scanf("%f",&draw);
if(draw<=accountbalance && draw<=20000)
{
printf("\n you just withdraw %.2usd\n\n",draw);
accountbalance-=draw;
}

//denying user from withdrawing the amount of 20000 at one moment//
else if(draw>20000)
{
printf("\n you cannot withdraw that much amount in one time.\n\n");
}
else
{
    //denying user due to low amount in account//
printf("\n you don not have enough money\n\n");
}
break;
case 4:
printf("\t\t\tTRANSFER AMMOUNT \n\n");
//user input on how much should be transfer b/w accounts//
printf("\n\t\tAccount You Want To Transfer: ");
scanf("%d",&account2);
printf("\n How much amount?: ");
scanf("%f",&transfer);
//setting conditions to determine the qualification of the transfer based on account standing//
if(accountbalance>=transfer)
{
printf("\n your %.2usd successfully transfered\n\n",transfer);
accountbalance-=transfer;
}
else
{printf("\n you do not have sufficient balance\n\n");}
break;
default:
printf("invalid transaction\n");
}
transaction=0;
while(transaction!=1 && transaction!=2)
{
printf("do you want to do another transaction?\n");
printf("1. yes 2. no\n");
scanf("%d",&transaction);
if(transaction!=1 && transaction!=2)
{printf("invalid no.\n choose between 1 and 2 only\n");}}}
//Giving transaction time and date
printf("\n\t\t\t    -----------------------");
printf("\n\t\t\t\MCBS BANK LIMITED\n");
printf("\t\t\t    -----------------------\n\n");
printf("\t\t\tDate:2/21/2021\t   Time:10:20 Am\n");
//input for user name in account//
printf("\n\t\t\t\4 Your name: %s\n\n",accountname);
printf("\t\t\t\4 Your account no: %d\n\n",accounttype);
if(dep >= 0 && dep < 20000)
{
printf("\t\t\t\4 You have deposited %.2usd\n",dep);
}
else
{printf("\t\t\t\4 You have deposited 0usd\n");}
if(draw>0 && draw<=20000 && draw<=accountbalance)
{
printf("\t\t\t\4 You have withdraw %.2usd\n",draw);
}
else
{printf("\t\t\t\4 You have withdraw 0usd\n");}
if(transfer>0 && transfer<=20000 && transfer<=accountbalance)
{
printf("\t\t\t\4 You have Transfered %.2usd\n",transfer);}
else
{printf("You have Transfered 0usd\n ");}
printf("\n\t\t\t\t Thank you! \n");
printf("\t\t\t Welcome to Mandela Console Banking System\n");
printf("\t\t\t www.Mandelaconsolebankingsystem.com\n");
getch();
return(0);
}
