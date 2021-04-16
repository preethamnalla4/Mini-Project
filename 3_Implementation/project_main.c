#include <Reservation.h>

/* Start of the application */
int main(void)
{
	int from,To;
	char pick[100],dest[100];
        printf("\n                     ****************************************************************\n");
        printf("                     ||                                                            ||\n");
	    printf("                     ||                                                            ||\n");
	    printf("                     ||                                                            ||\n");
	    printf("                     **     Welcome to Online Airline Seat Reservations System     **\n");
	    printf("                     ||                                                            ||\n");
	    printf("                     ||                                                            ||\n");
	    printf("                     ||                                                            ||\n");
	    printf("                     ****************************************************************\n\n\n\n");
        printf("\n\nSelect Boarding point: \n");
		printf(" 1.Chennai \n 2.Hyderabad \n 3.Mumbai \n 4.Bangalore \n ");
		printf("\nPick From: ");
		scanf("%d",&from);
		switch(from)
		{
			case 1:
				{
				  char pick[]="Chennai";
			      printf("\nSelect DESTINATION: \n");
		          printf(" 1.Hyderabad \n 2.Mumbai \n 3.Bangalore \n  \n");
		          printf("Pick to: ");
		          scanf("%d",&To);
		          if (To == 1)
		          {
		          char dest[]="Hyderabad";
		           printf("\n                                      ==========================================\n");
		           printf("\n                                      Ticket Confirmed from Chennai to Hyderabad");
		           printf("\n                                      ==========================================\n");
				   }
		          else if(To == 2)
		          {
		           printf("\n                                           =======================================\n");
		           printf("\n                                           Ticket confirmed from Chennai to Mumbai");
		           printf("\n                                           =======================================\n");
		       }
		          else
		          {
		           printf("\n                                          =========================================\n");
		           printf("\n                                          Ticket confirmed from Chennai to Banglore");
		           printf("\n                                          =========================================\n");
		       }
		          break;
		      }
		    case 2:
		         	printf("\nSelect DESTINATION: \n");
		            printf(" 1.Chennai \n 2.Mumbai \n 3.Bangalore \n  \n");
		            printf("Pick to: ");
		            scanf("%d",&To);
		            if (To == 1)
		            {
		            printf("\n                                         ==========================================\n");
		            printf("\n                                         Ticket Confirmed from Hyderabad to chennai");
		            printf("\n                                         ==========================================\n");
					}
		            else if(To == 2)
		            {
		            printf("\n                                           =========================================\n");
		            printf("\n                                           Ticket confirmed from Hyderabad to Mumbai");
		            printf("\n                                           =========================================\n");
					}
		            else
		            {
		            printf("\n                                          ============================================\n");
		            printf("\n                                          Ticket confirmed from Hyderabad to Bangalore");
		            printf("\n                                          ============================================\n");
		        }
		            break;
		    case 3:
		        	printf("\nSelect DESTINATION: \n");
		            printf(" 1.Chennai \n 2.Hyderabad \n 3.Bangalore \n  \n");
		            printf("Pick to: ");
		            scanf("%d",&To);
		            if (To == 1)
		            {
		            printf("\n                                               =======================================\n");
		            printf("\n                                               Ticket Confirmed from Mumbai to Chennai");
		            printf("\n                                               =======================================\n");
		        }
		            else if(To == 2)
		            {
		            printf("\n                                             ==========================================\n");
		            printf("\n                                             Ticket confirmed from Mumbai to Hyderabad");
		            printf("\n                                             ==========================================\n");
		        }
		            else
		            {
		            printf("\n                                              ==========================================\n");
		            printf("\n                                              Ticket confirmed from Mumbai to Bangalore");
		            printf("\n                                              ==========================================\n");
		        }
		            break;
		    case 4:
		    	    printf("\nSelect DESTINATION: \n");
		            printf(" 1.Chennai \n 2.Hyderabad \n 3.Mumbai \n  \n");
		            printf("Pick to: ");
		            scanf("%d",&To);
		            if (To == 1)
		            {
		            printf("\n                                               ==========================================\n");
		            printf("\n                                               Ticket Confirmed from Bangalore to Chennai");
		            printf("\n                                               ==========================================\n");
		        }
		            else if(To == 2)
		            {
		            printf("\n                                             ============================================\n");
		            printf("\n                                             Ticket confirmed from Bangalore to Hyderabad");
		            printf("\n                                             ============================================\n");
		        }
		            else
		            {
		            printf("\n                                                ==========================================\n");
		            printf("\n                                                 Ticket confirmed from Bangalore to Mumbai");
		            printf("\n                                                ==========================================\n");
		        }
		            break;
}
char q;
printf("\n ---------------NOT MANDATORY--------------- \n");
printf("\n\nEarly Web Checkin:\n(y/n)\n");
printf("Select your choice: ");
// cppcheck-suppress invalidscanf
scanf("%s",&q);

if(q=='y')
{
int a,b,c;
printf(" \n \nPress\n 1 for First Class \n 2 for Economic class\t  \n" );
printf("\nPick Class: ");
scanf("%d",&a);
if(a==1)
{	
   printf("\nSeats available : 1,2,3,4,5 \n");
   printf("\nSelect Row: ");
   scanf("%d",&b);
}
else
{
	printf("\nSeats available : 1,2,3,4,5 \n");
	printf("\nSelect Row: ");
	scanf("%d",&b);
}
printf("\nSeat Preference: \n 1.Window \n 2.Middle \n 3.Corner \n");
printf("\nselect your prefered Seat: ");
scanf("%d",&c);
switch(c)
{
	case 1:
		printf("     ======================");
		printf("\n      Window Seat in row %d \n",b);
		printf("     ======================");
		break;
	case 2:
		printf("     ======================");
		printf("\n      Middle Seat in row %d \n",b);
		printf("     ======================");
		break;
	case 3:
		printf("     ======================");
		printf("\n      Corner Seat in row %d \n",b);
		printf("     ======================");
		break;
}
}
else if(q=='n')
{
	printf("\nYou can Proceed to Online Food order\n");
}
else
{
	printf("Wrong option selected");
}
char d;
int e,f;
printf("\n\nDo you want to order Food? \n(y/n)\n");
printf("Select your choice: ");
// cppcheck-suppress invalidscanf
scanf("%s",&d);
if(d== 'y')
{

printf("\nPress\n 1 for Vegetarian \n 2 for Non Vegetarian\t  \n \n ");
printf("Select the type of food: ");
scanf("%d",&e);
 if(e==1)
	{
		printf("\n Vegetarian\n");
		printf("\nItems available are: \n 1.Veg SandWich \n 2.White Backed Pasta \n 3.Upma \n 4.Poha \n 5.Rajma \n");
		printf("\nSelect your item number: ");
		scanf("%d",&f);
		switch(f)
		{
			case 1:
				printf("   ---------------------");
				printf("\n   Veg Sandwich Selected\n");
				printf("   ---------------------");
				break;
			case 2:
				printf("   ---------------------------");
				printf("\n   White Backed Pasta Selected\n");
				printf("   ---------------------------");
				break;
			case 3:
				printf("   -------------");
				printf("\n   Upma Selected\n");
				printf("   -------------");
				break;
			case 4:
				printf("   -------------");
				printf("\n   Poha Selected\n");
				printf("   -------------");
				break;
			case 5:
				printf("   --------------");
				printf("\n   Rajma Selected\n");
				printf("   --------------");
				break;
		}
	}
	else if(e == 2)
	{
			printf("\nNon Vegetarian\n");
			printf("Items available are:\n 6.Chicken Sandwich \n 7.Chicken Tikka Sandwich \n 8.Chicken Soup \n 9.Mutton Soup \n 10.Chicken Burger \n");
			printf("\nSelect your item number: ");
			scanf("%d",&f);
			switch(f)
		{
			case 6:
				printf("   -------------------------");
				printf("\n   Chicken Sandwich Selected\n");
				printf("   -------------------------");
				break;
			case 7:
				printf("   -------------------------------");
				printf("\n   Chicken Tikka Sandwich Selected\n");
				printf("   -------------------------------");
				break;
			case 8:
				printf("   -----------------------");
				printf("\n   Chicken Soup Selected\n");
				printf("   -----------------------");
				break;
			case 9:
				printf("   --------------------");
				printf("\n   Mutton Soup Selected\n");
				printf("   --------------------");
				break;
			case 10:
				printf("   -----------------------");
				printf("\n   Chicken Burger Selected\n");
				printf("   -----------------------");
				break;
		}
	}
	else
	{
		printf("\nWrong number!  No item available on that number!\n\n");
	}
	printf("\n                     ****************************************************************\n");
	printf("                     ||                                                            ||\n");
	printf("                     ||                                                            ||\n");
	printf("                     ||                                                            ||\n");
	printf("                     **      !!Thank you foy using our online booking system!!     **\n");
	printf("                     **                  !!Have a NICE JOURNEY!!                   **\n");
	printf("                     ||                                                            ||\n");
	printf("                     ||                                                            ||\n");
	printf("                     ||                                                            ||\n");
	printf("                     ****************************************************************\n\n\n\n");
}
else
{
    printf("\n                     ****************************************************************\n");
	printf("                     ||                                                            ||\n");
	printf("                     ||                                                            ||\n");
	printf("                     ||                                                            ||\n");
	printf("                     **      !!Thank you foy using our online booking system!!     **\n");
	printf("                     **                  !!Have a NICE JOURNEY!!                   **\n");
	printf("                     ||                                                            ||\n");
	printf("                     ||                                                            ||\n");
	printf("                     ||                                                            ||\n");
	printf("                     ****************************************************************\n\n\n\n");
}
}