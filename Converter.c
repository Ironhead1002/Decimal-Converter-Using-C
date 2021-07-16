
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void welcome()
{
    printf("                  *********************************************************************************\n");
    printf("                  |                 Welcome to the Base Converter                                 |\n");
    printf("                  |                 Press 1 to Convert value from Decimal to Binary               |\n");
    printf("                  |                 Press 2 to Convert value from Decimal to Octal                |\n");
    printf("                  |                 Press 3 to Convert value from Decimal to Hexa                 |\n");
    printf("                  |                 Press 4 to exit!!!                                            |\n");
    printf("                  *********************************************************************************\n");
}

void exited(){
    system("cls");
    printf("********************************Thank You For Using Our Converter********************************\n\n");
}

void decitobina()
{
    int a[60],n,i;

    printf("\nEnter the Integer to convert: ");
    scanf("%d",&n);

    for(i=0;n>0;i++)
    {
        a[i]=n%2;
        n=n/2;
    }

    welcome();

    printf("\nBinary is :");

    for(i=i-1;i>=0;i--)
    {
    printf("%d",a[i]);
    }
}

void decitoocta()
{
    int a[60],n,i;

    printf("\nEnter the Integer to convert: ");
    scanf("%d",&n);

    for(i=0;n>0;i++)
    {
        a[i]=n%8;
        n=n/8;
    }

    welcome();

    printf("\nOctal is :");

    for(i=i-1;i>=0;i--)
    {
    printf("%d",a[i]);
    }
}

void decitohexa()
{
    int a, di;
    char hexa[60];

    printf("\nPlease Enter a Integer value : ");
    scanf("%d",&a);

    di = a;

    for(int i = 0; di >= 1 ;i++)
    {
        if(di%16 == 0)
            hexa[i] = '0';
        else if(di%16 == 1)
            hexa[i] = '1';
        else if(di%16 == 2)
            hexa[i] = '2';
        else if(di%16 == 3)
            hexa[i] = '3';
        else if(di%16 == 4)
            hexa[i] = '4';
        else if(di%16 == 5)
            hexa[i] = '5';
        else if(di%16 == 6)
            hexa[i] = '6';
        else if(di%16 == 7)
            hexa[i] = '7';
        else if(di%16 == 8)
            hexa[i] = '8';
        else if(di%16 == 9)
            hexa[i] = '9';
        else if(di%16 == 10)
            hexa[i] = 'A';
        else if(di%16 == 11)
            hexa[i] = 'B';
        else if(di%16 == 12)
            hexa[i] = 'C';
        else if(di%16 == 13)
            hexa[i] = 'D';
        else if(di%16 == 14)
            hexa[i] = 'E';
        else if(di%16 == 15)
            hexa[i] = 'F';
        di = di/16;
    }

    welcome();

    printf("\nHexa is : ");
    for(int j = strlen(hexa)-1; j >= 0; j--)
    {
    printf("%c",hexa[j]);
    }

}

int main()
{
    welcome();

    while(1)
    {
        int ch;

        printf("\n\nChoice: ");
        scanf("%d",&ch);

        if(ch != 4)
        {
            switch(ch)
            {
                case 1:
                system("cls");
                decitobina();
                break;

                case 2:
                system("cls");
                decitoocta();
                break;

                case 3:
                system("cls");
                decitohexa();
                break;

                default:
                system("cls");
                printf("\nInidentified Input\n");
                break;
            }
        }

        else
        {
            exited();
            break;
        }
    }
}
