#include <stdio.h>
struct Customer 
{
    int account_no;
    char name[50];
    float balance;
};
void print_low_balance_customers(struct Customer customers[], int n);
int main() 
{
    struct Customer customers[3];
    int i;
    for (i = 0; i < 3; i++) 
	{
        printf("Enter details of customer %d:\n", i + 1);
        printf("Account no.: ");
        scanf("%d", &customers[i].account_no);
        printf("Name: ");
        scanf("%s", customers[i].name);
        printf("Balance: ");
        scanf("%f", &customers[i].balance);
    }
    printf("\nDetails of customers with balance less than 100 Rs:\n");
    print_low_balance_customers(customers, 3);
    return 0;
}
void print_low_balance_customers(struct Customer customers[], int n)
{
    int i;
    for (i = 0; i < n; i++) 
	{
        if (customers[i].balance < 100) 
		{
            printf("Account no.: %d, Name: %s\n", customers[i].account_no, customers[i].name);
            //getch();
        }
    }
}
