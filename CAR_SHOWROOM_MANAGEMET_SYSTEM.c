#include <stdio.h>
int main()
{
    int password = 12345678, Enteredpassword, i = 1, customer_choice, Car_category, Car_model, owner_choice;
    int Car_status;
    int choice, Car_Details;
    printf("\n====================================\n");
    printf("\nWELCOME TO TOYATA PAKISTAN\n");
    printf("\n====================================\n");
    printf("SELECT FROM THE GIVEN OPTIONS\n");
    do
    {
        printf("1. Showroom Owner\n");
        printf("2. Customer\n");
        printf("3. Exit\n");
        printf("Enter choice:\n");
        scanf("%d", &choice);
    } while (choice < 1 || choice > 3);
    switch (choice)
    {
    case 1:
        while (i <= 3)
        {
            printf("Enter Password:");
            scanf("%d", &Enteredpassword);

            if (Enteredpassword == password)
            {
                printf("Access Granted\n");
                i = 4;
                printf("\n====================================\n");
                printf("SHOWROOM OWNER PORTAL\n");
                printf("\n====================================\n");
                printf("1.View Cars:\n");
                printf("2.Add Cars:\n");
                printf("3.Update Cars:\n");
                printf("4.Delete Cars:\n");
                printf("5.Exit:\n");
                printf("Enter your choice:\n");
                scanf("%d", &owner_choice);
                switch (owner_choice)
                {
                case 1:
                    printf("1.Available Cars:\n");
                    printf("2.Booked Cars:\n");
                    printf("3.Sold Cars:\n");
                    printf("4.Exit:\n");
                    printf("Enter your choice:\n");
                    scanf("%d", &Car_status);
                    break;

                case 2:
                    printf("Add Cars:\n");
                    break;
                
                case 3:
                    printf("Update Cars:\n");
                    break;
                
                case 4:
                    printf("Delete Cars:\n");
                    break;

                case 5:
                    printf("THANKS FOR VISITING\n");
                   
                    break;

                default:
                    break;
                }
            }

            i++;
            if (i <= 3)
            {
                printf("Incorrect Password, Try Again\n");
            }
        }

        if (i == 4 && Enteredpassword != password)
        {
            printf("Access Denied, You have exceeded the maximum number of attempts\n");
        }
        break;

    case 2:
    {
        do
        {
            printf("Welcome To Showroom:\n");
            printf("1.View Cars:\n");
            printf("2.Book Test Drive :\n");
            printf("3.Book Cars:\n");
            printf("4.Book Service:\n");
            printf("5.Compare Cars:\n");
            printf("6.Exit:\n");
            printf("Enter your choice:\n");
            scanf("%d", &customer_choice);

            if (customer_choice < 1 || customer_choice > 6)
            {
                printf("Invalid choice, please try again.\n");
            }
        } while (customer_choice < 1 || customer_choice > 5);

        switch (customer_choice)
        {
        case 1:
            printf("Category Of Cars:\n");
            printf("1.Compact Sedan:\n");
            printf("2.Sedan:\n");
            printf("3.SUV's:\n");
            printf("4.GR(Gazoo Racing):\n");
            printf("Enter Your Choice:\n");
            scanf("%d", &Car_category);
            switch (Car_category)
            {
            case 1:
                printf("\n===COMPACT SEDAN===\n");
                printf("\n===TOYOTA YARIS===\n");
                printf("1.Toyota Yaris 1.3L GLI MT\n");
                printf("2.Toyota Yaris 1.3L GLI CVT\n");
                printf("3.Toyota Yaris 1.3L ATIV MT\n");
                printf("4.Toyota Yaris 1.3L ATIV CVT\n");
                printf("5.Toyota Yaris 1.5 ATIV X CVT - Beige Interior\n");
                printf("6.Toyota Yaris 1.5 ATIV X CVT - Black Interio\n");
                printf("\nEnter Car Model:");
                scanf("%d", &Car_model);
                switch (Car_model)
                {
                case 1:
                    // taha
                    do
                    {
                        printf("Toyota Yaris 1.3L GLI MT\n");
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
                    } while (Car_Details != 5);
                    break;

                case 2:
                    printf("2.Toyota Yaris 1.3L GLI CVT\n");
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
                    default:
                        printf("Invalid choice, please try again.\n");
                        break;
                    }
                    break;

                case 3:
                    printf("3.Toyota Yaris 1.3L ATIV MT\n");
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
                    default:
                        printf("Invalid choice, please try again.\n");
                        break;
                    }
                    break;

                case 4:
                    printf("4.Toyota Yaris 1.3L ATIV CVT\n");
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
                    default:
                        printf("Invalid choice, please try again.\n");
                        break;
                    }
                    break;

                case 5:
                    printf("5.Toyota Yaris 1.5 ATIV X CVT - Beige Interior\n");
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
                    default:
                        printf("Invalid choice, please try again.\n");
                        break;
                    }
                    break;

                case 6:
                    printf("6.Toyota Yaris 1.5 ATIV X CVT - Black Interior\n");
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
                    default:
                        printf("Invalid choice, please try again.\n");
                        break;
                    }
                    break;

                default:
                    printf("Invalid car model, please try again.\n");
                    break;
                }
                break;

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
                        printf("1.Super White\n");
                        printf("2.Silver Metallic\n");
                        printf("3.Graphite Gray\n");
                        printf("4.Strong Blue\n");
                        printf("5.Phantom Brown\n");
                        printf("6.Attitude Black\n");
                        break;

                    case 2:
                        printf("Car Specifications:\n");
                        printf("Engine: 1.6L 4-Cylinder Petrol\n");
                        printf("Engine Displacement: 1598 cc\n");
                        printf("Maximum Power: 120 HP\n");
                        printf("Maximum Torque: 154 Nm\n");
                        printf("Transmission: 6-Speed Manual\n");
                        printf("Fuel Type: Petrol\n");
                        printf("Seating Capacity: 5\n");
                        printf("Fuel Tank: 55 Litres\n");
                        printf("Front Suspension: MacPherson Strut\n");
                        printf("Rear Suspension: Torsion Beam\n");
                        break;

                    case 3:
                        printf("Car Features:\n");
                        printf("Halogen Headlamps\n");
                        printf("LED Rear Lamps\n");
                        printf("Power Windows\n");
                        printf("Central Locking\n");
                        printf("4.2-inch Color TFT Display\n");
                        printf("9-inch Touchscreen Display\n");
                        printf("6 Speakers\n");
                        printf("Rear Camera\n");
                        printf("Dual SRS Air Bags\n");
                        printf("ABS with EBD and Brake Assist\n");
                        printf("ISOFIX Child Seat Anchors\n");
                        printf("Immobilizer\n");
                        break;

                    case 4:
                        printf("Price:\n");
                        printf("PKR 6,202,000\n");
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
                        printf("1.Super White\n");
                        printf("2.Silver Metallic\n");
                        printf("3.Graphite Gray\n");
                        printf("4.Strong Blue\n");
                        printf("5.Phantom Brown\n");
                        printf("6.Attitude Black\n");
                        break;

                    case 2:
                        printf("Car Specifications:\n");
                        printf("Engine: 1.6L 4-Cylinder Petrol\n");
                        printf("Engine Displacement: 1598 cc\n");
                        printf("Maximum Power: 120 HP\n");
                        printf("Maximum Torque: 154 Nm\n");
                        printf("Transmission: 7-Speed CVT-i\n");
                        printf("Fuel Type: Petrol\n");
                        printf("Seating Capacity: 5\n");
                        printf("Fuel Tank: 55 Litres\n");
                        printf("Front Suspension: MacPherson Strut\n");
                        printf("Rear Suspension: Torsion Beam\n");
                        break;

                    case 3:
                        printf("Car Features:\n");
                        printf("LED Projection Headlamps\n");
                        printf("Daytime Running Lamps\n");
                        printf("16-inch Aluminium Alloy Rims\n");
                        printf("Smart Entry\n");
                        printf("Power Retractable Mirrors\n");
                        printf("Eco Lamp with Monitor\n");
                        printf("4.2-inch Color TFT Display\n");
                        printf("9-inch Touchscreen Display\n");
                        printf("Rear Camera\n");
                        printf("6 Speakers\n");
                        printf("Dual SRS Air Bags\n");
                        printf("ABS with EBD and Brake Assist\n");
                        break;

                    case 4:
                        printf("Price:\n");
                        printf("PKR 6,802,000\n");
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
                        printf("1.Super White\n");
                        printf("2.Silver Metallic\n");
                        printf("3.Graphite Gray\n");
                        printf("4.Strong Blue\n");
                        printf("5.Phantom Brown\n");
                        printf("6.Attitude Black\n");
                        break;

                    case 2:
                        printf("Car Specifications:\n");
                        printf("Engine: 1.6L 4-Cylinder Petrol\n");
                        printf("Engine Displacement: 1598 cc\n");
                        printf("Maximum Power: 120 HP\n");
                        printf("Maximum Torque: 154 Nm\n");
                        printf("Transmission: 7-Speed CVT-i\n");
                        printf("Fuel Type: Petrol\n");
                        printf("Seating Capacity: 5\n");
                        printf("Fuel Tank: 55 Litres\n");
                        printf("Front Suspension: MacPherson Strut\n");
                        printf("Rear Suspension: Torsion Beam\n");
                        break;

                    case 3:
                        printf("Car Features:\n");
                        printf("LED Projection Headlamps\n");
                        printf("Daytime Running Lamps\n");
                        printf("16-inch Aluminium Alloy Rims\n");
                        printf("Automatic Climate Control\n");
                        printf("Sunroof\n");
                        printf("Push Start System\n");
                        printf("Smart Key with Panic Button\n");
                        printf("Smart Trunk Button\n");
                        printf("9-inch Touchscreen Display\n");
                        printf("Rear Camera\n");
                        printf("6 Speakers\n");
                        printf("Dual SRS Air Bags\n");
                        break;

                    case 4:
                        printf("Price:\n");
                        printf("PKR 7,339,000\n");
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
                        printf("1.Super White\n");
                        printf("2.Silver Metallic\n");
                        printf("3.Graphite Gray\n");
                        printf("4.Strong Blue\n");
                        printf("5.Phantom Brown\n");
                        printf("6.Attitude Black\n");
                        break;

                    case 2:
                        printf("Car Specifications:\n");
                        printf("Engine: 1.8L 4-Cylinder Petrol\n");
                        printf("Engine Displacement: 1798 cc\n");
                        printf("Maximum Power: 138 HP\n");
                        printf("Maximum Torque: 173 Nm\n");
                        printf("Transmission: 7-Speed Sport CVT-i\n");
                        printf("Fuel Type: Petrol\n");
                        printf("Seating Capacity: 5\n");
                        printf("Fuel Tank: 55 Litres\n");
                        printf("Front Suspension: MacPherson Strut\n");
                        printf("Rear Suspension: Torsion Beam\n");
                        break;

                    case 3:
                        printf("Car Features:\n");
                        printf("LED Projection Headlamps\n");
                        printf("Daytime Running Lamps\n");
                        printf("16-inch Aluminium Alloy Rims\n");
                        printf("Cruise Control\n");
                        printf("Sports Mode\n");
                        printf("Sequential Shiftmatic\n");
                        printf("Automatic Climate Control\n");
                        printf("4.2-inch Color TFT Display\n");
                        printf("9-inch Touchscreen Display\n");
                        printf("Rear Camera\n");
                        printf("6 Speakers\n");
                        printf("Dual SRS Air Bags\n");
                        break;

                    case 4:
                        printf("Price:\n");
                        printf("PKR 7,029,000\n");
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
                        printf("1.Super White\n");
                        printf("2.Silver Metallic\n");
                        printf("3.Graphite Gray\n");
                        printf("4.Strong Blue\n");
                        printf("5.Phantom Brown\n");
                        printf("6.Attitude Black\n");
                        break;

                    case 2:
                        printf("Car Specifications:\n");
                        printf("Engine: 1.8L 4-Cylinder Petrol\n");
                        printf("Engine Displacement: 1798 cc\n");
                        printf("Maximum Power: 138 HP\n");
                        printf("Maximum Torque: 173 Nm\n");
                        printf("Transmission: 7-Speed Sport CVT-i\n");
                        printf("Fuel Type: Petrol\n");
                        printf("Seating Capacity: 5\n");
                        printf("Fuel Tank: 55 Litres\n");
                        printf("Front Suspension: MacPherson Strut\n");
                        printf("Rear Suspension: Torsion Beam\n");
                        break;

                    case 3:
                        printf("Car Features:\n");
                        printf("Beige Interior\n");
                        printf("Partial Leather Seats\n");
                        printf("Sunroof\n");
                        printf("Push Start System\n");
                        printf("Smart Key with Panic Button\n");
                        printf("Cruise Control\n");
                        printf("Sports Mode\n");
                        printf("Paddle Shift\n");
                        printf("Auto Dimming Rear View Mirror\n");
                        printf("Auto Rain Sensor\n");
                        printf("Front and Rear Camera\n");
                        printf("Toyota Connect\n");
                        printf("Vehicle Stability Control\n");
                        break;

                    case 4:
                        printf("Price:\n");
                        printf("PKR 7,669,000\n");
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
                        printf("1.Super White\n");
                        printf("2.Silver Metallic\n");
                        printf("3.Graphite Gray\n");
                        printf("4.Strong Blue\n");
                        printf("5.Phantom Brown\n");
                        printf("6.Attitude Black\n");
                        break;

                    case 2:
                        printf("Car Specifications:\n");
                        printf("Engine: 1.8L 4-Cylinder Petrol\n");
                        printf("Engine Displacement: 1798 cc\n");
                        printf("Maximum Power: 138 HP\n");
                        printf("Maximum Torque: 173 Nm\n");
                        printf("Transmission: 7-Speed Sport CVT-i\n");
                        printf("Fuel Type: Petrol\n");
                        printf("Seating Capacity: 5\n");
                        printf("Fuel Tank: 55 Litres\n");
                        printf("Front Suspension: MacPherson Strut\n");
                        printf("Rear Suspension: Torsion Beam\n");
                        break;

                    case 3:
                        printf("Car Features:\n");
                        printf("Black Interior\n");
                        printf("Partial Leather Seats\n");
                        printf("Sunroof\n");
                        printf("Push Start System\n");
                        printf("Smart Key with Panic Button\n");
                        printf("Cruise Control\n");
                        printf("Sports Mode\n");
                        printf("Paddle Shift\n");
                        printf("Auto Dimming Rear View Mirror\n");
                        printf("Auto Rain Sensor\n");
                        printf("Front and Rear Camera\n");
                        printf("Toyota Connect\n");
                        printf("Vehicle Stability Control\n");
                        break;

                    case 4:
                        printf("Price:\n");
                        printf("PKR 7,709,000\n");
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
                    switch (Car_Details)
                    {
                    case 1:
                        printf("Car Colors:\n");
                        printf("1.Super White\n");
                        printf("2.Silver Metallic\n");
                        printf("3.Graphite\n");
                        printf("4.Phantom Brown\n");
                        printf("5.Attitude Black\n");
                        break;

                    case 2:
                        printf("Car Specifications:\n");
                        printf("Engine: 2.7L 4-Cylinder Petrol\n");
                        printf("Engine Displacement: 2694 cc\n");
                        printf("Maximum Power: 164 HP\n");
                        printf("Transmission: 6-Speed Automatic\n");
                        printf("Drive Type: 4x2\n");
                        printf("Fuel Type: Petrol\n");
                        printf("Seating Capacity: 7\n");
                        printf("Fuel Tank: 80 Litres\n");
                        printf("Ground Clearance: 279 mm\n");
                        printf("Front Suspension: Double Wishbone\n");
                        printf("Rear Suspension: 5-Link Coil Spring\n");
                        break;

                    case 3:
                        printf("Car Features:\n");
                        printf("Halogen Headlamps\n");
                        printf("LED Rear Lamps\n");
                        printf("17-inch Alloy Wheels\n");
                        printf("Power Windows\n");
                        printf("Keyless Entry\n");
                        printf("Push Start\n");
                        printf("Rear Camera\n");
                        printf("ABS with EBD and Brake Assist\n");
                        printf("Vehicle Stability Control\n");
                        printf("Hill Start Assist Control\n");
                        printf("Dual SRS Air Bags\n");
                        printf("Downhill Assist Control\n");
                        break;

                    case 4:
                        printf("Price:\n");
                        printf("PKR 12,435,000\n");
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
                    printf("2.Toyota Fortuner V\n");
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
                        printf("1.Super White\n");
                        printf("2.Silver Metallic\n");
                        printf("3.Graphite\n");
                        printf("4.Phantom Brown\n");
                        printf("5.Attitude Black\n");
                        break;

                    case 2:
                        printf("Car Specifications:\n");
                        printf("Engine: 2.7L 4-Cylinder Petrol\n");
                        printf("Engine Displacement: 2694 cc\n");
                        printf("Maximum Power: 164 HP\n");
                        printf("Transmission: 6-Speed Automatic\n");
                        printf("Drive Type: 4x4\n");
                        printf("Fuel Type: Petrol\n");
                        printf("Seating Capacity: 7\n");
                        printf("Fuel Tank: 80 Litres\n");
                        printf("Ground Clearance: 279 mm\n");
                        printf("Front Suspension: Double Wishbone\n");
                        printf("Rear Suspension: 5-Link Coil Spring\n");
                        break;

                    case 3:
                        printf("Car Features:\n");
                        printf("LED Headlamps\n");
                        printf("LED Daytime Running Lamps\n");
                        printf("17-inch Alloy Wheels\n");
                        printf("Leather Seats\n");
                        printf("Automatic Climate Control\n");
                        printf("Push Start\n");
                        printf("Cruise Control\n");
                        printf("Rear Camera\n");
                        printf("Vehicle Stability Control\n");
                        printf("Hill Start Assist Control\n");
                        printf("Downhill Assist Control\n");
                        printf("Dual SRS Air Bags\n");
                        break;

                    case 4:
                        printf("Price:\n");
                        printf("PKR 14,935,000\n");
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
                    printf("3.Toyota Fortuner Sigma 4\n");
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
                        printf("1.Super White\n");
                        printf("2.Silver Metallic\n");
                        printf("3.Graphite\n");
                        printf("4.Phantom Brown\n");
                        printf("5.Attitude Black\n");
                        break;

                    case 2:
                        printf("Car Specifications:\n");
                        printf("Engine: 2.8L 4-Cylinder Turbo Diesel\n");
                        printf("Engine Displacement: 2755 cc\n");
                        printf("Maximum Power: 201 HP\n");
                        printf("Maximum Torque: 500 Nm\n");
                        printf("Transmission: 6-Speed Automatic\n");
                        printf("Drive Type: 4x4\n");
                        printf("Fuel Type: Diesel\n");
                        printf("Seating Capacity: 7\n");
                        printf("Fuel Tank: 80 Litres\n");
                        printf("Ground Clearance: 279 mm\n");
                        break;

                    case 3:
                        printf("Car Features:\n");
                        printf("Bi-Beam LED Headlamps\n");
                        printf("LED Daytime Running Lamps\n");
                        printf("18-inch Alloy Wheels\n");
                        printf("Leather Seats\n");
                        printf("Dual Zone Automatic Climate Control\n");
                        printf("Push Start\n");
                        printf("Cruise Control\n");
                        printf("Rear Camera\n");
                        printf("Front and Rear Clearance Sonar\n");
                        printf("Downhill Assist Control\n");
                        printf("Vehicle Stability Control\n");
                        printf("Dual SRS Air Bags\n");
                        break;

                    case 4:
                        printf("Price:\n");
                        printf("PKR 18,539,000\n");
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
                    printf("4.Toyota Fortuner Legender\n");
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
                        printf("1.Super White\n");
                        printf("2.Silver Metallic\n");
                        printf("3.Graphite\n");
                        printf("4.Phantom Brown\n");
                        printf("5.Attitude Black\n");
                        break;

                    case 2:
                        printf("Car Specifications:\n");
                        printf("Engine: 2.8L 4-Cylinder Turbo Diesel\n");
                        printf("Engine Displacement: 2755 cc\n");
                        printf("Maximum Power: 201 HP\n");
                        printf("Maximum Torque: 500 Nm\n");
                        printf("Transmission: 6-Speed Automatic\n");
                        printf("Drive Type: 4x4\n");
                        printf("Fuel Type: Diesel\n");
                        printf("Seating Capacity: 7\n");
                        printf("Fuel Tank: 80 Litres\n");
                        printf("Ground Clearance: 279 mm\n");
                        break;

                    case 3:
                        printf("Car Features:\n");
                        printf("Bi-Beam LED Headlamps\n");
                        printf("LED Daytime Running Lamps\n");
                        printf("18-inch Alloy Wheels\n");
                        printf("Leather Seats\n");
                        printf("Dual Zone Automatic Climate Control\n");
                        printf("Smart Key\n");
                        printf("Push Start\n");
                        printf("Cruise Control\n");
                        printf("Front and Rear Clearance Sonar\n");
                        printf("Rear Camera\n");
                        printf("Downhill Assist Control\n");
                        printf("Vehicle Stability Control\n");
                        break;

                    case 4:
                        printf("Price:\n");
                        printf("PKR 19,569,000\n");
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
                    printf("5.Toyota Hilux Single Cabin\n");
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
                        printf("1.Super White\n");
                        printf("2.Silver Metallic\n");
                        printf("3.Attitude Black\n");
                        break;

                    case 2:
                        printf("Car Specifications:\n");
                        printf("Engine: 2.4L Diesel\n");
                        printf("Engine Displacement: 2393 cc\n");
                        printf("Transmission: 5-Speed Manual\n");
                        printf("Drive Type: 4x2\n");
                        printf("Fuel Type: Diesel\n");
                        printf("Seating Capacity: 2\n");
                        printf("Fuel Tank: 80 Litres\n");
                        printf("Front Suspension: Double Wishbone\n");
                        printf("Rear Suspension: Leaf Spring\n");
                        printf("Body Type: Single Cabin\n");
                        break;

                    case 3:
                        printf("Car Features:\n");
                        printf("Air Conditioning\n");
                        printf("Power Steering\n");
                        printf("Halogen Headlamps\n");
                        printf("Deck Guard Frame\n");
                        printf("ABS\n");
                        printf("Dual SRS Air Bags\n");
                        printf("Immobilizer\n");
                        printf("3-Point Seat Belts\n");
                        printf("High Mount Stop Lamp\n");
                        printf("Rear Mud Guards\n");
                        break;

                    case 4:
                        printf("Price:\n");
                        printf("PKR 10,100,000\n");
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
                    printf("6.Toyota Hilux E (Standard)\n");
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
                        printf("1.Super White\n");
                        printf("2.Silver Metallic\n");
                        printf("3.Attitude Black\n");
                        break;

                    case 2:
                        printf("Car Specifications:\n");
                        printf("Engine: 2.8L 4-Cylinder Diesel\n");
                        printf("Engine Displacement: 2755 cc\n");
                        printf("Maximum Power: 201 HP\n");
                        printf("Maximum Torque: 420 Nm\n");
                        printf("Transmission: 6-Speed Manual\n");
                        printf("Drive Type: 4x4\n");
                        printf("Fuel Type: Diesel\n");
                        printf("Seating Capacity: 5\n");
                        printf("Fuel Tank: 80 Litres\n");
                        printf("Body Type: Standard Wide\n");
                        break;

                    case 3:
                        printf("Car Features:\n");
                        printf("9-inch Capacitive Display\n");
                        printf("Bluetooth Connectivity\n");
                        printf("Apple CarPlay\n");
                        printf("Android Auto\n");
                        printf("2 Speakers\n");
                        printf("Rear Camera\n");
                        printf("Power Steering\n");
                        printf("Power Windows\n");
                        printf("Halogen Headlamps\n");
                        printf("ABS\n");
                        printf("Dual SRS Air Bags\n");
                        printf("Immobilizer\n");
                        break;

                    case 4:
                        printf("Price:\n");
                        printf("PKR 11,379,000\n");
                        break;

                    case 5:
                        printf("THANKS FOR VISITING\n");
                        break;

                    default:
                        printf("Invalid choice, please try again.\n");
                        break;
                    }
                    break;
                case 7:
                    printf("7.Toyota Hilux Revo G\n");
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
                        printf("1.Super White\n");
                        printf("2.Silver Metallic\n");
                        printf("3.Graphite\n");
                        printf("4.Attitude Black\n");
                        break;

                    case 2:
                        printf("Car Specifications:\n");
                        printf("Engine: 2.8L 4-Cylinder Turbo Diesel\n");
                        printf("Engine Displacement: 2755 cc\n");
                        printf("Maximum Power: 201 HP\n");
                        printf("Maximum Torque: 420 Nm\n");
                        printf("Transmission: 6-Speed Manual\n");
                        printf("Drive Type: 4x4\n");
                        printf("Fuel Type: Diesel\n");
                        printf("Seating Capacity: 5\n");
                        printf("Fuel Tank: 80 Litres\n");
                        printf("Body Type: Wide\n");
                        break;

                    case 3:
                        printf("Car Features:\n");
                        printf("9-inch Capacitive Display\n");
                        printf("Bluetooth Connectivity\n");
                        printf("Apple CarPlay\n");
                        printf("Android Auto\n");
                        printf("4 Speakers\n");
                        printf("Rear Camera\n");
                        printf("Power Windows\n");
                        printf("Power Retractable Mirrors\n");
                        printf("Smart Auto Headlamp System\n");
                        printf("Vehicle Stability Control\n");
                        printf("Hill Start Assist Control\n");
                        printf("Dual SRS Air Bags\n");
                        break;

                    case 4:
                        printf("Price:\n");
                        printf("PKR 12,329,000\n");
                        break;

                    case 5:
                        printf("THANKS FOR VISITING\n");
                        break;

                    default:
                        printf("Invalid choice, please try again.\n");
                        break;
                    }
                    break;
                case 8:
                    printf("8.Toyota Hilux Revo V\n");
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
                        printf("4.Dark Grey\n");
                        break;

                    case 2:
                        printf("Car Specifications:\n");
                        printf("Engine: 2.8L 4-Cylinder Diesel\n");
                        printf("Transmission: 6-Speed Automatic\n");
                        printf("Drive Type: 4x4\n");
                        printf("Fuel Type: Diesel\n");
                        printf("Seating Capacity: 5\n");
                        break;

                    case 3:
                        printf("Car Features:\n");
                        printf("Leather Seats\n");
                        printf("Dual Zone Automatic Climate Control\n");
                        printf("Bi-Beam LED Headlamps\n");
                        printf("LED Daytime Running Lamps\n");
                        printf("Push Start\n");
                        printf("Smart Key\n");
                        printf("9-inch Display\n");
                        printf("Apple CarPlay\n");
                        printf("Android Auto\n");
                        printf("6 Speakers\n");
                        printf("Rear Camera\n");
                        printf("ABS\n");
                        printf("Air Bags\n");
                        printf("Vehicle Stability Control\n");
                        break;

                    case 4:
                        printf("Price:\n");
                        printf("PKR 14,279,000\n");
                        break;

                    case 5:
                        printf("THANKS FOR VISITING\n");
                        break;

                    default:
                        printf("Invalid choice, please try again.\n");
                        break;
                    }
                    break;
                case 9:
                    printf("9.Toyota Hilux Revo Rocco\n");
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
                        printf("4.Dark Grey\n");
                        break;

                    case 2:
                        printf("Car Specifications:\n");
                        printf("Engine: 2.8L 4-Cylinder Diesel\n");
                        printf("Transmission: 6-Speed Automatic\n");
                        printf("Drive Type: 4x4\n");
                        printf("Fuel Type: Diesel\n");
                        printf("Seating Capacity: 5\n");
                        break;

                    case 3:
                        printf("Car Features:\n");
                        printf("Leather Seats\n");
                        printf("Dual Zone Automatic Climate Control\n");
                        printf("Bi-Beam LED Headlamps\n");
                        printf("LED Daytime Running Lamps\n");
                        printf("Rocco Exterior Styling\n");
                        printf("Push Start\n");
                        printf("Smart Key\n");
                        printf("9-inch Display\n");
                        printf("Apple CarPlay\n");
                        printf("Android Auto\n");
                        printf("6 Speakers\n");
                        printf("Rear Camera\n");
                        printf("Front and Rear Clearance Sonar\n");
                        printf("Vehicle Stability Control\n");
                        printf("ABS\n");
                        printf("Air Bags\n");
                        break;

                    case 4:
                        printf("Price:\n");
                        printf("PKR 14,869,000\n");
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
                    switch (Car_Details)
                    {
                    case 1:
                        printf("Car Colors:\n");
                        printf("1.Super White\n");
                        printf("2.Silver Metallic\n");
                        printf("3.Graphite\n");
                        printf("4.Phantom Brown\n");
                        printf("5.Attitude Black\n");
                        break;

                    case 2:
                        printf("Car Specifications:\n");
                        printf("Engine: 2.8L 4-Cylinder Turbo Diesel\n");
                        printf("Engine Displacement: 2755 cc\n");
                        printf("Maximum Power: 201 HP\n");
                        printf("Maximum Torque: 500 Nm\n");
                        printf("Transmission: 6-Speed Automatic\n");
                        printf("Drive Type: 4x4\n");
                        printf("Fuel Type: Diesel\n");
                        printf("Seating Capacity: 7\n");
                        printf("Fuel Tank: 80 Litres\n");
                        printf("Ground Clearance: 279 mm\n");
                        break;

                    case 3:
                        printf("Car Features:\n");
                        printf("GR-S Exterior Styling\n");
                        printf("GR-S Alloy Wheels\n");
                        printf("Bi-Beam LED Headlamps\n");
                        printf("LED Daytime Running Lamps\n");
                        printf("GR-S Leather Interior\n");
                        printf("Dual Zone Automatic Climate Control\n");
                        printf("GR-S Steering Wheel\n");
                        printf("Push Start\n");
                        printf("Cruise Control\n");
                        printf("Front and Rear Clearance Sonar\n");
                        printf("Downhill Assist Control\n");
                        printf("Vehicle Stability Control\n");
                        break;

                    case 4:
                        printf("Price:\n");
                        printf("PKR 20,499,000\n");
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
                    printf("2.Toyota Hilux Revo GR-S\n");
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
                        printf("1.Super White\n");
                        printf("2.Silver Metallic\n");
                        printf("3.Graphite\n");
                        printf("4.Attitude Black\n");
                        break;

                    case 2:
                        printf("Car Specifications:\n");
                        printf("Engine: 2.8L 4-Cylinder Turbo Diesel\n");
                        printf("Engine Displacement: 2755 cc\n");
                        printf("Maximum Power: 201 HP\n");
                        printf("Maximum Torque: 500 Nm\n");
                        printf("Transmission: 6-Speed Automatic\n");
                        printf("Drive Type: 4x4\n");
                        printf("Fuel Type: Diesel\n");
                        printf("Seating Capacity: 5\n");
                        printf("Fuel Tank: 80 Litres\n");
                        printf("Body Type: Wide\n");
                        break;

                    case 3:
                        printf("Car Features:\n");
                        printf("GR-S Exterior Styling\n");
                        printf("GR-S Design Over Fender\n");
                        printf("Bi-Beam LED Headlamps\n");
                        printf("LED Daytime Running Lamps\n");
                        printf("GR-S LED Fog Lamps\n");
                        printf("GR-S Leather Seats\n");
                        printf("GR-S Leather Steering Wheel\n");
                        printf("GR Smart Key\n");
                        printf("9-inch Capacitive Display\n");
                        printf("Apple CarPlay\n");
                        printf("Android Auto\n");
                        printf("6 Speakers\n");
                        printf("360 Degree View Camera\n");
                        printf("Front and Rear Clearance Sonar\n");
                        break;

                    case 4:
                        printf("Price:\n");
                        printf("PKR 15,839,000\n");
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
            int car1, car2;
            int price1, price2;
            int engine1, engine2;
            int seats1, seats2;
            int airbags1, airbags2;
            int speakers1, speakers2;
            int transmission1, transmission2;

            printf("\n===== COMPARE TWO CARS =====\n");
            printf("1. Toyota Yaris 1.3L GLI MT\n");
            printf("2. Toyota Corolla 1.6 MT\n");

            printf("Select First Car: ");
            scanf("%d", &car1);

            printf("Select Second Car: ");
            scanf("%d", &car2);

            if (car1 < 1 || car1 > 2 ||
                car2 < 1 || car2 > 2)
            {
                printf("Invalid car selection!\n");
                break;
            }

            if (car1 == car2)
            {
                printf("Please select two different cars.\n");
                break;
            }

            /* First Car */
            if (car1 == 1)
            {
                price1 = 4649000;
                engine1 = 1300;
                seats1 = 5;
                airbags1 = 3;
                speakers1 = 2;
                transmission1 = 5;
            }
            else
            {
                price1 = 6202000;
                engine1 = 1600;
                seats1 = 5;
                airbags1 = 2;
                speakers1 = 6;
                transmission1 = 6;
            }

            /* Second Car */
            if (car2 == 1)
            {
                price2 = 4649000;
                engine2 = 1300;
                seats2 = 5;
                airbags2 = 3;
                speakers2 = 2;
                transmission2 = 5;
            }
            else
            {
                price2 = 6202000;
                engine2 = 1600;
                seats2 = 5;
                airbags2 = 2;
                speakers2 = 6;
                transmission2 = 6;
            }

            printf("\n===== COMPARISON REPORT =====\n");

            printf("\nFirst Car: ");
            if (car1 == 1)
                printf("Toyota Yaris 1.3L GLI MT\n");
            else
                printf("Toyota Corolla 1.6 MT\n");

            printf("Second Car: ");
            if (car2 == 1)
                printf("Toyota Yaris 1.3L GLI MT\n");
            else
                printf("Toyota Corolla 1.6 MT\n");

            printf("\n===== PRICE COMPARISON =====\n");
            printf("First Car Price: PKR %d\n", price1);
            printf("Second Car Price: PKR %d\n", price2);

            if (price1 < price2)
            {
                printf("Cheaper Car: First Car\n");
                printf("Price Difference: PKR %d\n",
                    price2 - price1);
            }
            else
            {
                printf("Cheaper Car: Second Car\n");
                printf("Price Difference: PKR %d\n",
                    price1 - price2);
            }

            printf("\n===== SPECIFICATIONS =====\n");

            printf("Engine: %d cc vs %d cc\n",
                engine1, engine2);

            printf("Transmission: %d-speed vs %d-speed\n",
                transmission1, transmission2);

            printf("Fuel Type: Petrol vs Petrol\n");

            printf("Seating Capacity: %d vs %d\n",
                seats1, seats2);

            printf("\n===== FEATURES =====\n");

            printf("Air Bags: %d vs %d\n",
                airbags1, airbags2);

            printf("Speakers: %d vs %d\n",
                speakers1, speakers2);

            printf("\n===== END OF COMPARISON =====\n");

            break;

        case 6:
            printf("Thank You For Visiting:\n");
            break;
        default:
            printf("Invalid choice, please try again.\n");
        }

        if (choice == 1 || choice == 2)
        {
            printf("\n===CATEGORY 1===\n");
            printf("\n===TOYOTA YARIS===\n");
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
        break;
    }
    case 3:
        printf("THANKS FOR VISITING\n");
        break;
    default:
        printf("Enter your choice again\n");
        break;
    }
    return 0;
}
