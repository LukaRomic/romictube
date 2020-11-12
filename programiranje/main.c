#include <stdio.h>
#include <stdlib.h>

#define DUZINA_IME 1000

struct kosarkas
{

    ime[DUZINA_IME];
    prezime[DUZINA_IME];
    mail[DUZINA_IME];
    password[DUZINA_IME];
    confirmpassword[DUZINA_IME];
    username[DUZINA_IME];


};


int Meni()
{

    int izbor, i=0;
    do
    {
        if(i>0)
        {
            printf("ERROR: invalid character\n");
        }
        printf("                   MAIN MENU\n\n");
        printf("1: Create a new account\n");
        printf("2: login to an existing account\n");
        printf("3: Change account\n");
        printf("4: Delete account\n");
        scanf("%d",&izbor);
        i++;
    }
    while(izbor < 0 || izbor > 6);
    return izbor;
}

int main()
{
    int izbor,n=0,i=0;
    char ime[DUZINA_IME],prezime[DUZINA_IME],mail[DUZINA_IME],password[DUZINA_IME],username[DUZINA_IME];
    izbor=Meni();
    switch(izbor)
    {
    case 1:
        if (i == n)
        {
        printf("Email:\n");
        scanf("%s",&mail);
        printf("Name:\n");
        scanf("%s",&ime);
        printf("Surname:\n");
        scanf("%s",&prezime);
        printf("Username:\n");
        scanf("%s",&username);
        printf("Password:\n");
        scanf("%s",&password);
        printf("Confirm password:\n");
        scanf("%s",&password);
        n++;
        }
    }
return 0;
}
