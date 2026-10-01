#include<stdio.h>
int main()
{
    int password=12345678,Enteredpassword, i=1,customer_choice,Car_category,Car_model,Car_variant,Car_color,Car_engine,Car_transmission,Car_interior,Car_price,Car_specs,Car_features;
    int choice,Car_Details;
printf("\n====================================\n");
printf("\nWELCOME TO TOYATA PAKISTAN\n");
printf("\n====================================\n");
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

        case 2:{
            printf("Welcome To Showroom:\n");
            printf("1.View Cars:\n");
            printf("2.Book Test Drive :\n");
            printf("3.Book Cars:\n");
            printf("4.Book Service:\n");
            printf("5.Exit:\n");
            printf("Enter your choice:\n");
            scanf("%d",&customer_choice);
            switch(customer_choice){
                case 1:
                    printf("Category Of Cars:\n");
                    printf("1.Compact Sedan:\n");
                    printf("2.Sedan:\n");
                    printf("3.SUV's:\n");
                    printf("4.GR(Gazoo Racing):\n");
                    printf("Enter Your Choice:\n");
                    scanf("%d",&Car_category);
                    switch(Car_category){
                        case 1:
                            //printf("1.Toyota Yaris:\n");
                            printf("\n===COMPACT SEDAN===\n");
                            printf("\n===TOYOTA YARIS===\n");
                            printf("1.Toyota Yaris 1.3L GLI MT\n");
                            printf("2.Toyota Yaris 1.3L GLI CVT\n");
                            printf("3.Toyota Yaris 1.3L ATIV MT\n");
                            printf("4.Toyota Yaris 1.3L ATIV CVT\n");
                            printf("5.Toyota Yaris 1.5 ATIV X CVT - Beige Interior\n");
                            printf("6.Toyota Yaris 1.5 ATIV X CVT - Black Interio\n");
                            printf("\nEnter Car Model:");
                            scanf("%d",&Car_model);
                            switch (Car_model)
                            {
                                case 1:
                                    printf("Toyota Yaris 1.3L GLI MT\n");
                                    printf("1.Car Colors:\n");
                                    printf("2.Car Specifications:\n");
                                    printf("3.Car Features:\n");
                                    printf("4.Price:\n");
                                    printf("5.Exit:\n");
                                    printf("What Do You Want?\n");
                                    scanf("%d",&Car_Details);
                                    
                                
                                 switch (Car_Details){
                                    while(Car_Details != 5) {
                                    case 1:
                                        printf("Car Colors:\n");
                                        printf("1.White\n");
                                        printf("2.Silver\n");
                                        printf("3.Black\n");
                                        printf("4.Graphite Grey\n");
                                        printf("5.Blue\n");
                                        break;
                                    case 2:
                                        printf("Car Specifications:\n");
                                        printf("Engine: 1.3L 4-Cylinder\n");
                                        printf("Transmission: 5-Speed Manual\n");
                                        printf("Fuel Type: Petrol\n");
                                        printf("Seating Capacity: 5\n");
                                        break;
                                    case 3:
                                        printf("Car Features:\n");
                                        printf("Air Conditioning\n");
                                        printf("Power Windows\n");
                                        printf("Keyless Entry\n");
                                        printf("Bluetooth Connectivity\n");
                                        printf("3 Air Bags\n");
                                        printf("2 Speakers\n");
                                        printf("Side Mirrors with Indicators\n");
                                        printf("Power Steering\n");
                                        printf("Rear Parking Camera\n");
                                        printf("Hill Assist Control\n");
                                        printf("Defogger\n");
                                        break;
                                    case 4: 
                                        printf("Price:\n");
                                        printf("PKR 4,649,000\n");
                                        break;
                                    case 5:
                                        printf("THANKS FOR VISITING\n");
                                        break;
                                    default:
                                        printf("Invalid choice, please try again.\n");
                                        break;
                                 }
                             }
                             
                             
                            case 2:
                             printf("2.Toyota Yaris 1.3L GLI CVT\n");
                             printf("1.Car Colors:\n");
                             printf("2.Car Specifications:\n");
                             printf("3.Car Features:\n");
                             printf("4.Price:\n");
                             printf("5.Exit:\n");
                             printf("What Do You Want?\n");
                             scanf("%d",&Car_Details);
                            switch(Car_Details){
                                case 1:
                                    printf("Car Colors:\n");
                                    printf("1.White\n");
                                    printf("2.Silver\n");
                                    printf("3.Black\n");
                                    printf("4.Graphite Grey\n");
                                    printf("5.Blue\n");
                                    break;
                                case 2:
                                    printf("Car Specifications:\n");
                                    printf("Engine: 1.3L 4-Cylinder\n");
                                    printf("Transmission: 5-Speed Manual\n");
                                    printf("Fuel Type: Petrol\n");
                                    printf("Seating Capacity: 5\n");
                                    break;
                                case 3:
                                    printf("Car Features:\n");
                                    printf("Air Conditioning\n");
                                    printf("Power Windows\n");
                                    printf("Keyless Entry\n");
                                    printf("Bluetooth Connectivity\n");
                                    printf("3 Air Bags\n");
                                    printf("2 Speakers\n");
                                    printf("Side Mirrors with Indicators\n");
                                    printf("Power Steering\n");
                                    printf("Rear Parking Camera\n");
                                    printf("Hill Assist Control\n");
                                    printf("Defogger\n");
                                    break;
                                case 4: 
                                    printf("Price:\n");
                                    printf("PKR 4,649,000\n");
                                    break;
                                default:
                                    printf("Invalid choice, please try again.\n");
                                    break;
                             }
                            case 3:
                             printf("3.Toyota Yaris 1.3L ATIV MT\n");
                             printf("1.Car Colors:\n");
                             printf("2.Car Specifications:\n");
                             printf("3.Car Features:\n");
                             printf("4.Price:\n");
                             printf("5.Exit:\n");
                             printf("What Do You Want?\n");
                             scanf("%d",&Car_Details);
                             switch(Car_Details){
                                case 1:
                                    printf("Car Colors:\n");
                                    printf("1.White\n");
                                    printf("2.Silver\n");
                                    printf("3.Black\n");
                                    printf("4.Graphite Grey\n");
                                    printf("5.Blue\n");
                                    break;
                                case 2:
                                    printf("Car Specifications:\n");
                                    printf("Engine: 1.3L 4-Cylinder\n");
                                    printf("Transmission: 5-Speed Manual\n");
                                    printf("Fuel Type: Petrol\n");
                                    printf("Seating Capacity: 5\n");
                                    break;
                                case 3:
                                    printf("Car Features:\n");
                                    printf("Air Conditioning\n");
                                    printf("Power Windows\n");
                                    printf("Keyless Entry\n");
                                    printf("Bluetooth Connectivity\n");
                                    printf("3 Air Bags\n");
                                    printf("2 Speakers\n");
                                    printf("Side Mirrors with Indicators\n");
                                    printf("Power Steering\n");
                                    printf("Rear Parking Camera\n");
                                    printf("Hill Assist Control\n");
                                    printf("Defogger\n");
                                    break;
                                case 4: 
                                    printf("Price:\n");
                                    printf("PKR 4,649,000\n");
                                    break;
                                default:
                                    printf("Invalid choice, please try again.\n");
                                    break;
                             }
                            case 4: 
                             printf("4.Toyota Yaris 1.3L ATIV CVT\n");
                             printf("1.Car Colors:\n");
                             printf("2.Car Specifications:\n");
                             printf("3.Car Features:\n");
                             printf("4.Price:\n");
                             printf("5.Exit:\n");
                             printf("What Do You Want?\n");
                             scanf("%d",&Car_Details);
                             switch(Car_Details){
                                case 1:
                                    printf("Car Colors:\n");
                                    printf("1.White\n");
                                    printf("2.Silver\n");
                                    printf("3.Black\n");
                                    printf("4.Graphite Grey\n");
                                    printf("5.Blue\n");
                                    break;
                                case 2:
                                    printf("Car Specifications:\n");
                                    printf("Engine: 1.3L 4-Cylinder\n");
                                    printf("Transmission: 5-Speed Manual\n");
                                    printf("Fuel Type: Petrol\n");
                                    printf("Seating Capacity: 5\n");
                                    break;
                                case 3:
                                    printf("Car Features:\n");
                                    printf("Air Conditioning\n");
                                    printf("Power Windows\n");
                                    printf("Keyless Entry\n");
                                    printf("Bluetooth Connectivity\n");
                                    printf("3 Air Bags\n");
                                    printf("2 Speakers\n");
                                    printf("Side Mirrors with Indicators\n");
                                    printf("Power Steering\n");
                                    printf("Rear Parking Camera\n");
                                    printf("Hill Assist Control\n");
                                    printf("Defogger\n");
                                    break;
                                case 4: 
                                    printf("Price:\n");
                                    printf("PKR 4,649,000\n");
                                    break;
                                default:
                                    printf("Invalid choice, please try again.\n");
                                    break;
                             }
                             case 5:
                             printf("5.Toyota Yaris 1.5 ATIV X CVT - Beige Interior\n");
                             printf("1.Car Colors:\n");
                             printf("2.Car Specifications:\n");
                             printf("3.Car Features:\n");
                             printf("4.Price:\n");
                             printf("5.Exit:\n");
                             printf("What Do You Want?\n");
                             scanf("%d",&Car_Details);
                             switch(Car_Details){
                                case 1:
                                    printf("Car Colors:\n");
                                    printf("1.White\n");
                                    printf("2.Silver\n");
                                    printf("3.Black\n");
                                    printf("4.Graphite Grey\n");
                                    printf("5.Blue\n");
                                    break;
                                case 2:
                                    printf("Car Specifications:\n");
                                    printf("Engine: 1.3L 4-Cylinder\n");
                                    printf("Transmission: 5-Speed Manual\n");
                                    printf("Fuel Type: Petrol\n");
                                    printf("Seating Capacity: 5\n");
                                    break;
                                case 3:
                                    printf("Car Features:\n");
                                    printf("Air Conditioning\n");
                                    printf("Power Windows\n");
                                    printf("Keyless Entry\n");
                                    printf("Bluetooth Connectivity\n");
                                    printf("3 Air Bags\n");
                                    printf("2 Speakers\n");
                                    printf("Side Mirrors with Indicators\n");
                                    printf("Power Steering\n");
                                    printf("Rear Parking Camera\n");
                                    printf("Hill Assist Control\n");
                                    printf("Defogger\n");
                                    break;
                                case 4: 
                                    printf("Price:\n");
                                    printf("PKR 4,649,000\n");
                                    break;
                                default:
                                    printf("Invalid choice, please try again.\n");
                                    break;
                             }
                            case 6:
                             printf("6.Toyota Yaris 1.5 ATIV X CVT - Black Interior\n");
                             printf("1.Car Colors:\n");
                             printf("2.Car Specifications:\n");
                             printf("3.Car Features:\n");
                             printf("4.Price:\n");
                             printf("5.Exit:\n");
                             printf("What Do You Want?\n");
                             scanf("%d",&Car_Details);
                                switch(Car_Details){
                                case 1:
                                    printf("Car Colors:\n");
                                    printf("1.White\n");
                                    printf("2.Silver\n");
                                    printf("3.Black\n");
                                    printf("4.Graphite Grey\n");
                                    printf("5.Blue\n");
                                    break;
                                case 2:
                                    printf("Car Specifications:\n");
                                    printf("Engine: 1.3L 4-Cylinder\n");
                                    printf("Transmission: 5-Speed Manual\n");
                                    printf("Fuel Type: Petrol\n");
                                    printf("Seating Capacity: 5\n");
                                    break;
                                case 3:
                                    printf("Car Features:\n");
                                    printf("Air Conditioning\n");
                                    printf("Power Windows\n");
                                    printf("Keyless Entry\n");
                                    printf("Bluetooth Connectivity\n");
                                    printf("3 Air Bags\n");
                                    printf("2 Speakers\n");
                                    printf("Side Mirrors with Indicators\n");
                                    printf("Power Steering\n");
                                    printf("Rear Parking Camera\n");
                                    printf("Hill Assist Control\n");
                                    printf("Defogger\n");
                                    break;
                                case 4: 
                                    printf("Price:\n");
                                    printf("PKR 4,649,000\n");
                                    break;
                                default:
                                    printf("Invalid choice, please try again.\n");
                                    break;
                                
                                }
                            break;
                            }
                            case 2:
                            printf("\n===SEDAN===\n");
                            printf("\n===TOYOTA COROLLA===\n");
                            printf("1.Toyota Corolla 1.6 MT\n");
                            printf("2.Toyota Corolla 1.6 CVT-i\n");
                            printf("3.Toyota Corolla 1.6 CVT-i Special Edition\n");
                            printf("4.Toyota Corolla 1.8 CVT-i\n");
                            printf("5.Toyota Corolla 1.8 CVT-i Grande - Beige Interior\n");
                            printf("6.Toyota Corolla 1.8 CVT-i Grande - Black Interior\n");
                            printf("\nEnter Your Choice\n");
                            scanf("%d", &Car_model);
                            switch (Car_model)
                            {
                                case 1:
                                    printf("1.Toyota Corolla 1.6 MT\n");
                                    printf("1.Car Colors:\n");
                                    printf("2.Car Specifications:\n");
                                    printf("3.Car Features:\n");
                                    printf("4.Price:\n");
                                    printf("5.Exit:\n");
                                    printf("What Do You Want?\n");
                                    scanf("%d", &Car_Details);
                                    switch (Car_Details)
                                    {
                                        case 1:
                                            printf("Car Colors:\n");
                                            printf("1.White\n");
                                            printf("2.Silver\n");
                                            printf("3.Black\n");
                                            printf("4.Graphite Grey\n");
                                            printf("5.Blue\n");
                                            break;
                                        case 2:
                                            printf("Car Specifications:\n");
                                            printf("Engine: 1.3L 4-Cylinder\n");
                                            printf("Transmission: 5-Speed Manual\n");
                                            printf("Fuel Type: Petrol\n");
                                            printf("Seating Capacity: 5\n");
                                            break;
                                        case 3:
                                            printf("Car Features:\n");
                                            printf("Air Conditioning\n");
                                            printf("Power Windows\n");
                                            printf("Keyless Entry\n");
                                            printf("Bluetooth Connectivity\n");
                                            printf("3 Air Bags\n");
                                            printf("2 Speakers\n");
                                            printf("Side Mirrors with Indicators\n");
                                            printf("Power Steering\n");
                                            printf("Rear Parking Camera\n");
                                            printf("Hill Assist Control\n");
                                            printf("Defogger\n");
                                            break;
                                        case 4:
                                            printf("Price:\n");
                                            printf("PKR 4,649,000\n");
                                            break;
                                        case 5:
                                            printf("THANKS FOR VISITING\n");
                                            break;
                                        default:
                                            printf("Invalid choice, please try again.\n");
                                            break;
                                    }
                                    break;

                                case 2:
                                    printf("2.Toyota Corolla 1.6 CVT-i\n");
                                    printf("1.Car Colors:\n");
                                    printf("2.Car Specifications:\n");
                                    printf("3.Car Features:\n");
                                    printf("4.Price:\n");
                                    printf("5.Exit:\n");
                                    printf("What Do You Want?\n");
                                    scanf("%d", &Car_Details);
                                    switch (Car_Details)
                                    {
                                        case 1:
                                            printf("Car Colors:\n");
                                            printf("1.White\n");
                                            printf("2.Silver\n");
                                            printf("3.Black\n");
                                            printf("4.Graphite Grey\n");
                                            printf("5.Blue\n");
                                            break;
                                        case 2:
                                            printf("Car Specifications:\n");
                                            printf("Engine: 1.3L 4-Cylinder\n");
                                            printf("Transmission: 5-Speed Manual\n");
                                            printf("Fuel Type: Petrol\n");
                                            printf("Seating Capacity: 5\n");
                                            break;
                                        case 3:
                                            printf("Car Features:\n");
                                            printf("Air Conditioning\n");
                                            printf("Power Windows\n");
                                            printf("Keyless Entry\n");
                                            printf("Bluetooth Connectivity\n");
                                            printf("3 Air Bags\n");
                                            printf("2 Speakers\n");
                                            printf("Side Mirrors with Indicators\n");
                                            printf("Power Steering\n");
                                            printf("Rear Parking Camera\n");
                                            printf("Hill Assist Control\n");
                                            printf("Defogger\n");
                                            break;
                                        case 4:
                                            printf("Price:\n");
                                            printf("PKR 4,649,000\n");
                                            break;
                                        case 5:
                                            printf("THANKS FOR VISITING\n");
                                            break;
                                        default:
                                            printf("Invalid choice, please try again.\n");
                                            break;
                                    }
                                    break;

                                case 3:
                                    printf("3.Toyota Corolla 1.6 CVT-i Special Edition\n");
                                    printf("1.Car Colors:\n");
                                    printf("2.Car Specifications:\n");
                                    printf("3.Car Features:\n");
                                    printf("4.Price:\n");
                                    printf("5.Exit:\n");
                                    printf("What Do You Want?\n");
                                    scanf("%d", &Car_Details);
                                    switch (Car_Details)
                                    {
                                        case 1:
                                            printf("Car Colors:\n");
                                            printf("1.White\n");
                                            printf("2.Silver\n");
                                            printf("3.Black\n");
                                            printf("4.Graphite Grey\n");
                                            printf("5.Blue\n");
                                            break;
                                        case 2:
                                            printf("Car Specifications:\n");
                                            printf("Engine: 1.3L 4-Cylinder\n");
                                            printf("Transmission: 5-Speed Manual\n");
                                            printf("Fuel Type: Petrol\n");
                                            printf("Seating Capacity: 5\n");
                                            break;
                                        case 3:
                                            printf("Car Features:\n");
                                            printf("Air Conditioning\n");
                                            printf("Power Windows\n");
                                            printf("Keyless Entry\n");
                                            printf("Bluetooth Connectivity\n");
                                            printf("3 Air Bags\n");
                                            printf("2 Speakers\n");
                                            printf("Side Mirrors with Indicators\n");
                                            printf("Power Steering\n");
                                            printf("Rear Parking Camera\n");
                                            printf("Hill Assist Control\n");
                                            printf("Defogger\n");
                                            break;
                                        case 4:
                                            printf("Price:\n");
                                            printf("PKR 4,649,000\n");
                                            break;
                                        case 5:
                                            printf("THANKS FOR VISITING\n");
                                            break;
                                        default:
                                            printf("Invalid choice, please try again.\n");
                                            break;
                                    }
                                    break;

                                case 4:
                                    printf("4.Toyota Corolla 1.8 CVT-i\n");
                                    printf("1.Car Colors:\n");
                                    printf("2.Car Specifications:\n");
                                    printf("3.Car Features:\n");
                                    printf("4.Price:\n");
                                    printf("5.Exit:\n");
                                    printf("What Do You Want?\n");
                                    scanf("%d", &Car_Details);
                                    switch (Car_Details)
                                    {
                                        case 1:
                                            printf("Car Colors:\n");
                                            printf("1.White\n");
                                            printf("2.Silver\n");
                                            printf("3.Black\n");
                                            printf("4.Graphite Grey\n");
                                            printf("5.Blue\n");
                                            break;
                                        case 2:
                                            printf("Car Specifications:\n");
                                            printf("Engine: 1.3L 4-Cylinder\n");
                                            printf("Transmission: 5-Speed Manual\n");
                                            printf("Fuel Type: Petrol\n");
                                            printf("Seating Capacity: 5\n");
                                            break;
                                        case 3:
                                            printf("Car Features:\n");
                                            printf("Air Conditioning\n");
                                            printf("Power Windows\n");
                                            printf("Keyless Entry\n");
                                            printf("Bluetooth Connectivity\n");
                                            printf("3 Air Bags\n");
                                            printf("2 Speakers\n");
                                            printf("Side Mirrors with Indicators\n");
                                            printf("Power Steering\n");
                                            printf("Rear Parking Camera\n");
                                            printf("Hill Assist Control\n");
                                            printf("Defogger\n");
                                            break;
                                        case 4:
                                            printf("Price:\n");
                                            printf("PKR 4,649,000\n");
                                            break;
                                        case 5:
                                            printf("THANKS FOR VISITING\n");
                                            break;
                                        default:
                                            printf("Invalid choice, please try again.\n");
                                            break;
                                    }
                                    break;

                                case 5:
                                    printf("5.Toyota Corolla 1.8 CVT-i Grande - Beige Interior\n");
                                    printf("1.Car Colors:\n");
                                    printf("2.Car Specifications:\n");
                                    printf("3.Car Features:\n");
                                    printf("4.Price:\n");
                                    printf("5.Exit:\n");
                                    printf("What Do You Want?\n");
                                    scanf("%d", &Car_Details);
                                    switch (Car_Details)
                                    {
                                        case 1:
                                            printf("Car Colors:\n");
                                            printf("1.White\n");
                                            printf("2.Silver\n");
                                            printf("3.Black\n");
                                            printf("4.Graphite Grey\n");
                                            printf("5.Blue\n");
                                            break;
                                        case 2:
                                            printf("Car Specifications:\n");
                                            printf("Engine: 1.3L 4-Cylinder\n");
                                            printf("Transmission: 5-Speed Manual\n");
                                            printf("Fuel Type: Petrol\n");
                                            printf("Seating Capacity: 5\n");
                                            break;
                                        case 3:
                                            printf("Car Features:\n");
                                            printf("Air Conditioning\n");
                                            printf("Power Windows\n");
                                            printf("Keyless Entry\n");
                                            printf("Bluetooth Connectivity\n");
                                            printf("3 Air Bags\n");
                                            printf("2 Speakers\n");
                                            printf("Side Mirrors with Indicators\n");
                                            printf("Power Steering\n");
                                            printf("Rear Parking Camera\n");
                                            printf("Hill Assist Control\n");
                                            printf("Defogger\n");
                                            break;
                                        case 4:
                                            printf("Price:\n");
                                            printf("PKR 4,649,000\n");
                                            break;
                                        case 5:
                                            printf("THANKS FOR VISITING\n");
                                            break;
                                        default:
                                            printf("Invalid choice, please try again.\n");
                                            break;
                                    }
                                    break;

                                case 6:
                                    printf("6.Toyota Corolla 1.8 CVT-i Grande - Black Interior\n");
                                    printf("1.Car Colors:\n");
                                    printf("2.Car Specifications:\n");
                                    printf("3.Car Features:\n");
                                    printf("4.Price:\n");
                                    printf("5.Exit:\n");
                                    printf("What Do You Want?\n");
                                    scanf("%d", &Car_Details);
                                    switch (Car_Details)
                                    {
                                        case 1:
                                            printf("Car Colors:\n");
                                            printf("1.White\n");
                                            printf("2.Silver\n");
                                            printf("3.Black\n");
                                            printf("4.Graphite Grey\n");
                                            printf("5.Blue\n");
                                            break;
                                        case 2:
                                            printf("Car Specifications:\n");
                                            printf("Engine: 1.3L 4-Cylinder\n");
                                            printf("Transmission: 5-Speed Manual\n");
                                            printf("Fuel Type: Petrol\n");
                                            printf("Seating Capacity: 5\n");
                                            break;
                                        case 3:
                                            printf("Car Features:\n");
                                            printf("Air Conditioning\n");
                                            printf("Power Windows\n");
                                            printf("Keyless Entry\n");
                                            printf("Bluetooth Connectivity\n");
                                            printf("3 Air Bags\n");
                                            printf("2 Speakers\n");
                                            printf("Side Mirrors with Indicators\n");
                                            printf("Power Steering\n");
                                            printf("Rear Parking Camera\n");
                                            printf("Hill Assist Control\n");
                                            printf("Defogger\n");
                                            break;
                                        case 4:
                                            printf("Price:\n");
                                            printf("PKR 4,649,000\n");
                                            break;
                                        case 5:
                                            printf("THANKS FOR VISITING\n");
                                            break;
                                        default:
                                            printf("Invalid choice, please try again.\n");
                                            break;
                                    }
                                    break;

                                default:
                                    printf("Invalid choice, please try again.\n");
                                    break;
                            }
                            break;

                        case 3:
                            printf("\n===SUV===\n");
                            printf("\n===TOYOTA FORTUNER===\n");
                            printf("1.Toyota Fortuner G\n");
                            printf("2.Toyota Fortuner V\n");
                            printf("3.Toyota Fortuner Sigma 4\n");
                            printf("4.Toyota Fortuner Legender\n");
                            printf("\n===TOYOTA HILUX===\n");
                            printf("5.Toyota Hilux Single Cabin\n");
                            printf("6.Toyota Hilux E (Standard)\n");
                            printf("7.Toyota Hilux Revo G\n");
                            printf("8.Toyota Hilux Revo V\n");
                            printf("9.Toyota Hilux Revo Rocco\n");
                            printf("\nEnter Your Choice\n");
                            scanf("%d", &Car_model);
                            switch (Car_model)
                            {
                                case 1:
                                    printf("1.Toyota Fortuner G\n");
                                    printf("1.Car Colors:\n");
                                    printf("2.Car Specifications:\n");
                                    printf("3.Car Features:\n");
                                    printf("4.Price:\n");
                                    printf("5.Exit:\n");
                                    printf("What Do You Want?\n");
                                    scanf("%d", &Car_Details);
                                    break;
                                case 2:
                                    printf("2.Toyota Fortuner V\n");
                                    printf("1.Car Colors:\n");
                                    printf("2.Car Specifications:\n");
                                    printf("3.Car Features:\n");
                                    printf("4.Price:\n");
                                    printf("5.Exit:\n");
                                    printf("What Do You Want?\n");
                                    scanf("%d", &Car_Details);
                                    break;
                                case 3:
                                    printf("3.Toyota Fortuner Sigma 4\n");
                                    printf("1.Car Colors:\n");
                                    printf("2.Car Specifications:\n");
                                    printf("3.Car Features:\n");
                                    printf("4.Price:\n");
                                    printf("5.Exit:\n");
                                    printf("What Do You Want?\n");
                                    scanf("%d", &Car_Details);
                                    break;
                                case 4:
                                    printf("4.Toyota Fortuner Legender\n");
                                    printf("1.Car Colors:\n");
                                    printf("2.Car Specifications:\n");
                                    printf("3.Car Features:\n");
                                    printf("4.Price:\n");
                                    printf("5.Exit:\n");
                                    printf("What Do You Want?\n");
                                    scanf("%d", &Car_Details);
                                    break;
                                case 5:
                                    printf("5.Toyota Fortuner GR-S\n");
                                    printf("1.Car Colors:\n");
                                    printf("2.Car Specifications:\n");
                                    printf("3.Car Features:\n");
                                    printf("4.Price:\n");
                                    printf("5.Exit:\n");
                                    printf("What Do You Want?\n");
                                    scanf("%d", &Car_Details);
                                    break;
                                case 6:
                                    printf("6.Toyota Hilux Revo GR-S\n");
                                    printf("1.Car Colors:\n");
                                    printf("2.Car Specifications:\n");
                                    printf("3.Car Features:\n");
                                    printf("4.Price:\n");
                                    printf("5.Exit:\n");
                                    printf("What Do You Want?\n");
                                    scanf("%d", &Car_Details);
                                    break;
                                case 7:
                                    printf("7.Toyota Hilux Single Cabin\n");
                                    printf("1.Car Colors:\n");
                                    printf("2.Car Specifications:\n");
                                    printf("3.Car Features:\n");
                                    printf("4.Price:\n");
                                    printf("5.Exit:\n");
                                    printf("What Do You Want?\n");
                                    scanf("%d", &Car_Details);
                                    break;
                                case 8:
                                    printf("8.Toyota Hilux E (Standard)\n");
                                    printf("1.Car Colors:\n");
                                    printf("2.Car Specifications:\n");
                                    printf("3.Car Features:\n");
                                    printf("4.Price:\n");
                                    printf("5.Exit:\n");
                                    printf("What Do You Want?\n");
                                    scanf("%d", &Car_Details);
                                    break;
                                case 9:
                                    printf("9.Toyota Hilux Revo G\n");
                                    printf("1.Car Colors:\n");
                                    printf("2.Car Specifications:\n");
                                    printf("3.Car Features:\n");
                                    printf("4.Price:\n");
                                    printf("5.Exit:\n");
                                    printf("What Do You Want?\n");
                                    scanf("%d", &Car_Details);
                                    break;
                                default:
                                    printf("Invalid choice, please try again.\n");
                                    break;
                            }
                            break;

                        case 4:
                            printf("\n===GR(Gazoo Racing)===\n");
                            printf("1.Toyota Fortuner GR-S\n");
                            printf("2.Toyota Hilux Revo GR-S\n");
                            printf("\nEnter Your Choice\n");
                            scanf("%d", &Car_model);
                            switch (Car_model)
                            {
                                case 1:
                                    printf("1.Toyota Fortuner GR-S\n");
                                    printf("1.Car Colors:\n");
                                    printf("2.Car Specifications:\n");
                                    printf("3.Car Features:\n");
                                    printf("4.Price:\n");
                                    printf("5.Exit:\n");
                                    printf("What Do You Want?\n");
                                    scanf("%d", &Car_Details);
                                    break;
                                case 2:
                                    printf("2.Toyota Hilux Revo GR-S\n");
                                    printf("1.Car Colors:\n");
                                    printf("2.Car Specifications:\n");
                                    printf("3.Car Features:\n");
                                    printf("4.Price:\n");
                                    printf("5.Exit:\n");
                                    printf("What Do You Want?\n");
                                    scanf("%d", &Car_Details);
                                    break;
                                default:
                                    printf("Invalid choice, please try again.\n");
                                    break;
                            }
                            break;

                        default:
                            printf("Invalid choice, please try again.\n");
                            break;
                    }

                    // printf("1.Petrol:\n");
                    // printf("2.Diesel:\n");
                    // printf("3.Hybrid:\n");
                    break;
                case 2:
                    printf("Book Test Drive:\n");
                    break;
                case 3:
                    printf("Book Cars:\n");
                    break;
                case 4:
                    printf("Book Service:\n");
                    break;
                case 5:
                    printf("Thank You For Visiting:\n");
                    break;
                default:
                    printf("Invalid choice, please try again.\n");
            }
            
        }



        
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