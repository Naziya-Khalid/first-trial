int acc=0,j,sum,item;

struct account
{ char name[30];
  char address[40];
  int pin[8];
  int mobno[10];
}b1;

int COD()
{ 
    char name[20],address[30];
    int mob[10],pin[6];
 
    printf("\n\t\t------------------");
    printf("\n\t\t------------------");
    printf("\n\t\t Cash On Delivery");
    if(acc==1)
    { account(); }
    else
    {
        create();
    }
xyz:printf("\n\n\t\t\t Delivery Charges is Rs. 60");
    printf("\n\tTotal Amount to pay %d + 60 = Rs.%d",sum,sum+60);
    sum+=60;
    printf("\n\nEnter 1 to Proceed\n 2 to Edit Imformation \t 3. BACK\t");
    scanf("%d",&j);
    if(j==2)
    {
        create();
        goto xyz;
    }
    if(j==1)
    { 
        printf("\n\n\n\n\n\n\n\n\t\t\t* * * * * * * * * * * * * * *");
        printf("\n\n\t\t\t   Thank You for purchasing");
        printf("\n\t\tProduct will be shipping soon");
        printf("\n\n\tEnter 1.to Exit\t9. To go back");
        scanf("%d",&j);
        if(j==1)
        {
            g_b();
            getch();
            exit(1);
        }
        stk();
    }
    return j;
}

int debit()
{ 
    char number[10],MM[5],YY[4],cvv[6];
    printf("\n-------------------------------------------------------");
    printf("\nEnter Details:");
    printf("\n\n\tCard Number\t");
    scanf("%s",number);
    printf("\n\tExpiry\n\tMM  ");  
    scanf("%s",MM); 
    printf("\tYY  "); 
    scanf("%s",YY);
    printf("\tCVV  ");
    scanf("%s",cvv);
    printf("\n\t\t Delivery Charges is Rs. 60");
    printf("\nTotal Amount to pay %d + 60",sum);
    sum+=60;
    printf("\n\t\t______________");
    printf("\n\t\tPAY %d",sum);
    printf("\n\t\t______________");
    printf("Enter 1 to pay\n\n3 TO GO BACK\n\tCHOICE :");
    scanf("%d",&j);
    if(j==1)
    {
        stk();
        printf("\n\n\n\n\n\n\n\n\t\t\t* * * * * * * * * * * * * * *");
        printf("\n\n\t\tAmount paid successfully");
        printf("\n\t\t\t   Thank You for purchasing");
        printf("\n\t\tProduct will be shipping soon");
        printf("\n\n\tEnter 1.to Exit \t9. To Main Page");
        scanf("%d",&j);
        if(j==1)
        {
            g_b();
            exit(1);
        }
    }
    return j;
}

void account()
{
    printf("\n\n\n\t\t Name      :%s",b1.name);
    printf("\n\n\t\t Address   :%s",b1.address);
    printf("\n\t\t Pin Code  :%s",b1.pin);
    printf("\n\n\t\t Mobile Number :%s\n\n",b1.mobno);
}
void create()
{
    printf("\n\n\tEnter Your Name:");
    scanf("%s",b1.name);
    printf("\n\tEnter Your Address:");
    scanf("%s",b1.address);
    printf("\n\t\tPin Code:");
    scanf("%s",b1.pin);
    printf("\n\tEnter Mobile Number:");
    scanf("%s",b1.mobno);
    acc=1;
}