//Program for buying stock and invest in mutual funds

#include<stdio.h>
#include<conio.h>

void introdispaly()



{
  printf("                    ************************************************************************************\n");
  printf("                    *                                       WELCOME                                    *\n");
  printf("                    *                                GAK STOCK BROKERAGE                               *\n");
  printf("                    ************************************************************************************\n");

}

void displayline1()


{
    int i;
    for(i=1;i<115;i++)
    {
        printf("=");
    }printf("\n");
}

void displayline2()


{
    int i;
    for(i=1;i<115;i++)
    {
        printf("*");
    }printf("\n");
}

int main(void)
{

    int option,entry,response,r,p=0,BILL,stockbuying,s,grandtotal,fundinvesting,here,fundreinvesting2,fundreinvesting1,billingsection,end,payment,pin,i,start,billing;
    float amount,total,fundtotal;
    char name[40];
    char number[10];
    float bill=0,z,b=0,a=0,red=0,blue=0,TOTAL;



	{
	introdispaly();
	printf("Enter Your Name           :");
    scanf("%[a-z A-Z]",&name[i]);
    printf("Enter Your Phone Number   :");
    scanf("%sec",&number[i]);
           displayline1();
           displayline1();
           {
		   start:

	            printf("How can we help you?\n 1) STOCK BUYING\n 2) MUTUAL FUND INVESTMENT\n");
	            scanf("%d",&option);
	            displayline1();
                displayline1();


                 switch (option)
                        {
                            case 1:
                          	printf("                    *******************************************************\n");
                            printf("                    *            Welcome to STOCK BUYING                  *\n");
                            printf("                    *******************************************************\n");

                            goto stockbuying;
                            break;
                            case 2:
                          	printf("                    *******************************************************\n");
                           	printf("                    *        Welcome to MUTUAL FUND INVESTMENT            *\n");
                           	printf("                    *******************************************************\n");

                        	goto fundinvesting;
						    break;

                        }
            }


        }


stockbuying:

    menu :
             printf("Make your selection from listed companies\n");
	printf("\nStock selling Companies are\n1)ITC                  \t - 220 /- Rs\n2)SBI                 \t - 460 /- Rs\n3)RELIANCE INDUSTRIES\t - 2400/- Rs\n4)TATA MOTORS        \t - 480 /- Rs\n5)ONGC               \t - 140 /- Rs\n6)ADANI ENTERPRISES  \t - 1750/- Rs\n7)TECH MAHINDRA      \t - 1800/- Rs\n8)AVENUE SUPERMARKETS\t - 450 /- Rs\n9)WIPRO              \t - 700 /- Rs\n10)HDFC BANK          \t - 1450/- Rs\n");
        printf("\nSelect 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 ---> \n");
        scanf("%d", &response);

        if (response>0 && response<11)
        {
            printf("\nYour are selected %d number company to buy the stocks\n", response);
            scanf("%d", &s);
                switch (response)
            {
                case 1:
                printf("\nYou have ordered %d stocks of ITC \n", s);
                p=p+(s*220);
                printf("\nYou have choosen stocks of amount %d/-\n", p);
                displayline2();
                break;
                case 2:
                printf("\nYou have ordered %d stocks of SBI \n", s);
                p=p+(s*460);
                printf("You have choosen stocks of amount %d/-\n", p);
                displayline2();
                break;
                case 3:
                printf("You have ordered %d stocks of RELIANCE INDUSTRIES \n", s);
                p=p+(s*2400);
                printf("You have choosen stocks of amount %d/-\n", p);
				displayline2();
                break;
                case 4:
                printf("You have ordered %d stocks of TATA MOTORS \n", s);
                p=p+(s*480);
                printf("You have choosen stocks of amount %d/-\n", p);
                displayline2();
                break;
                case 5:
                printf("You have ordered %d stocks of ONGC \n", s);
                p=p+(s*140);
                printf("You have choosen stocks of amount %d/-\n", p);
                displayline2();
                break;
                case 6:
                printf("You have ordered %d stocks of ADANI ENTERPRISES \n", s);
                p=p+(s * 1750);
                printf("You have choosen stocks of amount %d/-\n", p);
                displayline2();
                break;
                case 7:
                printf("You have ordered %d stocks of TECH MAHINDRA \n", s);
                p=p+(s * 1800);
                printf("You have choosen stocks of amount %d/-\n", p);
                displayline2();
                break;
                case 8:
                printf("You have ordered %d stocks of AVENUE SUPERMARKETS \n", s);
                p=p+(s * 450);
                printf("You have choosen stocks of amount %d/-\n", p);
                displayline2();
                break;
                case 9:
                printf("You have ordered %d stocks of WIPRO \n", s);
                p=p+(s * 700);
                printf("You have choosen stocks of amount %d/-\n", p);
                displayline2();
                break;
                case 10:
                printf("You have ordered %d stocks of HDFC BANK \n", s);
                p=p+(s * 1450);
                printf("You have choosen stocks of amount %d/-\n", p);
                displayline2();
                break;
            }
        }
        else
         {
	       printf("invalid option\n");
		 }

			printf("\nIf you want to buy some more stocks \t----> Enter '0'");
			printf("\nIf you are done with these          \t----> Enter other than '0'\n ");
			scanf("%d",&entry);

			if(entry==0)

           	   goto menu;

		    if(entry!=0)

		   grandtotal:
		   	displayline2();
		     	printf("\n\nYou have selected stocks of amount %d /- \n\n\n",p);


		     	z=p+p*0.05;
     	        printf("                    ************************************************************************\n");
                printf("                    *                        THE STOCK BILL IS %f                *\n",z);
                printf("                    ************************************************************************\n");
               	printf("                    -------------------------------------------------------------------------------\n");
		    	printf("                    |   !!! GENTLE REMAINDER : (This bill includes tax applied by the government  |\n");
		    	printf("                    -------------------------------------------------------------------------------\n\n");
		   displayline2();



	 	  printf("Do you want to invest in Mutual funds? \n 1)Yes \n 2) No \n");
		   scanf("%d",&response);
		   {

		   if (response==1)
		   {

	 	      fundinvesting:

		      	printf("\nEnter \n '1' to invest in Blue chip fundings  \n '2' to invest in capital fundings \n '3' to exit--->\n");
		     	scanf("%d",&entry);
		    	{
		   		if(entry!=1&&entry!=2&&entry!=3)
 		        	{
 		  			printf("\nInvalid option *please try again*\n");
                        	goto fundinvesting;
			        }
		           if (entry==1)
		           fundreinvesting1:
		            {
		                        displayline1();
		   	                	printf("NOTE:- (MINIMUM AMOUNT TO INVEST IN BLUECHIP FUNDINGS IS 5000/-)\n");
		   	                	displayline1();
		   		                printf("Enter the amount you want to invest:-");
		   		                scanf("%d",&p);
				          {
		   		       if(p>=5000)
		   		        {

		   			        printf("\n\nThank you for investing in BLUECHIP FUNDINGS \n\n");

		   			       	fundtotal1:

				displayline2();
				printf("\n\nTHE AMOUNT YOU INVESTED IN BLUECHIP FUNDS IS %d\n\n\n",p);
				red=red+p+p*0.01;
		     	printf("                    *******************************************************************************\n");
                printf("                    *                        THE BLUECHIP FUNDING BILL IS %f            *\n",red);
                printf("                    *******************************************************************************\n");
                printf("                    -------------------------------------------------------------------------------\n");
		    	printf("                    |  !!! GENTLE REMAINDER : (This bill includes tax applied by the government)  |\n");
		    	printf("                    -------------------------------------------------------------------------------\n");
		    	displayline2();
                goto here;
				        }
				       if(p<=5000);
				        {
				        	printf("\n\n-----> |||sorry not possible with amount less than 5000/-|||<-----\n\n\n");
				   	        goto fundreinvesting1;
				        }
				        }
	             	}
	     	 if (entry==2)
	     	 {
	     	 fundreinvesting2:

	     	 	displayline1();
	     	 	printf("NOTE :- (MINIMUM AMOUNT TO INVEST IN CAPITAL FUNDING IS 2500/-) \n");
	     	 	displayline1();
	     	 	printf("Enter the amount you want to invest:-");
	            scanf("%d",&p);
				     {

				if(p>=2500)
			        	{

				            printf("                         \n\nThank you for investing in capital fund\n\n");

				            	fundtotal2:

				displayline2();
				printf("\n\nTHE AMOUNT YOU INVESTED CAPITAL FUNDS IS %d\n\n\n",p);
				blue=blue+p+p*0.01;
		     	printf("                    ******************************************************************************\n");
                printf("                    *                        THE CAPITAL FUNDING BILL IS %f             *\n",blue);
                printf("                    ******************************************************************************\n");
                printf("                    -------------------------------------------------------------------------------\n");
		    	printf("                    |  !!! GENTLE REMAINDER : (This bill includes tax applied by the government)  |\n");
		    	printf("                    -------------------------------------------------------------------------------\n");
		    	displayline2();
                goto here;

			            }
				if (p<2500)
				         {
				             printf("\n\n-----> |||sorry not possible with amount less than 2500/-|||<----- \n\n\n");
				        	 goto fundreinvesting2;

			             }
       		         }
					}



		            if (entry==3)
		            {
		             	goto total;
			      	}
			}
			}


		if(response==2)

		{
		  goto total;
		}
	}




		     here:

			 printf("\n If you want to invest more ----> Enter 1");
		     printf("\n If you are completed your investing ----> Enter 2\n");
		     scanf("%d",&entry);
		     if(entry==1)
		     {
		     	printf("\n");
		     	goto fundinvesting;
			 }
			if(entry==2);
			{
				printf("\n");
				goto total;
			}


		  if(response==2)
		  {
		  	goto billingsection;
		  }



		    billingsection:
		    	z=p+p*0.05;
			total:

			TOTAL = red+blue+z;

			 displayline1();
			 displayline1();
			printf("\nThe Final bill of Buying Stocks and Mutual Funds is %f\n",TOTAL);
			displayline1();
			displayline1();
			    printf("                    -------------------------------------------------------------------------------\n");
		    	printf("                    |  !!! GENTLE REMAINDER : (This bill includes tax applied by the government)  |\n");
		    	printf("                    -------------------------------------------------------------------------------\n");


 		    if(TOTAL==0)
 		  {
 		  	goto end;
		  }
 		  printf("Payment method\n\n1)Card payment\n\n2)UPI payment\n\n");
 		  scanf("%d",&payment);
 		  {
 		  	if(payment!=1&&payment!=2)
 		  	{
 		  			printf("\nInvalid option please try again\n");
                        	goto billingsection;
			 }
		    if(payment==1)
 		    {
 		  	printf("\nEnter the otp\n");
 		  	scanf("%d",&pin);
		    }
		   if(payment==2)
		   {
		   	printf("\nEnter the pin\n");
		   	scanf("%d",&pin);
		   }
		  }
 		printf("\n\nVerifying the details\n\nTransaction processing........");
 		printf("\n\nTransaction successful\n");
 		  red=TOTAL-z-blue;
 		  blue=TOTAL-red-z;
		  TOTAL=blue+z+red;
		 displayline1();
 		 printf("               \n\nGRAND TOTAL BILL:-\n\n\n");
		 printf("               Name                \t:%s\n\n",name);
		 printf("               Phone Number        \t:%s\n\n",number);
		 printf("               STOCK Bill          \t:%f\n\n",z);
		 printf("               MUTUAL FUNDING Bill \t:%f\n\n",red);
		 printf("               CAPITAL FUNDING Bill\t:%f\n\n",blue);
		 printf("               TOTAL Bill          \t:%f\n\n",TOTAL);
		 displayline1();

  	     end:
 	    printf("                    -------------------------------------------------\n");
        printf("                    |    Thank you for choosing GAK STOCK BROKERS   |\n");
        printf("                    -------------------------------------------------\n");
        displayline1();
}
