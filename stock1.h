int flag,flag1,flag2,flag3,flag4,flag5,flag6,flag7,k;
int sum,itm;
void stk();
int s1=0,s2=0,s3=0,s4=0,s5=0,s6=0,s7=0,s8=0;
int st1=6,st2=9,st3=5,st4=7,st5=9,st6=8,st7=5,st8=10;

void stock()
{ 
    int k,y;
    do
    {
        printf("\n\t\t\t WELCOME YOUR CART ITEMS ARE");
        printf("\n......................................................");
        printf("\n\tcode\tITEMS LIST\t\tSTOCK");
        printf("\n......................................................");
        printf("\n\t1.\t%s\t\t\t%d",crt[0],st1);
        printf("\n\t2.\t%s\t\t%d",crt[1],st2);
        printf("\n\t3.\t%s\t\t\t%d",crt[2],st3);
        printf("\n\t4.\t%s\t\t\t%d",crt[3],st4);
        printf("\n\t5.\t%s\t\t\t%d",crt[4],st5);
        printf("\n\t6.\t%s\t\t%d",crt[5],st6);
        printf("\n\t7.\t%s\t\t\t%d",crt[6],st7);
        printf("\n\t8.\t%s\t\t%d",crt[7],st8);
        printf("\n\n1.To Fill The Stock\n2.Exit\t\t\t\n");
        scanf("%d",&k);
        if(k==1)
        { 
            printf("\nEnter List Code :");
            scanf("%d",&y);
            switch(y)
            {
                case 1: st1=6; sto1=6;
	                break;   
                case 2: st2=9;  sto2=9;
	                break;
                case 3: st3=5; sto3=5;
	                break;
                case 4: st4=7; sto4=7;
	                break;
                case 5: st5=9;  sto5=9;
	                break;
                case 6: st6=8;  sto6=8;
	                break;
                case 7: st7=5;  sto7=5;
	                break;
                case 8: st8=10;  sto8=10;
	                break;
            }
        }
    }while(k!=2);
}

void stk()
{  
    sum=0;itm=0;
    st1=st1-flag;
    st2=st2-flag1;
    st3=st3-flag2;
    st4=st4-flag3;
    st5=st5-flag4;
    st6=st6-flag5;
    st7=st7-flag6;
    st8=st8-flag7;
}
