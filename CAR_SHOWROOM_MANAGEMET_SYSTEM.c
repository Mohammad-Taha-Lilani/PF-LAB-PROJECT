#include <stdio.h>
#include <string.h>

void yariscolor()
{
    printf("Car Colors:\n");
    printf("1.White\n");
    printf("2.Silver\n");
    printf("3.Black\n");
    printf("4.Graphite Grey\n");
    printf("5.Blue\n");
}
void corollacolor()
{
    printf("Car Colors:\n");
    printf("1.Super White\n");
    printf("2.Silver Metallic\n");
    printf("3.Graphite Gray\n");
    printf("4.Strong Blue\n");
    printf("5.Phantom Brown\n");
    printf("6.Attitude Black\n");
}
void fortunercolor()
{
    printf("Car Colors:\n");
    printf("1.Super White\n");
    printf("2.Silver Metallic\n");
    printf("3.Graphite\n");
    printf("4.Phantom Brown\n");
    printf("5.Attitude Black\n");
}
void hiluxcolor()
{
    printf("Car Colors:\n");
    printf("1.Super White\n");
    printf("2.Metal Stream Metallic\n");
    printf("3.Attitude Black\n");
    printf("4.Celestite Grey\n");
}
void features(char keyless_entry[], char sunroof[], char airbags[], char speakers[], char smart_entry[], char pow_windows[], char anti_theft_alarm[], char defogger[], char rear_wipers[], char led_display[], char rear_park_cam[], char front_park_cam[], char rear_park_sensors[], char hill_assisst_cont[], char side_mirr_indic[], char drls[], char clim_ctrl[], char alloy[], char pust_strt[], char rect_mirr[], char vehi_stab_ctrl[], char dwnhill_assisst_ctrl[])
{
    printf("Keyless Entry: %s\n", keyless_entry);
    printf("Sunroof: %s\n", sunroof);
    printf("Airbags: %s\n", airbags);
    printf("Speakers: %s\n", speakers);
    printf("Smart Entry: %s\n", smart_entry);
    printf("Power Windows: %s\n", pow_windows);
    printf("Anti Theft Alarm: %s\n", anti_theft_alarm);
    printf("Defogger: %s\n", defogger);
    printf("Rear Wipers: %s\n", rear_wipers);
    printf("Led Display: %s\n", led_display);
    printf("Rear Parking Camera: %s\n", rear_park_cam);
    printf("Front Parking Camera: %s\n", front_park_cam);
    printf("Rear Parking Sensors: %s\n", rear_park_sensors);
    printf("Hill Assisst Control: %s\n", hill_assisst_cont);
    printf("Side Mirror With Indicators: %s\n", side_mirr_indic);
    printf("Daytime Running Lamps: %s\n", drls);
    printf("Climate Control: %s\n", clim_ctrl);
    printf("Alloy Rims: %s\n", alloy);
    printf("Push Start: %s\n", pust_strt);
    printf("Auto Retractable Side Mirrors: %s\n", rect_mirr);
    printf("Vehicle Stability Control: %s\n", vehi_stab_ctrl);
    printf("Down Hill Assisst Control: %s\n", dwnhill_assisst_ctrl);
}
void specs(char Engine[],char Engine_Displacement[],char Maximum_Power[],char Maximum_Torque[],char Transmission[],char Drive_Type[],char Fuel_Type[],int Seating_Capacity,char Fuel_Tank[],char Ground_Clearance[])
{
    printf("Engine: %s\n", Engine);
    printf("Engine Displacement: %s\n", Engine_Displacement);
    printf("Maximum Power: %s\n", Maximum_Power);
    printf("Maximum Torque: %s\n", Maximum_Torque);
    printf("Transmission: %s\n", Transmission);
    printf("Drive Type: %s\n", Drive_Type);
    printf("Fuel Type: %s\n", Fuel_Type);
    printf("Seating Capacity: %d\n", Seating_Capacity);
    printf("Fuel Tank: %s\n", Fuel_Tank);
    printf("Ground Clearance: %s\n", Ground_Clearance);
}
void getprice(char price[])
{
    printf("Price: %s\n", price);
}

void enterprice(char selectedprice[], int category, int model)
{
    switch (category)
    {
    case 1:
        switch (model)
        {
        case 1:strcpy(selectedprice, "PKR 4,649,000");break;
        case 2:
            strcpy(selectedprice, "PKR 4,649,000");
            break;
        case 3:
            strcpy(selectedprice, "PKR 4,649,000");
            break;
        case 4:
            strcpy(selectedprice, "PKR 4,649,000");
            break;
        case 5:
            strcpy(selectedprice, "PKR 4,649,000");
            break;
        case 6:
            strcpy(selectedprice, "PKR 4,649,000");
            break;
        default:
            strcpy(selectedprice, "Invalid Model");
            break;
        }
        break;

    case 2:
        switch (model)
        {
        case 1:
            strcpy(selectedprice, "PKR 6,202,000");
            break;
        case 2:
            strcpy(selectedprice, "PKR 6,802,000");
            break;
        case 3:
            strcpy(selectedprice, "PKR 7,339,000");
            break;
        case 4:
            strcpy(selectedprice, "PKR 7,029,000");
            break;
        case 5:
            strcpy(selectedprice, "PKR 7,669,000");
            break;
        case 6:
            strcpy(selectedprice, "PKR 7,709,000");
            break;
        default:
            strcpy(selectedprice, "Invalid Model");
            break;
        }
        break;

    case 3:
        switch (model)
        {
        case 1:
            strcpy(selectedprice, "PKR 12,435,000");
            break;
        case 2:
            strcpy(selectedprice, "PKR 14,935,000");
            break;
        case 3:
            strcpy(selectedprice, "PKR 18,539,000");
            break;
        case 4:
            strcpy(selectedprice, "PKR 19,569,000");
            break;
        case 5:
            strcpy(selectedprice, "PKR 10,100,000");
            break;
        case 6:
            strcpy(selectedprice, "PKR 11,379,000");
            break;
        case 7:
            strcpy(selectedprice, "PKR 12,329,000");
            break;
        case 8:
            strcpy(selectedprice, "PKR 14,279,000");
            break;
        case 9:
            strcpy(selectedprice, "PKR 14,869,000");
            break;
        default:
            strcpy(selectedprice, "Invalid Model");
            break;
        }
        break;

    case 4:
        switch (model)
        {
        case 1:
            strcpy(selectedprice, "PKR 20,499,000");
            break;
        case 2:
            strcpy(selectedprice, "PKR 15,839,000");
            break;
        default:
            strcpy(selectedprice, "Invalid Model");
            break;
        }
        break;

    default:
        strcpy(selectedprice, "Invalid Category");
        break;
    }
}
void compactsedan()
{
    printf("\n===COMPACT SEDAN===\n");
    printf("\n===TOYOTA YARIS===\n");
    printf("1.Toyota Yaris 1.3L GLI MT\n");
    printf("2.Toyota Yaris 1.3L GLI CVT\n");
    printf("3.Toyota Yaris 1.3L ATIV MT\n");
    printf("4.Toyota Yaris 1.3L ATIV CVT\n");
    printf("5.Toyota Yaris 1.5 ATIV X CVT - Beige Interior\n");
    printf("6.Toyota Yaris 1.5 ATIV X CVT - Black Interior\n");
}

void Sedan()
{
    printf("\n===SEDAN===\n");
    printf("\n===TOYOTA COROLLA===\n");
    printf("1.Toyota Corolla 1.6 MT\n");
    printf("2.Toyota Corolla 1.6 CVT-i\n");
    printf("3.Toyota Corolla 1.6 CVT-i Special Edition\n");
    printf("4.Toyota Corolla 1.8 CVT-i\n");
    printf("5.Toyota Corolla 1.8 CVT-i Grande - Beige Interior\n");
    printf("6.Toyota Corolla 1.8 CVT-i Grande - Black Interior\n");
}
void suv()
{
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
}

void GR()
{
    printf("\n===GR(Gazoo Racing)===\n");
    printf("1.Toyota Fortuner GR-S\n");
    printf("2.Toyota Hilux Revo GR-S\n");
}

void carcategory()
{
    printf("Category Of Cars:\n");
    printf("1.Compact Sedan:\n");
    printf("2.Sedan:\n");
    printf("3.SUV's:\n");
    printf("4.GR(Gazoo Racing):\n");
}

void getcategory(int category, char selectedcategory[])
{
    switch (category)
    {
    case 1:
        strcpy(selectedcategory, "Compact Sedan");
        break;
    case 2:
        strcpy(selectedcategory, "Sedan");
        break;
    case 3:
        strcpy(selectedcategory, "SUV");
        break;
    case 4:
        strcpy(selectedcategory, "GR (Gazoo Racing");
        break;
    default:
        strcpy(selectedcategory, "Invalid Category");
        break;
    }
}

void getmodel(int category, int model, char selectedmodel[])
{
    switch (category)
    {
    case 1:
        switch (model)
        {
        case 1:
            strcpy(selectedmodel, "Toyota Yaris 1.3L GLI MT");
            break;
        case 2:
            strcpy(selectedmodel, "Toyota Yaris 1.3L GLI CVT");
            break;
        case 3:
            strcpy(selectedmodel, "Toyota Yaris 1.3L ATIV MT");
            break;
        case 4:
            strcpy(selectedmodel, "Toyota Yaris 1.3L ATIV CVT");
            break;
        case 5:
            strcpy(selectedmodel, "Toyota Yaris 1.5L ATIV X CVT Beige Interior");
            break;
        case 6:
            strcpy(selectedmodel, "Toyota Yaris 1.5L ATIV X CVT Black Interior");
            break;
        default:
            strcpy(selectedmodel, "Invalid Model");
            break;
        }
        break;

    case 2:
        switch (model)
        {
        case 1:
            strcpy(selectedmodel, "Toyota Corolla 1.6 MT");
            break;
        case 2:
            strcpy(selectedmodel, "Toyota Corolla 1.6 CVT-i");
            break;
        case 3:
            strcpy(selectedmodel, "Toyota Corolla 1.6 CVT-i Special Edition");
            break;
        case 4:
            strcpy(selectedmodel, "Toyota Corolla 1.8 CVT-i");
            break;
        case 5:
            strcpy(selectedmodel, "Toyota Corolla 1.8 CVT-i Grande Beige Interior");
            break;
        case 6:
            strcpy(selectedmodel, "Toyota Corolla 1.8 CVT-i Grande Black Interior");
            break;
        default:
            strcpy(selectedmodel, "Invalid Model");
            break;
        }
        break;

    case 3:
        switch (model)
        {
        case 1:
            strcpy(selectedmodel, "Toyota Fortuner G");
            break;
        case 2:
            strcpy(selectedmodel, "Toyota Fortuner V");
            break;
        case 3:
            strcpy(selectedmodel, "Toyota Fortuner Sigma 4");
            break;
        case 4:
            strcpy(selectedmodel, "Toyota Fortuner Legender");
            break;
        case 5:
            strcpy(selectedmodel, "Toyota Hilux Single Cabin");
            break;
        case 6:
            strcpy(selectedmodel, "Toyota Hilux E (Standard)");
            break;
        case 7:
            strcpy(selectedmodel, "Toyota Hilux Revo G");
            break;
        case 8:
            strcpy(selectedmodel, "Toyota Hilux Revo V");
            break;
        case 9:
            strcpy(selectedmodel, "Toyota Hilux Revo Rocco");
            break;
        default:
            strcpy(selectedmodel, "Invalid Model");
            break;
        }
        break;

    case 4:
        switch (model)
        {
        case 1:
            strcpy(selectedmodel, "Toyota Fortuner GR-S");
            break;
        case 2:
            strcpy(selectedmodel, "Toyota Hilux Revo GR-S");
            break;
        default:
            strcpy(selectedmodel, "Invalid Model");
            break;
        }
        break;

    default:
        strcpy(selectedmodel, "Invalid Category");
        break;
    }
}
void getcolor(int category, int model, int color, char selectedcolor[])
{
    if (category == 1)
    {
        switch (color)
        {
        case 1:
            strcpy(selectedcolor, "White");
            break;
        case 2:
            strcpy(selectedcolor, "Silver");
            break;
        case 3:
            strcpy(selectedcolor, "Black");
            break;
        case 4:
            strcpy(selectedcolor, "Graphite Grey");
            break;
        case 5:
            strcpy(selectedcolor, "Blue");
            break;
        default:
            strcpy(selectedcolor, "Invalid Color");
            break;
        }
    }
    else if (category == 2)
    {
        switch (color)
        {
        case 1:
            strcpy(selectedcolor, "Super White");
            break;
        case 2:
            strcpy(selectedcolor, "Silver Metallic");
            break;
        case 3:
            strcpy(selectedcolor, "Graphite Gray");
            break;
        case 4:
            strcpy(selectedcolor, "Strong Blue");
            break;
        case 5:
            strcpy(selectedcolor, "Phantom Brown");
            break;
        case 6:
            strcpy(selectedcolor, "Attitude Black");
            break;
        default:
            strcpy(selectedcolor, "Invalid Color");
            break;
        }
    }
    else if (category == 3 || category == 4)
    {
        if ((category == 3 && model >= 1 && model <= 4) ||
            (category == 4 && model == 1))
        {

            switch (color)
            {
            case 1:
                strcpy(selectedcolor, "Super White");
                break;
            case 2:
                strcpy(selectedcolor, "Silver Metallic");
                break;
            case 3:
                strcpy(selectedcolor, "Graphite");
                break;
            case 4:
                strcpy(selectedcolor, "Phantom Brown");
                break;
            case 5:
                strcpy(selectedcolor, "Attitude Black");
                break;
            default:
                strcpy(selectedcolor, "Invalid Color");
                break;
            }
        }
        else if ((category == 3 && model >= 5 && model <= 9) ||
                 (category == 4 && model == 2))
        {

            switch (color)
            {
            case 1:
                strcpy(selectedcolor, "Super White");
                break;
            case 2:
                strcpy(selectedcolor, "Attitude Black");
                break;
            case 3:
                strcpy(selectedcolor, "Metal Stream Metallic");
                break;
            case 4:
                strcpy(selectedcolor, "Celestite Grey");
                break;
            case 5:
                strcpy(selectedcolor, "Dark Blue Mica Metallic");
                break;
            case 6:
                strcpy(selectedcolor, "Red Mica Metallic");
                break;
            default:
                strcpy(selectedcolor, "Invalid Color");
                break;
            }
        }
        else
        {
            strcpy(selectedcolor, "Invalid Model");
        }
    }
    else
    {
        strcpy(selectedcolor, "Invalid Category");
    }
}
void bookService(){
    int services, service_rate;
    int confirm;
    char name[50];
    char phone[20];
    char car_model[100];
    char registration[30];
    char service_name[50];

    printf("\n====================================\n");
    printf("          BOOK CAR SERVICE\n");
    printf("====================================\n");

    printf("\n==== Available Individual Services ====\n");
    printf("1. Oil Change - Rs. 5000\n");
    printf("2. Maintenance - Rs. 8000\n");
    printf("3. Car Wash - Rs. 2000\n");
    printf("4. Inspection - Rs. 7000\n");

    printf("\n==== Available Service Packages ====\n");
    printf("5. Basic Package - Rs. 6500\n");
    printf("   Oil Change, Car Wash\n");

    printf("\n6. Standard Package - Rs. 10500\n");
    printf("   Oil Change, Car Wash, Engine Tuning\n");

    printf("\n7. Premium Package - Rs. 13000\n");
    printf("   Oil Change, Car Wash, Engine Tuning, AC Service\n");

    printf("\nEnter your choice (1-7): ");
    scanf("%d", &services);

    switch (services)
    {
        case 1:
            service_rate = 5000;
            strcpy(service_name, "Oil Change");
            break;

        case 2:
            service_rate = 8000;
            strcpy(service_name, "Maintenance");
            break;

        case 3:
            service_rate = 2000;
            strcpy(service_name, "Car Wash");
            break;

        case 4:
            service_rate = 7000;
            strcpy(service_name, "Inspection");
            break;

        case 5:
            service_rate = 6500;
            strcpy(service_name, "Basic Package");
            break;

        case 6:
            service_rate = 10500;
            strcpy(service_name, "Standard Package");
            break;

        case 7:
            service_rate = 13000;
            strcpy(service_name, "Premium Package");
            break;

        default:
            printf("\nInvalid service choice!\n");
            return;
    }

    printf("\nEnter Customer Name: ");
    scanf(" %49[^\n]", name);

    printf("Enter Phone Number: ");
    scanf(" %19s", phone);

    printf("Enter Car Model: ");
    scanf(" %99[^\n]", car_model);

    printf("Enter Car Registration Number: ");
    scanf(" %29[^\n]", registration);

    printf("\n========== SERVICE SUMMARY ==========\n");
    printf("Customer Name: %s\n", name);
    printf("Phone Number: %s\n", phone);
    printf("Car Model: %s\n", car_model);
    printf("Registration Number: %s\n", registration);
    printf("Selected Service: %s\n", service_name);
    printf("Service Charges: Rs. %d\n", service_rate);

    printf("\nConfirm Service Booking?\n");
    printf("1. Confirm Booking\n");
    printf("2. Cancel Booking\n");
    printf("Enter choice: ");
    scanf("%d", &confirm);

    if (confirm == 1){
        printf("\n====================================\n");
        printf("       SERVICE BOOKING CONFIRMED\n");
        printf("====================================\n");
        printf("Customer: %s\n", name);
        printf("Car: %s\n", car_model);
        printf("Registration: %s\n", registration);
        printf("Service: %s\n", service_name);
        printf("Total Bill: Rs. %d\n", service_rate);
        printf("\nPlease visit our showroom for service.\n");
    }
    else if (confirm == 2){
        printf("\nService booking cancelled.\n");
    }
    else
    {
        printf("\nInvalid confirmation choice.\n");
    }
}
int main()
{
    int password = 12345678, Enteredpassword, i = 1, customer_choice, Car_category, Car_model, owner_choice;
    int Car_status, color, bookingstatus, filerchoice, installmentchoice;
    int choice, Car_Details;
    int car1, car2;
    int price1, price2;
    int engine1, engine2;
    int seats1, seats2;
    int airbags1, airbags2;
    int speakers1, speakers2;
    int transmission1, transmission2;
    char selectedcategory[50];
    char selectedmodel[100];
    char selectedcolor[50];
    char selectedprice[32], name[100], city[100], phonenumber[20];
    char filerstatus[4], installments[4];
    char testdate[20], testtime[20];
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
                owner_choice:
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
                    printf("Invalid choice, please try again.\n");
                    goto owner_choice;
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
            carcategory();
            printf("Enter Your Choice:\n");
            default_1:
            scanf("%d", &Car_category);
            switch (Car_category)
            {
            case 1:
               compactsedan();
                printf("\nEnter Car Model:");
                default_2:
                scanf("%d", &Car_model);
                switch (Car_model)
                {
                case 1:
                    do
                    {
                        printf("Toyota Yaris 1.3L GLI MT\n");
                        printf("1.Car Colors:\n");
                        printf("2.Car Specifications:\n");
                        printf("3.Car Features:\n");
                        printf("4.Price:\n");
                        printf("5.Exit:\n");
                        printf("What Do You Want?\n");
                        default_3:
                        scanf("%d", &Car_Details);
                        switch (Car_Details)
                        {
                        case 1:
                            yariscolor();
                            break;
                        case 2:
                            printf("Car Specifications:\n");
                            specs("1.3L 4-Cylinder Petrol", "1329 cc", "98 HP @ 6000 RPM", "123 Nm @ 4200 RPM", "5-Speed Manual", "FWD", "Petrol", 5, "42 Litres", "175 mm");
                            break;
                        case 3:
                            printf("Car Features:\n");
                            features("Yes", "No", "3", "2 Front Speakers", "No", "Yes", "Yes", "Yes", "No", "No", "No", "No", "Yes", "Yes", "Yes", "No", "No", "15-inch With Wheel Caps", "No", "No", "Yes", "No");
                            break;
                        case 4:
                            printf("Price:\n");
                            getprice("PKR 4,649,000");
                            break;
                        case 5:
                            printf("THANKS FOR VISITING\n");
                            break;
                        default:
                            printf("Invalid choice, please try again.\n");
                            goto default_3;
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
                    default_4:
                    scanf("%d", &Car_Details);
                    switch (Car_Details)
                    {
                    case 1:
                        yariscolor();
                        break;
                    case 2:
                        printf("Car Specifications:\n");
                       specs("1.3L 4-Cylinder Petrol", "1329 cc", "98 HP @ 6000 RPM", "123 Nm @ 4200 RPM", "7-Speed CVT", "FWD", "Petrol", 5, "42 Litres", "175 mm");
                        break;
                    case 3:
                        printf("Car Features:\n");
                        features("Yes", "No", "3", "2 Speakers", "No", "Yes", "Yes", "Yes", "No", "No", "Yes", "No", "Yes", "Yes", "Yes", "No", "No", "15-inch With Wheel Caps", "No", "No", "Yes", "No");

                        break;
                    case 4:
                        printf("Price:\n");
                        getprice("PKR 4,649,000");
                        break;
                    default:
                        printf("Invalid choice, please try again.\n");
                        goto default_4;
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
                    default_5:
                    scanf("%d", &Car_Details);
                    switch (Car_Details)
                    {
                    case 1:
                        yariscolor();
                        break;
                    case 2:
                        printf("Car Specifications:\n");
                        specs("1.3L 4-Cylinder Petrol", "1329 cc", "98 HP @ 6000 RPM", "123 Nm @ 4200 RPM", "5-Speed Manual", "FWD", "Petrol", 5, "42 Litres", "175 mm");
                        break;
                    case 3:
                        printf("Car Features:\n");
                        features("Yes", "No", "3", "2 Speakers", "No", "Yes", "Yes", "Yes", "No", "No", "Yes", "No", "Yes", "Yes", "Yes", "No", "No", "15-inch Alloy Rims", "No", "No", "Yes", "No");

                        break;
                    case 4:
                        printf("Price:\n");
                        getprice("PKR 4,649,000");
                        break;
                    default:
                        printf("Invalid choice, please try again.\n");
                        goto default_5;
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
                    default_6:
                    scanf("%d", &Car_Details);
                    switch (Car_Details)
                    {
                    case 1:
                        yariscolor();
                        break;
                    case 2:
                        printf("Car Specifications:\n");
                        specs("1.3L 4-Cylinder Petrol", "1329 cc", "98 HP @ 6000 RPM", "123 Nm @ 4200 RPM", "7-Speed CVT", "FWD", "Petrol", 5, "42 Litres", "175 mm");
                        break;
                    case 3:
                        printf("Car Features:\n");
                        features("Yes", "No", "3", "2 Speakers", "No", "Yes", "Yes", "Yes", "No", "No", "Yes", "No", "Yes", "Yes", "Yes", "No", "No", "15-inch Alloy Rims", "No", "No", "Yes", "No");

                        break;
                    case 4:
                        printf("Price:\n");
                        getprice("PKR 4,649,000");
                        break;
                    default:
                        printf("Invalid choice, please try again.\n");
                        goto default_6;
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
                    default_7:
                    scanf("%d", &Car_Details);
                    switch (Car_Details)
                    {
                    case 1:
                        yariscolor();
                        break;
                    case 2:
                        printf("Car Specifications:\n");
                        specs("1.5L 4-Cylinder Petrol", "1496 cc", "106 HP @ 6000 RPM", "140 Nm @ 4200 RPM", "7-Speed CVT", "FWD", "Petrol", 5, "42 Litres", "175 mm");
                        break;
                    case 3:
                        printf("Car Features:\n");
                        features("Yes", "No", "3", "4 Speakers", "Yes", "Yes", "Yes", "Yes", "No", "Yes", "Yes", "No", "Yes", "Yes", "Yes", "Yes", "Yes", "16-inch Alloy Rims", "Yes", "Yes", "Yes", "No");

                        break;
                    case 4:
                        printf("Price:\n");
                        getprice("PKR 4,649,000");
                        break;
                    default:
                        printf("Invalid choice, please try again.\n");
                        goto default_7;
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
                    default_8:
                    scanf("%d", &Car_Details);
                    switch (Car_Details)
                    {
                    case 1:
                        yariscolor();
                        break;
                    case 2:
                        printf("Car Specifications:\n");
                        specs("1.5L 4-Cylinder Petrol", "1496 cc", "106 HP @ 6000 RPM", "140 Nm @ 4200 RPM", "7-Speed CVT", "FWD", "Petrol", 5, "42 Litres", "175 mm");
                        break;
                    case 3:
                        printf("Car Features:\n");
                        features("Yes", "No", "3", "4 Speakers", "Yes", "Yes", "Yes", "Yes", "No", "Yes", "Yes", "No", "Yes", "Yes", "Yes", "Yes", "Yes", "16-inch Alloy Rims", "Yes", "Yes", "Yes", "No");

                        break;
                    case 4:
                        printf("Price:\n");
                        getprice("PKR 4,649,000");
                        break;
                    default:
                        printf("Invalid choice, please try again.\n");
                        goto default_8;
                    }
                    break;

                default:
                    printf("Invalid car model, please try again.\n");
                    goto default_2;
                }
                break;

            case 2:
                Sedan();
                printf("\nEnter Your Choice\n");
                default_9:
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
                    default_10:
                    scanf("%d", &Car_Details);
                    switch (Car_Details)
                    {
                    case 1:
                        corollacolor();
                        break;

                    case 2:
                        printf("Car Specifications:\n");
                        specs("1.6L 4-Cylinder Petrol", "1598 cc", "120 HP @ 6000 RPM", "154 Nm @ 5200 RPM", "6-Speed Manual", "FWD", "Petrol", 5, "55 Litres", "175 mm");
                        break;

                    case 3:
                        printf("Car Features:\n");
                        features("Yes", "No", "2", "6 Speakers", "No", "Yes", "Yes", "Yes", "No", "9-inch Touchscreen", "Yes", "No", "No", "No", "No", "No", "No", "Steel Rims", "No", "No", "No", "No");

                        break;

                    case 4:
                        printf("Price:\n");
                        getprice("PKR 6,202,000");
                        break;

                    case 5:
                        printf("THANKS FOR VISITING\n");
                        break;

                    default:
                        printf("Invalid choice, please try again.\n");
                        goto default_10;
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
                    default_11:
                    scanf("%d", &Car_Details);
                    switch (Car_Details)
                    {
                    case 1:
                        corollacolor();
                        break;

                    case 2:
                        printf("Car Specifications:\n");
                        specs("1.6L 4-Cylinder Petrol", "1598 cc", "120 HP @ 6000 RPM", "154 Nm @ 5200 RPM", "7-Speed CVT-i", "FWD", "Petrol", 5, "55 Litres", "175 mm");
                        break;

                    case 3:
                        printf("Car Features:\n");
                        features("Yes", "No", "2", "6 Speakers", "Yes", "Yes", "Yes", "Yes", "No", "9-inch Touchscreen", "Yes", "No", "No", "No", "Yes", "Yes", "No", "16-inch Alloy Rims", "No", "Yes", "No", "No");

                        break;

                    case 4:
                        printf("Price:\n");
                        getprice("PKR 6,802,000");
                        break;

                    case 5:
                        printf("THANKS FOR VISITING\n");
                        break;
                    default:
                        printf("Invalid choice, please try again.\n");
                        goto default_11;
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
                    default_12:
                    scanf("%d", &Car_Details);
                    switch (Car_Details)
                    {
                    case 1:
                        corollacolor();
                        break;

                    case 2:
                        printf("Car Specifications:\n");
                        specs("1.6L 4-Cylinder Petrol", "1598 cc", "120 HP @ 6000 RPM", "154 Nm @ 5200 RPM", "7-Speed CVT-i", "FWD", "Petrol", 5, "55 Litres", "175 mm");
                        break;

                    case 3:
                        printf("Car Features:\n");
                        features("Yes", "Yes", "2", "6 Speakers", "Yes", "Yes", "Yes", "Yes", "No", "9-inch Touchscreen", "Yes", "No", "No", "No", "Yes", "Yes", "Yes", "16-inch Alloy Rims", "Yes", "Yes", "No", "No");

                        break;

                    case 4:
                        printf("Price:\n");
                        getprice("PKR 7,339,000");
                        break;

                    case 5:
                        printf("THANKS FOR VISITING\n");
                        break;
                    default:
                        printf("Invalid choice, please try again.\n");
                        goto default_12;
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
                    default_13:
                    scanf("%d", &Car_Details);
                    switch (Car_Details)
                    {
                    case 1:
                        corollacolor();
                        break;

                    case 2:
                        printf("Car Specifications:\n");
                       specs("1.8L 4-Cylinder Petrol", "1798 cc", "138 HP @ 6400 RPM", "173 Nm @ 4000 RPM", "7-Speed Sport CVT-i", "FWD", "Petrol", 5, "55 Litres", "175 mm");
                        break;

                    case 3:
                        printf("Car Features:\n");
                        features("Yes", "No", "2", "6 Speakers", "Yes", "Yes", "Yes", "Yes", "No", "9-inch Touchscreen", "Yes", "No", "No", "No", "Yes", "Yes", "Yes", "16-inch Alloy Rims", "No", "Yes", "No", "No");

                        break;

                    case 4:
                        printf("Price:\n");
                        getprice("PKR 7,029,000");
                        break;

                    case 5:
                        printf("THANKS FOR VISITING\n");
                        break;
                    default:
                        printf("Invalid choice, please try again.\n");
                        goto default_13;
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
                    default_14:
                    scanf("%d", &Car_Details);
                    switch (Car_Details)
                    {
                    case 1:
                        corollacolor();
                        break;

                    case 2:
                        printf("Car Specifications:\n");
                        specs("1.8L 4-Cylinder Petrol", "1798 cc", "138 HP @ 6400 RPM", "173 Nm @ 4000 RPM", "7-Speed Sport CVT-i", "FWD", "Petrol", 5, "55 Litres", "175 mm");
                        break;

                    case 3:
                        printf("Car Features:\n");
                        features("Yes", "Yes", "2", "6 Speakers", "Yes", "Yes", "Yes", "Yes", "No", "9-inch Touchscreen", "Yes", "Yes", "Yes", "No", "Yes", "Yes", "Yes", "16-inch Alloy Rims", "Yes", "Yes", "Yes", "No");

                        break;

                    case 4:
                        printf("Price:\n");
                        getprice("PKR 7,669,000");
                        break;

                    case 5:
                        printf("THANKS FOR VISITING\n");
                        break;
                    default:
                        printf("Invalid choice, please try again.\n");
                        goto default_14;
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
                    default_15:
                    scanf("%d", &Car_Details);
                    switch (Car_Details)
                    {
                    case 1:
                        corollacolor();
                        break;

                    case 2:
                        printf("Car Specifications:\n");
                    specs("1.8L 4-Cylinder Petrol", "1798 cc", "138 HP @ 6400 RPM", "173 Nm @ 4000 RPM", "7-Speed Sport CVT-i", "FWD", "Petrol", 5, "55 Litres", "175 mm");
                        break;

                    case 3:
                        printf("Car Features:\n");
                        features("Yes", "Yes", "2", "6 Speakers", "Yes", "Yes", "Yes", "Yes", "No", "9-inch Touchscreen", "Yes", "Yes", "Yes", "No", "Yes", "Yes", "Yes", "16-inch Alloy Rims", "Yes", "Yes", "Yes", "No");

                        break;

                    case 4:
                        printf("Price:\n");
                        getprice("PKR 7,709,000");
                        break;

                    case 5:
                        printf("THANKS FOR VISITING\n");
                        break;
                    default:
                        printf("Invalid choice, please try again.\n");
                        goto default_15;
                    }
                    break;

                default:
                    printf("Invalid choice, please try again.\n");
                    goto default_9;
                }
                break;
            case 3:
                printf("\n===SUV===\n");
                suv();
                printf("\nEnter Your Choice\n");
                default_16:
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
                    default_17:
                    scanf("%d", &Car_Details);
                    switch (Car_Details)
                    {
                    case 1:
                        fortunercolor();
                        break;

                    case 2:
                        printf("Car Specifications:\n");
                        specs("2.7L 4-Cylinder Petrol", "2694 cc", "164 HP @ 5200 RPM", "245 Nm @ 4000 RPM", "6-Speed Automatic", "4x2", "Petrol", 7, "80 Litres", "279 mm");
                        break;

                    case 3:
                        printf("Car Features:\n");
                        features("Yes", "No", "2", "6 Speakers", "Yes", "Yes", "Yes", "Yes", "Yes", "Touchscreen Display", "Yes", "No", "Yes", "Yes", "Yes", "No", "Yes", "17-inch Alloy Wheels", "Yes", "Yes", "Yes", "Yes");

                        break;

                    case 4:
                        printf("Price:\n");
                        getprice("PKR 12,435,000");
                        break;

                    case 5:
                        printf("THANKS FOR VISITING\n");
                        break;

                    default:
                        printf("Invalid choice, please try again.\n");
                        goto default_17;
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
                    default_18:
                    scanf("%d", &Car_Details);
                    switch (Car_Details)
                    {
                    case 1:
                        fortunercolor();
                        break;

                    case 2:
                        printf("Car Specifications:\n");
                        specs("2.7L 4-Cylinder Petrol", "2694 cc", "164 HP @ 5200 RPM", "245 Nm @ 4000 RPM", "6-Speed Automatic", "4x4", "Petrol", 7, "80 Litres", "279 mm");
                        break;

                    case 3:
                        printf("Car Features:\n");
                        features("Yes", "No", "2", "6 Speakers", "Yes", "Yes", "Yes", "Yes", "Yes", "Touchscreen Display", "Yes", "No", "Yes", "Yes", "Yes", "Yes", "Yes", "17-inch Alloy Wheels", "Yes", "Yes", "Yes", "Yes");

                        break;

                    case 4:
                        printf("Price:\n");
                        getprice("PKR 14,935,000");
                        break;

                    case 5:
                        printf("THANKS FOR VISITING\n");
                        break;

                    default:
                        printf("Invalid choice, please try again.\n");
                        goto default_18;
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
                    default_19:
                    scanf("%d", &Car_Details);
                    switch (Car_Details)
                    {
                    case 1:
                        fortunercolor();
                        break;

                    case 2:
                        printf("Car Specifications:\n");
                        specs("2.8L 4-Cylinder Turbo Diesel", "2755 cc", "201 HP @ 3400 RPM", "500 Nm @ 2800 RPM", "6-Speed Automatic", "4x4", "Diesel", 7, "80 Litres", "279 mm");
                        break;

                    case 3:
                        printf("Car Features:\n");
                        features("Yes", "No", "2", "6 Speakers", "Yes", "Yes", "Yes", "Yes", "Yes", "Touchscreen Display", "Yes", "No", "Yes", "Yes", "Yes", "Yes", "Dual Zone Automatic", "18-inch Alloy Wheels", "Yes", "Yes", "Yes", "Yes");
                        break;

                    case 4:
                        printf("Price:\n");
                        getprice("PKR 18,539,000");
                        break;

                    case 5:
                        printf("THANKS FOR VISITING\n");
                        break;

                    default:
                        printf("Invalid choice, please try again.\n");
                        goto default_19;
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
                    default_20:
                    scanf("%d", &Car_Details);
                    switch (Car_Details)
                    {
                    case 1:
                        fortunercolor();
                        break;

                    case 2:
                        printf("Car Specifications:\n");
                       specs("2.8L 4-Cylinder Turbo Diesel", "2755 cc", "201 HP @ 3400 RPM", "500 Nm @ 2800 RPM", "6-Speed Automatic", "4x4", "Diesel", 7, "80 Litres", "279 mm");
                        break;

                    case 3:
                        printf("Car Features:\n");
                        features("Yes", "No", "2", "6 Speakers", "Yes", "Yes", "Yes", "Yes", "Yes", "Touchscreen Display", "Yes", "No", "Yes", "Yes", "Yes", "Yes", "Dual Zone Automatic", "18-inch Alloy Wheels", "Yes", "Yes", "Yes", "Yes");

                        break;

                    case 4:
                        printf("Price:\n");
                        getprice("PKR 19,569,000");
                        break;

                    case 5:
                        printf("THANKS FOR VISITING\n");
                        break;

                    default:
                        printf("Invalid choice, please try again.\n");
                        goto default_20;
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
                    default_21:
                    scanf("%d", &Car_Details);
                    switch (Car_Details)
                    {
                    case 1:
                        hiluxcolor();
                        break;

                    case 2:
                        printf("Car Specifications:\n");
                        specs("2.4L 4-Cylinder Diesel", "2393 cc", "147 HP @ 3400 RPM", "400 Nm @ 1600-2000 RPM", "5-Speed Manual", "4x2", "Diesel", 2, "80 Litres", "310 mm");
                        break;

                    case 3:
                        printf("Car Features:\n");
                        features("No", "No", "2", "2 Speakers", "No", "No", "Yes", "No", "No", "No", "No", "No", "No", "No", "No", "No", "Manual AC", "Steel Rims", "No", "No", "No", "No");

                        break;

                    case 4:
                        printf("Price:\n");
                        getprice("PKR 10,100,000");
                        break;

                    case 5:
                        printf("THANKS FOR VISITING\n");
                        break;

                    default:
                        printf("Invalid choice, please try again.\n");
                        goto default_21;
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
                    default_22:
                    scanf("%d", &Car_Details);
                    switch (Car_Details)
                    {
                    case 1:
                        hiluxcolor();
                        break;

                    case 2:
                        printf("Car Specifications:\n");
                        specs("2.8L 4-Cylinder Turbo Diesel", "2755 cc", "201 HP @ 3400 RPM", "420 Nm @ 1400-3400 RPM", "6-Speed Manual", "4x4", "Diesel", 5, "80 Litres", "310 mm");
                        break;

                    case 3:
                        printf("Car Features:\n");
                        features("Yes", "No", "2", "2 Speakers", "No", "Yes", "Yes", "Yes", "No", "9-inch Display", "Yes", "No", "No", "No", "No", "No", "Manual AC", "Steel Rims", "No", "No", "No", "No");
                         break;

                    case 4:
                        printf("Price:\n");
                        getprice("PKR 11,379,000");
                        break;

                    case 5:
                        printf("THANKS FOR VISITING\n");
                        break;

                    default:
                        printf("Invalid choice, please try again.\n");
                        goto default_22;
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
                    default_23:
                    scanf("%d", &Car_Details);
                    switch (Car_Details)
                    {
                    case 1:
                        hiluxcolor();
                        break;

                    case 2:
                        printf("Car Specifications:\n");
                        specs("2.8L 4-Cylinder Turbo Diesel", "2755 cc", "201 HP @ 3400 RPM", "420 Nm @ 1400-3400 RPM", "6-Speed Manual", "4x4", "Diesel", 5, "80 Litres", "310 mm");
                        break;

                    case 3:
                        printf("Car Features:\n");
                        features("Yes", "No", "2", "4 Speakers", "No", "Yes", "Yes", "Yes", "No", "9-inch Display", "Yes", "No", "No", "Yes", "Yes", "No", "Manual AC", "Alloy Wheels", "No", "Yes", "Yes", "No");
                        break;

                    case 4:
                        printf("Price:\n");
                        getprice("PKR 12,329,000");
                        break;

                    case 5:
                        printf("THANKS FOR VISITING\n");
                        break;

                    default:
                        printf("Invalid choice, please try again.\n");
                        goto default_23;
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
                    default_24:
                    scanf("%d", &Car_Details);
                    switch (Car_Details)
                    {
                    case 1:
                        hiluxcolor();
                        break;

                    case 2:
                        printf("Car Specifications:\n");
                        specs("2.8L 4-Cylinder Turbo Diesel", "2755 cc", "201 HP @ 3400 RPM", "500 Nm @ 1600-2800 RPM", "6-Speed Automatic", "4x4", "Diesel", 5, "80 Litres", "310 mm");
                        break;

                    case 3:
                        printf("Car Features:\n");
                        features("Yes", "No", "2", "6 Speakers", "Yes", "Yes", "Yes", "Yes", "No", "9-inch Display", "Yes", "No", "No", "Yes", "Yes", "Yes", "Dual Zone Automatic", "Alloy Wheels", "Yes", "Yes", "Yes", "No");

                        break;

                    case 4:
                        printf("Price:\n");
                        getprice("PKR 14,279,000");
                        break;

                    case 5:
                        printf("THANKS FOR VISITING\n");
                        break;

                    default:
                        printf("Invalid choice, please try again.\n");
                        goto default_24;
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
                    default_25:
                    scanf("%d", &Car_Details);
                    switch (Car_Details)
                    {
                    case 1:
                        hiluxcolor();
                        break;

                    case 2:
                        printf("Car Specifications:\n");
                       specs("2.8L 4-Cylinder Turbo Diesel", "2755 cc", "201 HP @ 3400 RPM", "500 Nm @ 1600-2800 RPM", "6-Speed Automatic", "4x4", "Diesel", 5, "80 Litres", "310 mm");
                        break;

                    case 3:
                        printf("Car Features:\n");
                        features("Yes", "No", "2", "6 Speakers", "Yes", "Yes", "Yes", "Yes", "No", "9-inch Display", "Yes", "No", "Yes", "Yes", "Yes", "Yes", "Dual Zone Automatic", "Alloy Wheels", "Yes", "Yes", "Yes", "No");
                        break;

                    case 4:
                        printf("Price:\n");
                        getprice("PKR 14,869,000");
                        break;

                    case 5:
                        printf("THANKS FOR VISITING\n");
                        break;

                    default:
                        printf("Invalid choice, please try again.\n");
                        goto default_25;
                    }
                    break;
                default:
                    printf("Invalid choice, please try again.\n");
                    goto default_16;
                }
                break;

            case 4:
                GR();
                printf("\nEnter Your Choice\n");
                default_26:
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
                    default_27:
                    scanf("%d", &Car_Details);
                    switch (Car_Details)
                    {
                    case 1:
                        fortunercolor();
                        break;

                    case 2:
                        printf("Car Specifications:\n");
                        specs("2.8L 4-Cylinder Turbo Diesel", "2755 cc", "201 HP @ 3400 RPM", "500 Nm @ 2800 RPM", "6-Speed Automatic", "4x4", "Diesel", 7, "80 Litres", "279 mm");
                        break;

                    case 3:
                        printf("Car Features:\n");
                        features("Yes", "No", "2", "6 Speakers", "Yes", "Yes", "Yes", "Yes", "Yes", "Touchscreen Display", "Yes", "No", "Yes", "Yes", "Yes", "Yes", "Dual Zone Automatic", "GR-S Alloy Wheels", "Yes", "Yes", "Yes", "Yes");

                        break;

                    case 4:
                        printf("Price:\n");
                        getprice("PKR 20,499,000\n");
                        break;

                    case 5:
                        printf("THANKS FOR VISITING\n");
                        break;

                    default:
                        printf("Invalid choice, please try again.\n");
                        goto default_27;
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
                    default_28:
                    scanf("%d", &Car_Details);
                    switch (Car_Details)
                    {
                    case 1:
                        hiluxcolor();
                        break;

                    case 2:
                        printf("Car Specifications:\n");
                        specs("2.8L 4-Cylinder Turbo Diesel", "2755 cc", "201 HP @ 3400 RPM", "500 Nm @ 2800 RPM", "6-Speed Automatic", "4x4", "Diesel", 5, "80 Litres", "310 mm");
                        break;

                    case 3:
                        printf("Car Features:\n");
                        features("Yes", "No", "2", "6 Speakers", "Yes", "Yes", "Yes", "Yes", "No", "9-inch Display", "360 Degree Camera", "Yes", "Yes", "Yes", "Yes", "Yes", "Dual Zone Automatic", "GR-S Alloy Wheels", "Yes", "Yes", "Yes", "No");

                        break;

                    case 4:
                        printf("Price:\n");
                        getprice("PKR 15,839,000\n");
                        break;

                    case 5:
                        printf("THANKS FOR VISITING\n");
                        break;

                    default:
                        printf("Invalid choice, please try again.\n");
                        goto default_28;
                    }
                    break;
                default:
                    printf("Invalid choice, please try again.\n");
                    goto default_26;
                }
                break;

            default:
                printf("Invalid choice, please try again.\n");
                goto default_1;
            }
            break;
        case 2:
            printf("Book Test Drive:\n");
            carcategory();

            td_category:
            printf("\nEnter Car Category: ");
            scanf("%d", &Car_category);

            if (Car_category < 1 || Car_category > 4)
            {
                printf("Invalid Category!\n");
                goto td_category;
            }

            getcategory(Car_category, selectedcategory);
            switch (Car_category)
            {
            case 1:
                compactsedan();
                break;
            case 2:
                Sedan();
                break;
            case 3:
                suv();
                break;
            case 4:
                GR();
                break;
            }

            td_model:
            printf("\nEnter Your Choice: ");
            scanf("%d", &Car_model);

            getmodel(Car_category, Car_model, selectedmodel);

            if (strcmp(selectedmodel, "Invalid Model") == 0)
            {
                printf("Invalid Model!, please try again\n");
                goto td_model;
            }

            printf("\n===== TEST DRIVE SELECTION =====\n");
            printf("Car Category: %s\n", selectedcategory);
            printf("Car Model: %s\n", selectedmodel);
            printf("Is Your Test Drive Booking Confirm\n");
            printf("1.Yes\n2.No\n");

            td_confirm:
            scanf("%d", &bookingstatus);
            switch (bookingstatus)
            {
            case 1:
                printf("Enter Your Name\n");
                scanf(" %29[^\n]", name);
                printf("Enter Your Phone Number\n");
                scanf(" %19[^\n]", phonenumber);
                printf("Enter Your City\n");
                scanf(" %29[^\n]", city);
                printf("Enter Preferred Date (DD/MM/YYYY)\n");
                scanf(" %19[^\n]", testdate);
                printf("Enter Preferred Time (e.g. 3:00 PM)\n");
                scanf(" %19[^\n]", testtime);

                printf("\n===== TEST DRIVE BOOKING SUMMARY =====\n");
                printf("Car Category: %s\n", selectedcategory);
                printf("Car Model: %s\n", selectedmodel);
                printf("Name: %s\n", name);
                printf("Contact: %s\n", phonenumber);
                printf("City: %s\n", city);
                printf("Date: %s\n", testdate);
                printf("Time: %s\n", testtime);
                printf("TEST DRIVE BOOKED\n");
                break;
            case 2:
                printf("Thankyou For Visiting\n");
                return 0;

            default:
                printf("Invalid Choice\n");
                goto td_confirm;
            }
            break;
        case 3:
            printf("Book Car:\n");
            carcategory();

            default_29:
            printf("\nEnter Car Category: ");
            scanf("%d", &Car_category);

            if (Car_category < 1 || Car_category > 4)
            {
                printf("Invalid Category!\n");
                goto default_29;
                break;
            }

            getcategory(Car_category, selectedcategory);
            switch (Car_category)
            {
            case 1:
                compactsedan();
                break;

            case 2:
                Sedan();
                break;

            case 3:
                suv();
                break;

            case 4:
                GR();
                break;

            default:
                printf("Invalid Car Category!\n");
                goto default_29;
            }
            default_model:
            printf("\nEnter Your Choice: ");
            scanf("%d", &Car_model);

            getmodel(Car_category, Car_model, selectedmodel);

            if (strcmp(selectedmodel, "Invalid Model") == 0)
            {
                printf("Invalid Model!, please try again\n");
                goto default_model;
                break;
            }

            if (Car_category == 1)
            {
                yariscolor();
            }
            else if (Car_category == 2)
            {
                corollacolor();
            }
            else if (Car_category == 3)
            {
                if (Car_model >= 1 && Car_model <= 4)
                {
                    fortunercolor();
                }
                else
                {
                    hiluxcolor();
                }
            }
            else if (Car_category == 4)
            {
                if (Car_model == 1)
                {
                    fortunercolor();
                }
                else
                {
                    hiluxcolor();
                }
            }
            default_color:
            printf("\nEnter Color Number: ");
            scanf("%d", &color);

            getcolor(Car_category, Car_model, color, selectedcolor);

            if (strcmp(selectedcolor, "Invalid Color") == 0 ||
                strcmp(selectedcolor, "Invalid Model") == 0)
            {
                printf("Invalid Color!\n");
                goto default_color;
                break;
            }
            enterprice(selectedprice, Car_category, Car_model);

            printf("\n===== SELECTION SUMMARY =====\n");
            printf("Car Category: %s\n", selectedcategory);
            printf("Car Model: %s\n", selectedmodel);
            printf("Selected Color: %s\n", selectedcolor);
            printf("Price: %s\n", selectedprice);
            printf("Is Your Booking Confirm\n");
            printf("1.Yes\n2.No\n");
            default_30:
            scanf("%d", &bookingstatus);
            switch (bookingstatus)
            {
            case 1:
                printf("Enter Your Name\n");
                scanf(" %29[^\n]", name);
                printf("Enter Your Phone Number\n");
                scanf(" %19[^\n]", phonenumber);
                printf("Enter Your City\n");
                scanf(" %29[^\n]", city);
                printf("Are You Filer\n");
                printf("1. Yes\n2. No\n");
                default_31:
                scanf("%d", &filerchoice);
                switch (filerchoice)
                {
                case 1:
                    strcpy(filerstatus, "Yes");
                    break;
                case 2:
                    strcpy(filerstatus, "No");
                    break;
                default:
                    printf("Invalid Choice\n");
                    goto default_31;
                }
                printf("Installment\n");
                printf("1.Yes\n2.No\n");
                default_32:
                scanf("%d",&installmentchoice);
                
                switch (installmentchoice)
                {
                case 1:
                    strcpy(installments, "Yes");
                    break;
                case 2:
                    strcpy(installments, "No");
                    break;
                default:
                    printf("Invalid Choice\n");
                    goto default_32;
                }
                printf("\n===== BOOKING SUMMARY =====\n");
                printf("Car Category: %s\n", selectedcategory);
                printf("Car Model: %s\n", selectedmodel);
                printf("Selected Color: %s\n", selectedcolor);
                printf("Price: %s\n", selectedprice);
                printf("Name: %s\n", name);
                printf("Contact: %s\n", phonenumber);
                printf("City: %s\n", city);
                printf("Filer: %s\n", filerstatus);
                printf("Installments: %s\n", installments);
                printf("BOOKING CONFIRMED\n");
                break;
            case 2:
                printf("Thankyou For Visiting\n");
                return 0;
                break;

            default:
                printf("Invalid Choice\n");
                goto default_30;
            }

            break;
            case 4:
                printf("Book Service:\n");
                bookService();
                break;
            case 5:
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
            }
        }
        break;
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
