void book(void){
	system("cls");
	title();

	char ans;
	FILE*ek;//file pointer
	ek*fopen("record.dxt","a");//open file in write mode
	printf("***********add your deatils*******");
	A:

	printf("\n\t\tFirst Name:  ");
	scanf("%s",p.first_name);

	if(strlen(p.first_name)>30||strlen(p.first_name)<2){
		printf("\n\t Invalid \t max range is 30 and min range is 2");
		goto A;

	}else
	{
		for (b=0; b < strlen(p.first_name); b++)
		{
			if (isalpha(p.first_name[b]))//isalpha to check alphabet
			{
				valid=1;
			}else{
				valid=0;
				break;
			}
		}
		if (!valid)
		{
			printf("\n\t\t invalid character (enter again)");
			goto A:
		}
	}

	B:

	printf("\n\t\tLast Name:  ");
	scanf("%s",p.last_name);

	if(strlen(p.last_name)>30||strlen(p.last_name)<2){
		printf("\n\t Invalid \t max range is 30 and min range is 2");
		goto A;

	}else
	{
		for (b=0; b < strlen(p.last_name); b++)
		{
			if (isalpha(p.last_name[b]))//isalpha to check alphabet
			{
				valid=1;
			}else{
				valid=0;
				break;
			}
		}
		if (!valid)
		{
			printf("\n\t\t invalid character (enter again)");
			goto B:
		}
	}

	//****************************gender**********

	do
	{
		printf("\n\t\tGender[F/M]: ");
		scanf("%c",&p.gender);
		if (toupper(p.gender)=="M"|| toupper(p.gender)=="F")
		{
			ok = 1;
		}
		else{
			ok = 0;

		}
		if(!ok)
		{
			printf("\n\t\t Gender contain invalid character (enter again)");

		}

	}while(!ok);

	//*************************age***********

	printf("\n\t\tAge: ");
	scanf("%i",&p.age);

	//*************************mobile number**

	C:
	printf("\n\t\t\tMobile Number: ");
	scanf("%s",p.mobile_num);

	if (strlen(p.mobile_num)!=10)
	{
		printf("\n\t invalid mobile_num");
		goto C:
	}


	//**********passport number****
	D:
	printf("\n\t\t\tPassport Number: ");
	scanf("%s",p.passport_no);

	if (strlen(p.passsport_no)!=9)
	{
		printf("\n\t invalid mobile_num");
		goto D:
	}

	//******************e-mail*******

	do
	{
		printf("\n\t\tEmail: ");
		scanf("%s",p.email);
		if (strlen(p.email)>30||strlen(p.email)<12)
		{
			printf("\n\t Invalid \t max range for email is 30 and min range id 12");

		}
	} while (strlen(p.email)<30||strlen(p.email)>12);



	fprintf(ek,"%s %s %c %i %s %s %s\n",p.first_name,p.last_name,p.gender,p.age,p.mobile_num,,p.passport_no,p.email );
	printf("\n\t\t\t_________details saved sucessfully_______");

	fclose(ek); //ek file closed

	getch();
	printf("\n\n\t\t\tD o want to reserve more seat[Y/N]?? ");
	scanf("%c",&ans);
	if (toupper(ans)=='Y')
	{
		book();
	}else
	printf("\n\t\t\t THANK YOU");
	getch();
	menu();


	}








