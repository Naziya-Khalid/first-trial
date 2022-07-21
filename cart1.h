int flag,flag1,flag2,flag3,flag4,flag5,flag6,flag7;
int sum,itm;
char crt[9][20]={"TITAN","FASTRACK","MI NOTE","NOKIA","SAMSUNG","MEMORY CARD","MOUSE","PENDRIVE"};
void display_crt();
void delete_crt();
int sto1=6,sto2=9,sto3=5,sto4=7,sto5=9,sto6=8,sto7=5,sto8=10;

void display_crt()
{ 
    int a[2]={999,1299},b[3]={10999,9899,12999},c[3]={299,499,549},x;  //price
    if(sum!=0)
    {
        printf("\n\t----------------------------------------------------");
        printf("\n\t\tITEMS\t\tPRICE\t\tQUANTITY ");
        printf("\n\t-----------------------------------------------------");
        if(flag!=0)
            printf("\n\n1.\t\t%s\t\t%d\t\t%d",crt[0],a[0],flag);
        if(flag1!=0)
            printf("\n\n2.\t\t%s\t%d\t\t\t%d",crt[1],a[1],flag1);
        if(flag2!=0)
            printf("\n\n3.\t\t%s\t\t%d\t\t%d",crt[2],b[0],flag2);
        if(flag3!=0)
            printf("\n\n4.\t\t%s\t\t%d\t\t%d",crt[3],b[1],flag3);
        if(flag4!=0)
            printf("\n\n5.\t\t%s\t\t%d\t\t%d",crt[4],b[2],flag4);
        if(flag5!=0)
            printf("\n\n6.\t\t%s\t\t%d\t\t%d",crt[5],c[0],flag5);
        if(flag6!=0)
            printf("\n\n7.\t\t%s\t\t%d\t\t%d",crt[6],c[1],flag6);
        if(flag7!=0)
            printf("\n\n8.\t\t%s\t\t%d\t\t%d",crt[7],c[2],flag7);
        
        printf("\nPrice Details :");
        printf("\nPrice(%d itms)\t\tRs. %d",itm,sum);
        printf("\tDelivery Charge  Rs. 60");
        printf("\nAmount Payable\t\t Rs. %d",sum+60);
        printf("\n\n\n\n\tPRESS 1 To delete Items\n\n");
        printf("\n\nENTER 9 TO CONTINUE SHOPPING...");
    }
    else
    { 
        printf("\n\n\n\t\t\t\n\n\n\t\n\n\n\t\t\tYour Cart is Empty");
        printf("\n\n\t\t\t\tEnter 9 to add itms in Cart");
        printf("\n\n\t\t\t.......* * * * *........\n\t\t");
    }
}
void delete_crt()
{ 
    int y;
    printf("\n\tEnter Code ::(1/2/3/4/5/6/7/8)") ;
    scanf("%d",&y);
    if(y==1)
    {
        sum=sum-999*flag;
        itm=itm-flag;
        sto1=sto1-flag;flag=0; 
    }
    if(y==2)
    { 
        sum=sum-1299*flag1;
        itm=itm-flag1;
        sto2=sto2-flag1;flag1=0;
    }
    if(y==3)
    {
        sum=sum-10999*flag2;
        itm=itm-flag2;
        sto3=sto3-flag2;flag2=0;
    }
    if(y==4)
    {
        sum=sum-9899*flag3;
        itm=itm-flag3;
        sto4=sto4-flag3;flag3=0;
    }
    if(y==5)
    {
        sum=sum-12999*flag4;
        itm=itm-flag4;
        sto5=sto5-flag4;flag4=0; 
    }
    if(y==6)
    {
        sum=sum-299*flag5;
        itm=itm-flag5;
        sto6=sto6-flag5;flag5=0; 
    }
    if(y==7)
    {
        sum=sum-299*flag6;
        itm=itm-flag6;
        sto7=sto7-flag6;flag6=0; 
    }
    if(y==8)
    {
        sum=sum-299*flag5;
        itm=itm-flag7;
        sto7=sto8-flag7;flag7=0; 
    }
 display_crt();
}