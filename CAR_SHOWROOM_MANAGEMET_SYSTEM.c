#include<stdio.h>
int main()
{
    int password=12345678,Enteredpassword, i=1;
printf("\n====================================\n");
printf("\nWELCOME TO TOYATA PAKISTAN\n");
printf("\n====================================\n");
int choice;
printf("SELECT FROM THE GIVEN OPTIONS\n");
printf("1. Showroom Owner\n");
printf("2. Customer\n");
printf("3. Exit\n");
printf("Enter choice:\n");
scanf("%d",&choice);
switch(choice){
    case 1:
        while(i <= 3){
            printf("Enter Password:");
            scanf("%d", &Enteredpassword);

            if(Enteredpassword == password){
                printf("Access Granted\n");
                i = 4;
                break;
            }

            i++;
            if(i <= 3){
                printf("Incorrect Password, Try Again\n");
            }
        }

        if(i == 4 && Enteredpassword != password){
            printf("Access Denied, You have exceeded the maximum number of attempts\n");
        }
        break;

        case 2:
        printf("Welcome To Showroom:\n");
        if (choice == 1 || choice == 2)
        {
            printf("\n===CATEGORY 1===\n");
            printf("\n===TOYOTA YARIS===\n");
            printf("1.Toyota Yaris 1.3L GLI MT\n");
            printf("1.Toyota Yaris 1.3L GLI MT\n");
            printf("2.Toyota Yaris 1.3L GLI CVT\n");
            printf("3.Toyota Yaris 1.3L ATIV MT\n");
            printf("4.Toyota Yaris 1.3L ATIV CV\n");
            printf("5.Toyota Yaris 1.5 ATIV X CVT - Beige Interior\n");
            printf("6.Toyota Yaris 1.5 ATIV X CVT - Black Interio\n");
        
            printf("\n===CATEGORY 2===\n");
            printf("\n===TOYOTA COROLLA===\n");
            printf("1.Toyota Corolla 1.6 MT\n");
            printf("2.Toyota Corolla 1.6 CVT-i\n");
            printf("3.Toyota Corolla 1.6 CVT-i Special Edition\n");
            printf("4.Toyota Corolla 1.8 CVT-i\n");
            printf("5.Toyota Corolla 1.8 CVT-i Grande - Beige Interior\n");
            printf("6.Toyota Corolla 1.8 CVT-i Grande - Black Interior\n");
        
            printf("\n===CATEGORY 3===\n");
            printf("\n===TOYOTA FORTUNER===\n");
            printf("1.Toyota Fortuner G\n");
            printf("2.Toyota Fortuner V\n");
            printf("3.Toyota Fortuner Sigma 4\n");
            printf("4.Toyota Fortuner Legender\n");
            printf("5.Toyota Fortuner GR-S\n");
        
            printf("\n===CATEGORY 4===\n");
            printf("\n===TOYOTA HILUX===\n");
            printf("1.Toyota Hilux Single Cabin\n");
            printf("2.Toyota Hilux E (Standard)\n");
            printf("3.Toyota Hilux Revo G\n");
            printf("4.Toyota Hilux Revo V\n");
            printf("5.Toyota Hilux Revo Rocco\n");
            printf("6.Toyota Hilux Revo GR-S\n");
        }
        break;

    case 3:
        printf("THANKS FOR VISITING\n");
        break;

    default:
        printf("Enter your choice again\n");
        break;
}


return 0;
}