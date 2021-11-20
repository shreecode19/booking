<<<<<<< HEAD
void menu(void)
{
	system("cls");
	int choose;
	title();//call title


	printf("\n\t\t\t1.Book a Seat");
	printf("\n\t\t\t2.Reservation Status");
	printf("\n\t\t\t3.Cancel Booking");
	printf("\n\t\t\t4.Exit");
	printf("\n\n\n\n\t\t\tChoose from 1 to 4");
	scanf("%d",&choose);

	switch (choose)
    {
    	case 1:
    		book();
    		break;
    	case 2:
    		status();
    		break;
    	case 3:
    		cancel();
    		break;
    	case 4:
    		ex_it();
    		break;
    	default:
        	printf("Invaild Try again");
    	getch();
=======
/*
1. Book a Seat
2. Reservation Satus
3. Cancel Booking
4. Exit
*/
void menu(void)
{
int choose;
printf("1.Book a Seat");
printf("2. Reservation Status");
printf("3. Cancel Booking");
printf("4. Exit");
printf("Choose from 1 to 4");
scanf("%d",&choose);

switch (choose)
    {
    case 1:
    book();
    break;
    case 2:
    status();
    break;
    case 3:
    cancel();
    break;
    case 4:
    exit();
    break;
    default:
        printf("Invaild Try again");
    getch();
    }
>>>>>>> 093bcb1695b1134901e4a1f025ef3dae07c656f6
}
