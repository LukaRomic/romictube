#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define DUZINA_IME 50

typedef struct korisnik
{

    char ime[DUZINA_IME];
    char prezime[DUZINA_IME];
    char mail[DUZINA_IME];
    char password[DUZINA_IME];
    char confirmpassword[DUZINA_IME];
    char username[DUZINA_IME];


} korisnik;

korisnik kor[24];

int Meni2()
{

    int i=0,n=0,izbor;
    char izbor2;


    do
    {
        if(i>0)
        {
            printf("\nERROR: invalid character\n\n");

        }
        printf("                   MAIN MENU\n\n");
        printf("1: Create a new account\n");
        printf("2: login to an existing account\n");
        printf("3: Logout \n");
        printf("4: Delete account\n");
        printf("5: Exit program\n");
        scanf("%c",&izbor2);
        izbor=izbor2-48;
        i++;
    }
    while(izbor < 1 || izbor > 5);

    if(izbor==1)
    {
    Register (n);
    }
     else if(izbor==2)
    {
    Login (n);

    }
    else if(izbor==3)
    {
     Logout();
    }
    else if(izbor==4)
    {
     return 0;
    }
    else if(izbor==5)
    {
     return 0;
    }


    return izbor;


    }


int Meni()
{

    int i=0,n=0,izbor;
    char izbor2;


    do
    {
        if(i>0)
        {
            printf("\nERROR: invalid character\n\n");

        }
        printf("                   MAIN MENU\n\n");
        printf("1: Create a new account\n");
        printf("2: login to an existing account\n");
        printf("3: Exit program\n");
        scanf("%c",&izbor2);
        izbor=izbor2-48;
        i++;
    }
    while(izbor < 1 || izbor > 3);

    if(izbor==1)
    {
    Register (n);
    }
     else if(izbor==2)
    {
      Login (n);
    }
    else if(izbor==3)
    {
         return 0;
    }
     return izbor;


    }


int main()
{

    int izbor,n=0,i=0,jedan=1;
    char ime[DUZINA_IME],prezime[DUZINA_IME],mail[DUZINA_IME],confirmpassword[DUZINA_IME],password[DUZINA_IME],username[DUZINA_IME],mailcheck[DUZINA_IME],passwordcheck[DUZINA_IME];
    Meni(izbor);

    if(izbor==1)
    {
        FILE *fajl;
    fajl = fopen("fajl.txt", "a");
    int jedan=1,i=0,vi=0,br;
    n=0;
    char ime[DUZINA_IME],prezime[DUZINA_IME],mail[DUZINA_IME],confirmpassword[DUZINA_IME],password[DUZINA_IME],username[DUZINA_IME],mailcheck[DUZINA_IME],passwordcheck[DUZINA_IME];
    while(jedan==1)
        {
        jedan=0;
        printf("Email:\n");
        gets( mail );
        gets( mail );
        for (vi=0; vi < strlen(mail); vi++)
        {
        if( mail[vi] ==  64)
        {
            br++;
        }

        }
        if(br != 1)
        {
        printf("Email dosen't exist\n");
        printf("Plese enter a valid email\n\n");
        Meni();
        }
        else if(br==1)
        {
        fprintf(fajl, "%s ",mail);


        printf("Name:\n");
        gets( ime );
        fprintf(fajl, "%s ",ime);

        printf("Surname: \n");
        gets( prezime );
        fprintf(fajl, "%s ",prezime);

        printf("Username:\n");
        gets( username );
        fprintf(fajl, "%s ",username);

        printf("Password:\n");
        gets( password );
        fprintf(fajl, "%s ",password);

        printf("Confirm password:\n");
        gets( confirmpassword );
        }

        if (strcmp(password, confirmpassword) == 0)
        {
            //printf("passwordsare matching");
             printf("Register succesful\n");
             Meni();
        }
        else
        {
            printf("Passwords are not matching\n");
            printf("          try again\n");
            jedan++;
        }




        }

        fclose(fajl);
    }
     else if(izbor==2)
    {
    FILE *fajl;
    fajl = fopen("fajl.txt", "r");

    int jedan=1,f,ii,iii,ff,linenum;
    n=0;
    char d,data[DUZINA_IME],data2[DUZINA_IME],ime[DUZINA_IME],prezime[DUZINA_IME],mail[DUZINA_IME],confirmpassword[DUZINA_IME],password[DUZINA_IME],username[DUZINA_IME],mailcheck[DUZINA_IME],passwordcheck[DUZINA_IME];

        printf("         Login \n");
        printf("Email or username: \n");
        gets( mailcheck );
        gets( mailcheck );
        //while( !feof(fajl))
        //{
        fscanf(fajl,"%s",data);
      //  }
        if(strcmp(mailcheck,data)==0)
        {
           // printf("isti su");
            printf("Password: \n");
        gets( passwordcheck );

      for (ii = 0; ii < linenum-1; ii++)
      {

      fscanf(fajl, "%s",data2);
      }

            fscanf(fajl,"%s", data2);


       if(strcmp(passwordcheck,data2)==0)
       {
           printf("Login succesful\n");
            Meni2();
       }
       else
       {
           printf("Login unsuccesful \n");
            Meni();
       }
      }

        else
        {
            printf("Login unsuccesful\n");
             Meni();
        }
fclose(fajl);
    }
    else if(izbor==3)
    {
     return 0;
    }




return 0;
}

void Register(int n)
{
    FILE *fajl;
    fajl = fopen("fajl.txt", "a");
    int jedan=1,i=0,vi=0,br=0,br2=0,vii=0;
    n=0;
    char ime[DUZINA_IME],prezime[DUZINA_IME],mail[DUZINA_IME],confirmpassword[DUZINA_IME],password[DUZINA_IME],username[DUZINA_IME],mailcheck[DUZINA_IME],passwordcheck[DUZINA_IME];
    while(jedan==1)
        {
        jedan=0;
        printf("Email:\n");
        gets( mail );
        gets( mail );
        for (vi=0; vi < strlen(mail); vi++)
        {
        if( mail[vi] ==  64)
        {
            br++;
        }
        }
        for (vii=0; vii < strlen(mail); vii++)
        {
        if(mail[vii] ==  46)
            {
            br2++;
            }
        }
        if(br != 1 || br2 != 1)
        {
        printf("Email dosen't exist\n");
        printf("Plese enter a valid email\n\n");
        Meni();
        fclose(fajl);
        }

        else if(br+br2==2)
        {
        fprintf(fajl, "%s\n",mail);


        printf("Name:\n");
        gets( ime );
        fprintf(fajl, "%s\n",ime);

        printf("Surname: \n");
        gets( prezime );
        fprintf(fajl, "%s\n",prezime);

        printf("Username:\n");
        gets( username );
        fprintf(fajl, "%s\n",username);

        printf("Password:\n");
        gets( password );
        fprintf(fajl, "%s\n",password);

        printf("Confirm password:\n");
        gets( confirmpassword );
        }
        }

        if (strcmp(password, confirmpassword) == 0)
        {
            //printf("passwordsare matching");
             printf("Register succesful\n");
             fclose(fajl);
             Meni();
        }
        else
        {
            printf("Passwords are not matching\n");
            printf("          try again\n");
            jedan++;
            fclose(fajl);
        }



}

void Login(int n)
{
    FILE *fajl;
    fajl = fopen("fajl.txt", "r");

    int jedan=1,f,ii,iii,ff,linenum,iiv;
    n=0;
    char d,data[DUZINA_IME],data2[DUZINA_IME],ime[DUZINA_IME],prezime[DUZINA_IME],mail[DUZINA_IME],confirmpassword[DUZINA_IME],password[DUZINA_IME],username[DUZINA_IME],mailcheck[DUZINA_IME],passwordcheck[DUZINA_IME];

        printf("         Login \n");
        printf("Email or username: \n");
        gets( mailcheck );
        gets( mailcheck );
        //while( !feof(fajl))
        //{
        fscanf(fajl,"%s",data);

      //  }
        if(strcmp(mailcheck,data)==0)
        {
           // printf("isti su");
            printf("Password: \n");
        gets( passwordcheck );

      for (ii = 0; ; ii++)
      {
      if(ii%5==0)
      {
       fscanf(fajl,"%s",data2);
       d=fgetc(fajl);
      }
      if(d==EOF)
      {
          break;
      }
      }

       if(strcmp(passwordcheck,data2)==0)
       {
           printf("Login succesful\n");
           fclose(fajl);
            Meni2();
       }
       else
       {
           printf("Login unsuccesful \n");
           fclose(fajl);
            Meni();
       }
      }

        else
        {
            printf("Login unsuccesful\n");
            fclose(fajl);
             Meni();
        }
}
void Logout(int n)
{
    Meni();
}

