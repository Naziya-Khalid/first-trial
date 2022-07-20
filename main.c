// PROGRAM IN C LANGUAGE FOR ONLINE SHOPPING MART

/*Header Files*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#include "welcome.h"
#include "list.h"
#include "cart1.h"
#include "stock1.h"
#include "payment1.h"

int sum,itm,z,x;  //j for 2nd switch case & counter
int q;

int main()
{
    int i,j=0,pr,k,pass;         //i for 1st switch case & counter
    int a[3]={0,999,1299,},b[4]={0,10999,9899,12999},c[4]={0,299,499,549};
    char name[20],address[40],mob[10],pin[10];
    sum=0;itm=0;
    printf("\033[0;33m]");
    welcome();
    
    while(i!=7)
    {   
        getch();
        system("clear");
        printf("\033[0;36m]");
        display_enter(sum,itm);

        scanf("%d",&i);
        getch();
        system("clear");
        printf("\033[0;32m]");
        switch(i)
        { 
            case 1: //printf("\033[0;32m]");
                    printf("\n\t  ____________________________________________________________________");
                    printf("\n\n\t\t ITEMS CATEGORY                                 ");
                    printf("\n\n\t\t\t\t\t\t\t.......CART [%d]",itm);
                    printf("\n\t1.TITAN ");
                    printf("\n\t\t\tSpecifiactions: \n\t\t\tPrice: Rs. 999");
                    printf("\n\t\t\tBand colour: Silver\n\t\t\tBand Material type: Leather");
                    printf("\n\t\t\tDial color: Brown\n\t\t\tDisplay Type: Analog");
                    printf("\n\t\t\t\t\tstock %d\n",st1);
                    
                    printf("\n\t2.FASTRACK ");
                    printf("\n\t\t\tSpecifiactions: \n\t\t\tPrice: Rs. 1299");
                    printf("\n\t\t\tBand colour: Silver\n\t\t\tBand Material type: Chain");
                    printf("\n\t\t\tDial color: Blue\n\t\t\tDisplay Type: Analog");
                    printf("\n\t\t\t\t\tstock %d\n",st2);
                    printf("\n____________________________________________________ ENTER 9 TO GO BACK");
                    do
                    {
                        printf("\n\nEnter your choice:(1.TITAN\t2.FASTRACK\t9.Main Menu)");
                        scanf("%d",&j);
		                switch(j)
		                { 
                            case 1: if(st1>0)
			                        { 
                                        printf("\nEnter quantity ::");
			                            scanf("%d",&q);
			                            if(q< sto1 && sto1>0)
			                            {
                                            pr=q*a[j];flag+=q;
			                                s1=s1+q; sto1=sto1-q;
			                            }
			                            else
			                            {
                                            printf("\n\tOnly %d Itms Are Available In Stock",sto1);
			                                q=0;
			                            }
			                        }
			                        else
			                        {
                                        printf("\n\t\tProduct Is Out Of Stock");
			                        }
			                    break;
		                    case 2: if(st2>0)
			                        {
                                        printf("\nEnter quantity ::");
			                            scanf("%d",&q);
			                            if(q<sto2 && sto2>0)
			                            {
                                            pr=q*a[j];flag1+=q;
			                                s2=s2+q; sto2=sto2-q;
                                        }
			                            else
			                            {
                                            printf("\n\tOnly %d Itms Are Available In Stock",sto2);
			                                q=0;
                                        }
			                        }
			                        else
			                        {
                                        printf("\n\t\tPRODUCT IS OUT OF STOCK");
			                        }
			                    break;
		                    case 9: pr=0;
			                        q=0;
		                    default: printf("\nERROR " ); pr=0;q=0;
                        }
		                sum=sum+pr;
		                itm=itm+q;
		            } while(j!=9);
		            break;       //1st case end
	        case 2: //printf("\033[0;32m]");
	                printf("\n\t  ____________________________________________________________________");
                    printf("\n\n\t\t ITEMS CATEGORY                                 ");
                    printf("\n\n\t\t\t\t\t\t\t.......CART [%d]",itm);
                    
                    printf("\n\t1. MI NOTE 3"); 
                    printf("\n\t\t\tSpecifiactions: \n\t\t\tPrice: Rs. 10,999");
                    printf("\n\t\t\tRAM: 3GB\tInbuilt storage: 32GB\n\t\t\tScreen size: 6.3 inches");
                    printf("\n\t\t\tOperating System: MIUI 12.5");
                    printf("\n\t\t\t\t\tstock %d\n",st3);
                    
                    printf("\n\t2. NOKIA 3 ");
                    printf("\n\n\t\t\tSpecifiactions: \n\t\t\tPrice: Rs. 9,899");
                    printf("\n\t\t\tRAM: 3GB\n\t\t\tInbuilt storage: 32GB");
                    printf("\n\t\t\tScreen size: 6.3 inches\n\t\t\tOperating System: Android");
                    printf("\n\t\t\t\t\tstock %d\n",st4); 
                    
                    printf("\n\t3. SAMSUNG ");
                    printf("\n\t\t\tSpecifiactions: \n\t\t\tPrice: Rs. 12,999");
                    printf("\n\t\t\tRAM: 4GB\n\t\t\tInbuilt storage: 64GB");
                    printf("\n\t\t\tScreen size: 6.5 inches\n\t\t\tOperating System: Android 11");
                    printf("\n\t\t\t\t\tstock %d\n",st5);                   
                    printf("\n______________________________________________________ ENTER 9 TO GO BACK");
		            do
		            {
		                printf("\n\nEnter your choice :(1.MI NOTE 3 \t2.NOKIA 3 \t3.SAMSUNG\t9.Main Menu)");
		                scanf("%d",&j);
		                switch(j)
		                { 
                            case 1: if(st3>0)
			                        { 
                                        printf("\nEnter quantity ::");
			                            scanf("%d",&q);
			                            if(q<sto3 && sto3>0)
			                            {
                                            pr=q*b[j];flag2+=q;
			                                sto3=sto3-q;
			                            }
			                            else
			                            {
                                            printf("\n\tOnly %d Itms Are Available In Stock",sto3);
			                                q=0;
			                            }
			                        }
			                        else
			                        {
                                        printf("\n\t\tProduct Is Out Of Stock");
			                        }
			                    break;
		                    case 2: if(st4>0)
			                        { 
                                        printf("\nEnter quantity ::");
			                            scanf("%d",&q);
			                            if(q<sto4 && sto4>0)
			                            {
                                            pr=q*b[j];flag3+=q;
			                                sto4=sto4-q;
			                            }
			                            else
			                            {   
                                            printf("\n\tOnly %d Itms Are Available In Stock",sto4);
			                                q=0;
			                            }
			                        }
			                        else
			                        {
                                        printf("\n\t\tProduct Is Out Of Stock");
			                        }
			                    break;
							case 3: if(st5>0)
			                        { 
                                        printf("\nEnter quantity ::");
			                            scanf("%d",&q);
			                            if(q<sto5 && sto5>0)
			                            {
                                            pr=q*b[j];flag4+=q;
			                                sto5=sto5-q;
			                            }
			                            else
			                            {
                                            printf("\n\tOnly %d Itms Are Available In Stock",sto5);
			                                q=0;
			                            }
			                        }
			                        else
			                        {
                                        printf("\n\t\tProduct Is Out Of Stock");
			                        }
			                    break;
		                    case 9: pr=0;
			                        q=0;
			                    break;
		                    default:printf("\n" );pr=0;q=0;
		                }     //2 switch case end
		                sum=sum+pr;
		                itm=itm+q;

                    }while(j!=9);  
		        break;
            case 3: printf("\n\t  ____________________________________________________________________");
                    printf("\n\n\t\t ITEMS CATEGORY                                 ");
                    printf("\n\n\t\t\t\t\t\t\t.......CART [%d]",itm);
                    
                    printf("\n\t1.Memory card");
                    printf("\n\t\t\tSpecifiactions: \n\t\tPrice: Rs. 299\n\t\t\tBrand: Sandisk\n\t\t\tStorage: 16GB");
                    printf("\n\t\t\tFlash Memory Type: Micro SDHC\n\t\t\tHardware interface: MicroSD");
                    printf("\n\t\t\tDial color: Brown\n\t\t\tDisplay Type: Analog");
                    printf("\n\t\t\t\t\tstock %d\n",st6); 
                    
                    printf("\n\t2.Mouse ");
                    printf("\n\t\t\tSpecifiactions: \n\t\t\tPrice: Rs. 499");
                    printf("\n\t\t\tconnectivity technology: Wireless\n\t\t\tBrand: Logitech");
                    printf("\n\t\t\tCompatible Devices: Laptop\n\t\t\tColour: Black");
                    printf("\n\t\t\t\t\tstock %d\n",st7); 
                    
                    printf("\n\t3.Pendrive ");
                    printf("\n\t\t\tSpecifiactions: \n\t\t\tPrice: Rs. 549");
                    printf("\n\t\t\tColour: Black\n\t\t\tBrand: SanDisk\n\t\t\tStorage: 16GB");
                    printf("\n\t\t\tHardware interface: USB 3.0");
                    printf("\n\t\t\tRead Speed: 100 Mega Bytes Per Second");
                    printf("\n\t\t\t\t\tstock %d\n",st8);
                    printf("\n____________________________________________________ ENTER 9 TO GO BACK");
                    do
                    {
	                    printf("\n\nEnter your choice:(1.Memory card \t2.Mouse \t3.Pendrive\t9.Main Menu)");
		                scanf("%d",&j);
		                switch(j)
		                { 
                            case 1: if(st6>0)
			                        { 
                                        printf("\nEnter quantity ::");
			                            scanf("%d",&q);
			                            if(q< sto6 && sto6>0)
			                            {
                                            pr=q*c[j];flag5+=q;
			                                s6=s6+q; sto6=sto6-q;
			                            }
			                            else
			                            {
                                            printf("\n\tOnly %d Itms Are Available In Stock",sto6);
			                                q=0;
			                            }
			                        }
			                        else
			                        {
                                        printf("\n\t\tProduct Is Out Of Stock");
			                        }
			                    break;
		                    case 2: if(st7>0)
			                        {
                                        printf("\nEnter quantity ::");
			                            scanf("%d",&q);
			                            if(q<sto7 && sto7>0)
			                            {
                                            pr=q*c[j];flag6+=q;
			                                s7=s7+q; sto7=sto7-q;
                                        }
			                            else
			                            {
                                            printf("\n\tOnly %d Itms Are Available In Stock",sto7);
			                                q=0;
                                        }
			                        }
			                        else
			                        {
                                        printf("\n\t\tPRODUCT IS OUT OF STOCK");
			                        }
			                    break;
							case 3: if(st8>0)
			                        {
                                        printf("\nEnter quantity ::");
			                            scanf("%d",&q);
			                            if(q<sto8 && sto8>0)
			                            {
                                            pr=q*c[j];flag7+=q;
			                                s8=s8+q; sto8=sto8-q;
                                        }
			                            else
			                            {
                                            printf("\n\tOnly %d Itms Are Available In Stock",sto8);
			                                q=0;
                                        }
			                        }
			                        else
			                        {
                                        printf("\n\t\tPRODUCT IS OUT OF STOCK");
			                        }
			                    break;

		                    case 9: pr=0;
			                        q=0;
		                    default: printf("\nERROR " ); pr=0;q=0;
		                }
		                sum=sum+pr;
		                itm=itm+q;
		            }while(j!=9);
		            break;       //3rd case end
            case 4: printf("\033[0;34m]");
                    do
	                {  
                        display_crt();
		                scanf("%d",&x);
		                if(x==1)
	                    {
                            delete_crt();
                        }
	                } while(x!=9);
		        break;
       case 5:  printf("\033[0;31m]");
                do
		        {
		            if(sum==0)
		            {
                        printf("\n\n\n\t\t\t\n\n\n\t\n\n\n\t\t\tYour Cart is Empty");
		                printf("\n\n\t\t\t\tEnter 9 to add itms in Cart");
		                printf("\n\n\t\t\t.......* * * * *........\n\t\t");
		                scanf("%d",&j);
                    }
		            else
		            {
                        
                        printf("\nDo you want to place order ");
		                printf("\n\n\t\t1. for Online Payment\n\t\t2. for C O D");
		                printf("\n\nENTER 9 TO GO BACK");
		                printf("\n\nEnter Your Choice:");
		                scanf("%d",&j);
		                switch(j)
		                { 
                            case 1: printf("\n\n\t\t Debit Card/CreditCard/ATM Card");
		                  	        debit();
		                  	        break;
		                    case 2: printf("\n\n\t\t1. Cash On Dilevary");
		                  	        COD();
		                  	        break;
		                  	case 9: break;
		                }          /*2nd switch ends*/  
		            }      //condition end
		        } while(j!=9);
		        break;
       case 6:  printf("\033[0;35m]");
                printf("Enter Any Key To Go Back");
		        printf("\n\n\n\n\n\n\n\t\t\t____________________________");
		        printf("\n\n\t\t\t 1.  Admin Account\n\n\t\t\t 2.  My Account");
		        printf("\n\t\t\t____________________________");
		        printf("\n\nChoice : ");
		        scanf("%d",&j);
		        switch(j)
		        {
                    case 1: printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\tONLY ADMIN CAN ACCESS THIS FUNCTION");
		                    printf("\n\n\t\t\t   - - - * * * * * * * * * - - -");
		        	        printf("\n\n\nEnter password:");
		        	        scanf("%d",&pass);
		        	        if(pass==12345)
		        	        { 
		        	            stock();
		        	        }
		        	    break;
		            case 2: if(acc==1)
		                    { 
                                printf("\n\n\t\tMY ACCOUNT");
		            	        printf("\n\t  -----------------");
		            	        account();
                            }
		                    if(acc!=1)
		            	    { 
                                printf("\n\t\t\tCREATE ACCOUNT");
		            	        printf("\n\n\n\tFIll YOUR IMFORMATION ::");
		            	        create(); 
                            }
		                    printf("\n\n\n\t\t 1. To Edit Imformation ");
		                    printf("\n\n\t press 9 to go back to main menu");
		                    scanf("%d",&k);
		                    if(k==9)
		                        break;
		                    if(k==1)
		                        create();
		                    printf("\n press 9 to go back to main menu");
		                    scanf("%d",&z);
		                break;
	                }
	            break;
		        
       case 7:  g_b();
	            break;
      default :  printf("\n\n\t\t\tINVALID INPUT");
  }
}
return(0);
}

