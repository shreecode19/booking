main(void)
{
    Welcomescreen();
    title();
    loginscreen();
    }
    //**************************************welcome
    void Welcomescreen(void)
    {
    printf("\n\t\t\t\t\t\t\t#################");
    printf("\nWelcome to \t\t### ");
    printf("\n\t\t\t\t Shree Air   #");
    printf("\n\t\t\t\t\t\t\t#################");
    printf("\n\n\n\n\n\n\nPresss Any Key.........\n");
    getch();
    system("cls");

    }
    //***************************************title
    void title(void)
    {
        printf("\n\n\n\t\t-------------------------------------")
        printf("\n\t\t\t      Shree Airlines        ");
        printf("\n\n\n\t\t-------------------------------------")
    }
    void loginscreen (void)
    {
        int e=o;
    char username[20];
    char password[20];
    char org_username[20]="shree";
    char org_password[10]="9999";
    do
    {

    printf("\n\n\n\n\t\t\t enter username and password :");
    printf("\n\n\n\n\t\t\tUSERNME: ");
    scanf("%s",username);
    printf("\n\n\n\n\t\t\tPassword:");
    scanf("%s",password);

    if(strcmp(username,org_username)==0 && strcmp(password,org_password)==0)
        {
            printf("\n\n\t\t.....Login sucessfull....\n");
            getch();
            menu();//call menu
            break;
        }
    else
    {
        printf("\n\t\tLogin Failed try again");
        e++ ;
        getch();
    }
    
    }while(e<=2);
    if(e>2){
        printf("limit crossed\n");
        getch();
        ex_it();
    }
    system("cls");

