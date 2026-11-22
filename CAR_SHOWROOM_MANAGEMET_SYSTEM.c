#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define AVAILABLE 1
#define BOOKED 2
#define SOLD 3

#define ACTIVE 1
#define COMPLETED 2
#define CANCELLED 3

struct Car
{
    int carID;
    int category;
    int model;
    char carName[100];
    char color[50];
    int purchaseCost;
    int sellingPrice;
    int status;
};

struct Expense
{
    int expenseID;
    char category[50];
    char description[100];
    int amount;
    char date[20];
};

struct Booking
{
    int bookingID;
    int carID;
    char carName[100];
    char color[50];
    char name[50];
    char phone[20];
    char cnic[20];
    char city[50];
    char address[100];
    char date[20];
    char time[20];
    int filer;
    int price;
    double taxAmount;
    double totalPrice;
    int installments;
    int months;
    double interestRate;
    double downPayment;
    double remaining;
    double totalAmount;
    double monthly;
    int status;
};

struct TestDrive
{
    int driveID;
    char carName[100];
    char name[50];
    char phone[20];
    char city[50];
    char date[20];
    char time[20];
};

struct Service
{
    int serviceID;
    char name[50];
    char phone[20];
    char carModel[100];
    char registration[30];
    char serviceName[50];
    int charge;
};

int readNumber()
{
    int number, c;

    while (scanf("%d", &number) != 1)
    {
        if (feof(stdin))
            exit(0);
        printf("Invalid input, please enter a number: ");
        while ((c = getchar()) != '\n' && c != EOF)
            ;
        if (c == EOF)
            exit(0);
    }
    while ((c = getchar()) != '\n' && c != EOF)
        ;
    return number;
}

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
    printf("2.Attitude Black\n");
    printf("3.Metal Stream Metallic\n");
    printf("4.Celestite Grey\n");
    printf("5.Dark Blue Mica Metallic\n");
    printf("6.Red Mica Metallic\n");
}

void features(char keyless_entry[], char sunroof[], char airbags[], char speakers[], char smart_entry[], char pow_windows[], char anti_theft_alarm[], char defogger[], char rear_wipers[], char led_display[], char rear_park_cam[], char front_park_cam[], char rear_park_sensors[], char hill_assisst_cont[], char side_mirr_indic[], char drls[], char clim_ctrl[], char alloy[], char pust_strt[], char rect_mirr[], char vehi_stab_ctrl[], char dwnhill_assisst_ctrl[])
{
    printf("Car Features:\n");
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

void specs(char Engine[], char Engine_Displacement[], char Maximum_Power[], char Maximum_Torque[], char Transmission[], char Drive_Type[], char Fuel_Type[], int Seating_Capacity, char Fuel_Tank[], char Ground_Clearance[])
{
    printf("Car Specifications:\n");
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

void carcategory()
{
    printf("\nCategory Of Cars:\n");
    printf("1.Compact Sedan\n");
    printf("2.Sedan\n");
    printf("3.SUV's\n");
    printf("4.GR(Gazoo Racing)\n");
}

<<<<<<< HEAD
=======
void enterprice(char selectedprice[], int category, int model, int *carprice)
{
    switch (category)
    {
    case 1:
        switch (model)
        {
        case 1:
            strcpy(selectedprice, "PKR 4,649,000");
            *carprice = 4649000;
            break;
        case 2:
            strcpy(selectedprice, "PKR 4,809,000");
            *carprice = 4809000;
            break;
        case 3:
            strcpy(selectedprice, "PKR 4,829,000");
            *carprice = 4829000;
            break;
        case 4:
            strcpy(selectedprice, "PKR 5,719,000");
            *carprice = 5719000;
            break;
        case 5:
            strcpy(selectedprice, "PKR 5,999,000");
            *carprice = 5999000;
            break;
        case 6:
            strcpy(selectedprice, "PKR 6,049,000");
            *carprice = 6049000;
            break;
        default:
            strcpy(selectedprice, "Invalid Model");
            *carprice = 0;
            break;
        }
        break;

    case 2:
        switch (model)
        {
        case 1:
            strcpy(selectedprice, "PKR 6,202,000");
            *carprice = 6202000;
            break;

        case 2:
            strcpy(selectedprice, "PKR 6,802,000");
            *carprice = 6802000;
            break;

        case 3:
            strcpy(selectedprice, "PKR 7,339,000");
            *carprice = 7339000;
            break;

        case 4:
            strcpy(selectedprice, "PKR 7,029,000");
            *carprice = 7029000;
            break;

        case 5:
            strcpy(selectedprice, "PKR 7,669,000");
            *carprice = 7669000;
            break;

        case 6:
            strcpy(selectedprice, "PKR 7,709,000");
            *carprice = 7709000;
            break;

        default:
            strcpy(selectedprice, "Invalid Model");
            *carprice = 0;
            break;
        }
        break;

    case 3:
        switch (model)
        {
        case 1:
            strcpy(selectedprice, "PKR 12,435,000");
            *carprice = 12435000;
            break;

        case 2:
            strcpy(selectedprice, "PKR 14,935,000");
            *carprice = 14935000;
            break;

        case 3:
            strcpy(selectedprice, "PKR 18,539,000");
            *carprice = 18539000;
            break;

        case 4:
            strcpy(selectedprice, "PKR 19,569,000");
            *carprice = 19569000;
            break;

        case 5:
            strcpy(selectedprice, "PKR 10,100,000");
            *carprice = 10100000;
            break;

        case 6:
            strcpy(selectedprice, "PKR 11,379,000");
            *carprice = 11379000;
            break;

        case 7:
            strcpy(selectedprice, "PKR 12,329,000");
            *carprice = 12329000;
            break;

        case 8:
            strcpy(selectedprice, "PKR 14,279,000");
            *carprice = 14279000;
            break;

        case 9:
            strcpy(selectedprice, "PKR 14,869,000");
            *carprice = 14869000;
            break;

        default:
            strcpy(selectedprice, "Invalid Model");
            *carprice = 0;
            break;
        }
        break;

    case 4:
        switch (model)
        {
        case 1:
            strcpy(selectedprice, "PKR 20,499,000");
            *carprice = 20499000;
            break;

        case 2:
            strcpy(selectedprice, "PKR 15,839,000");
            *carprice = 15839000;
            break;

        default:
            strcpy(selectedprice, "Invalid Model");
            *carprice = 0;
            break;
        }
        break;

    default:
        strcpy(selectedprice, "Invalid Category");
        *carprice = 0;
        break;
    }
}
>>>>>>> 9e61897d22f9e8416d18111c2da89a348aeb7d12
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

void showModels(int category)
{
    switch (category)
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
        strcpy(selectedcategory, "GR (Gazoo Racing)");
        break;
    default:
        strcpy(selectedcategory, "Invalid Category");
        break;
    }
}

void getstatus(int status, char text[])
{
    if (status == AVAILABLE)
        strcpy(text, "Available");
    else if (status == BOOKED)
        strcpy(text, "Booked");
    else
        strcpy(text, "Sold");
}

void getbookingstatus(int status, char text[])
{
    if (status == ACTIVE)
        strcpy(text, "Booked");
    else if (status == COMPLETED)
        strcpy(text, "Sold");
    else
        strcpy(text, "Cancelled");
}

int getModelCount(int category)
{
    if (category == 1 || category == 2)
        return 6;
    if (category == 3)
        return 9;
    if (category == 4)
        return 2;
    return 0;
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

int getCarPrice(int category, int model)
{
    switch (category)
    {
    case 1:
        switch (model)
        {
        case 1: return 4649000;
        case 2: return 4809000;
        case 3: return 4829000;
        case 4: return 5719000;
        case 5: return 5999000;
        case 6: return 6049000;
        }
        break;
    case 2:
        switch (model)
        {
        case 1: return 6202000;
        case 2: return 6802000;
        case 3: return 7339000;
        case 4: return 7029000;
        case 5: return 7669000;
        case 6: return 7709000;
        }
        break;
    case 3:
        switch (model)
        {
        case 1: return 12435000;
        case 2: return 14935000;
        case 3: return 18539000;
        case 4: return 19569000;
        case 5: return 10100000;
        case 6: return 11379000;
        case 7: return 12329000;
        case 8: return 14279000;
        case 9: return 14869000;
        }
        break;
    case 4:
        switch (model)
        {
        case 1: return 20499000;
        case 2: return 15839000;
        }
        break;
    }
    return 0;
}

int colorCount(int category, int model)
{
    if (category == 1)
        return 5;
    if (category == 2)
        return 6;
    if (category == 3 && model <= 4)
        return 5;
    if (category == 4 && model == 1)
        return 5;
    return 6;
}

void showColors(int category, int model)
{
    if (category == 1)
        yariscolor();
    else if (category == 2)
        corollacolor();
    else if (category == 3 && model <= 4)
        fortunercolor();
    else if (category == 4 && model == 1)
        fortunercolor();
    else
        hiluxcolor();
}

void getcolor(int category, int model, int color, char selectedcolor[])
{
    char yaris[5][30] = {"White", "Silver", "Black", "Graphite Grey", "Blue"};
    char corolla[6][30] = {"Super White", "Silver Metallic", "Graphite Gray", "Strong Blue", "Phantom Brown", "Attitude Black"};
    char fortuner[5][30] = {"Super White", "Silver Metallic", "Graphite", "Phantom Brown", "Attitude Black"};
    char hilux[6][30] = {"Super White", "Attitude Black", "Metal Stream Metallic", "Celestite Grey", "Dark Blue Mica Metallic", "Red Mica Metallic"};

    if (color < 1 || color > colorCount(category, model))
    {
        strcpy(selectedcolor, "Invalid Color");
        return;
    }
    if (category == 1)
        strcpy(selectedcolor, yaris[color - 1]);
    else if (category == 2)
        strcpy(selectedcolor, corolla[color - 1]);
    else if (category == 3 && model <= 4)
        strcpy(selectedcolor, fortuner[color - 1]);
    else if (category == 4 && model == 1)
        strcpy(selectedcolor, fortuner[color - 1]);
    else
        strcpy(selectedcolor, hilux[color - 1]);
}

void showSpecs(int category, int model)
{
    switch (category)
    {
    case 1:
        switch (model)
        {
        case 1:
            specs("1.3L 4-Cylinder Petrol", "1329 cc", "98 HP @ 6000 RPM", "123 Nm @ 4200 RPM", "5-Speed Manual", "FWD", "Petrol", 5, "42 Litres", "175 mm");
            break;
        case 2:
            specs("1.3L 4-Cylinder Petrol", "1329 cc", "98 HP @ 6000 RPM", "123 Nm @ 4200 RPM", "7-Speed CVT", "FWD", "Petrol", 5, "42 Litres", "175 mm");
            break;
        case 3:
            specs("1.3L 4-Cylinder Petrol", "1329 cc", "98 HP @ 6000 RPM", "123 Nm @ 4200 RPM", "5-Speed Manual", "FWD", "Petrol", 5, "42 Litres", "175 mm");
            break;
        case 4:
            specs("1.3L 4-Cylinder Petrol", "1329 cc", "98 HP @ 6000 RPM", "123 Nm @ 4200 RPM", "7-Speed CVT", "FWD", "Petrol", 5, "42 Litres", "175 mm");
            break;
        case 5:
        case 6:
            specs("1.5L 4-Cylinder Petrol", "1496 cc", "106 HP @ 6000 RPM", "140 Nm @ 4200 RPM", "7-Speed CVT", "FWD", "Petrol", 5, "42 Litres", "175 mm");
            break;
        }
        break;

    case 2:
        switch (model)
        {
        case 1:
            specs("1.6L 4-Cylinder Petrol", "1598 cc", "120 HP @ 6000 RPM", "154 Nm @ 5200 RPM", "6-Speed Manual", "FWD", "Petrol", 5, "55 Litres", "175 mm");
            break;
        case 2:
        case 3:
            specs("1.6L 4-Cylinder Petrol", "1598 cc", "120 HP @ 6000 RPM", "154 Nm @ 5200 RPM", "7-Speed CVT-i", "FWD", "Petrol", 5, "55 Litres", "175 mm");
            break;
        case 4:
        case 5:
        case 6:
            specs("1.8L 4-Cylinder Petrol", "1798 cc", "138 HP @ 6400 RPM", "173 Nm @ 4000 RPM", "7-Speed Sport CVT-i", "FWD", "Petrol", 5, "55 Litres", "175 mm");
            break;
        }
        break;

    case 3:
        switch (model)
        {
        case 1:
            specs("2.7L 4-Cylinder Petrol", "2694 cc", "164 HP @ 5200 RPM", "245 Nm @ 4000 RPM", "6-Speed Automatic", "4x2", "Petrol", 7, "80 Litres", "279 mm");
            break;
        case 2:
            specs("2.7L 4-Cylinder Petrol", "2694 cc", "164 HP @ 5200 RPM", "245 Nm @ 4000 RPM", "6-Speed Automatic", "4x4", "Petrol", 7, "80 Litres", "279 mm");
            break;
        case 3:
        case 4:
            specs("2.8L 4-Cylinder Turbo Diesel", "2755 cc", "201 HP @ 3400 RPM", "500 Nm @ 2800 RPM", "6-Speed Automatic", "4x4", "Diesel", 7, "80 Litres", "279 mm");
            break;
        case 5:
            specs("2.4L 4-Cylinder Diesel", "2393 cc", "147 HP @ 3400 RPM", "400 Nm @ 1600-2000 RPM", "5-Speed Manual", "4x2", "Diesel", 2, "80 Litres", "310 mm");
            break;
        case 6:
        case 7:
            specs("2.8L 4-Cylinder Turbo Diesel", "2755 cc", "201 HP @ 3400 RPM", "420 Nm @ 1400-3400 RPM", "6-Speed Manual", "4x4", "Diesel", 5, "80 Litres", "310 mm");
            break;
        case 8:
        case 9:
            specs("2.8L 4-Cylinder Turbo Diesel", "2755 cc", "201 HP @ 3400 RPM", "500 Nm @ 1600-2800 RPM", "6-Speed Automatic", "4x4", "Diesel", 5, "80 Litres", "310 mm");
            break;
        }
        break;

    case 4:
        switch (model)
        {
        case 1:
            specs("2.8L 4-Cylinder Turbo Diesel", "2755 cc", "201 HP @ 3400 RPM", "500 Nm @ 2800 RPM", "6-Speed Automatic", "4x4", "Diesel", 7, "80 Litres", "279 mm");
            break;
        case 2:
            specs("2.8L 4-Cylinder Turbo Diesel", "2755 cc", "201 HP @ 3400 RPM", "500 Nm @ 2800 RPM", "6-Speed Automatic", "4x4", "Diesel", 5, "80 Litres", "310 mm");
            break;
        }
        break;
    }
}

void showFeatures(int category, int model)
{
    switch (category)
    {
    case 1:
        switch (model)
        {
        case 1:
            features("Yes", "No", "3", "2 Front Speakers", "No", "Yes", "Yes", "Yes", "No", "No", "No", "No", "Yes", "Yes", "Yes", "No", "No", "15-inch With Wheel Caps", "No", "No", "Yes", "No");
            break;
        case 2:
            features("Yes", "No", "3", "2 Speakers", "No", "Yes", "Yes", "Yes", "No", "No", "Yes", "No", "Yes", "Yes", "Yes", "No", "No", "15-inch With Wheel Caps", "No", "No", "Yes", "No");
            break;
        case 3:
        case 4:
            features("Yes", "No", "3", "2 Speakers", "No", "Yes", "Yes", "Yes", "No", "No", "Yes", "No", "Yes", "Yes", "Yes", "No", "No", "15-inch Alloy Rims", "No", "No", "Yes", "No");
            break;
        case 5:
        case 6:
            features("Yes", "No", "3", "4 Speakers", "Yes", "Yes", "Yes", "Yes", "No", "Yes", "Yes", "No", "Yes", "Yes", "Yes", "Yes", "Yes", "16-inch Alloy Rims", "Yes", "Yes", "Yes", "No");
            break;
        }
        break;

    case 2:
        switch (model)
        {
        case 1:
            features("Yes", "No", "2", "6 Speakers", "No", "Yes", "Yes", "Yes", "No", "9-inch Touchscreen", "Yes", "No", "No", "No", "No", "No", "No", "Steel Rims", "No", "No", "No", "No");
            break;
        case 2:
            features("Yes", "No", "2", "6 Speakers", "Yes", "Yes", "Yes", "Yes", "No", "9-inch Touchscreen", "Yes", "No", "No", "No", "Yes", "Yes", "No", "16-inch Alloy Rims", "No", "Yes", "No", "No");
            break;
        case 3:
            features("Yes", "Yes", "2", "6 Speakers", "Yes", "Yes", "Yes", "Yes", "No", "9-inch Touchscreen", "Yes", "No", "No", "No", "Yes", "Yes", "Yes", "16-inch Alloy Rims", "Yes", "Yes", "No", "No");
            break;
        case 4:
            features("Yes", "No", "2", "6 Speakers", "Yes", "Yes", "Yes", "Yes", "No", "9-inch Touchscreen", "Yes", "No", "No", "No", "Yes", "Yes", "Yes", "16-inch Alloy Rims", "No", "Yes", "No", "No");
            break;
        case 5:
        case 6:
            features("Yes", "Yes", "2", "6 Speakers", "Yes", "Yes", "Yes", "Yes", "No", "9-inch Touchscreen", "Yes", "Yes", "Yes", "No", "Yes", "Yes", "Yes", "16-inch Alloy Rims", "Yes", "Yes", "Yes", "No");
            break;
        }
        break;

    case 3:
        switch (model)
        {
        case 1:
            features("Yes", "No", "2", "6 Speakers", "Yes", "Yes", "Yes", "Yes", "Yes", "Touchscreen Display", "Yes", "No", "Yes", "Yes", "Yes", "No", "Yes", "17-inch Alloy Wheels", "Yes", "Yes", "Yes", "Yes");
            break;
        case 2:
            features("Yes", "No", "2", "6 Speakers", "Yes", "Yes", "Yes", "Yes", "Yes", "Touchscreen Display", "Yes", "No", "Yes", "Yes", "Yes", "Yes", "Yes", "17-inch Alloy Wheels", "Yes", "Yes", "Yes", "Yes");
            break;
        case 3:
        case 4:
            features("Yes", "No", "2", "6 Speakers", "Yes", "Yes", "Yes", "Yes", "Yes", "Touchscreen Display", "Yes", "No", "Yes", "Yes", "Yes", "Yes", "Dual Zone Automatic", "18-inch Alloy Wheels", "Yes", "Yes", "Yes", "Yes");
            break;
        case 5:
            features("No", "No", "2", "2 Speakers", "No", "No", "Yes", "No", "No", "No", "No", "No", "No", "No", "No", "No", "Manual AC", "Steel Rims", "No", "No", "No", "No");
            break;
        case 6:
            features("Yes", "No", "2", "2 Speakers", "No", "Yes", "Yes", "Yes", "No", "9-inch Display", "Yes", "No", "No", "No", "No", "No", "Manual AC", "Steel Rims", "No", "No", "No", "No");
            break;
        case 7:
            features("Yes", "No", "2", "4 Speakers", "No", "Yes", "Yes", "Yes", "No", "9-inch Display", "Yes", "No", "No", "Yes", "Yes", "No", "Manual AC", "Alloy Wheels", "No", "Yes", "Yes", "No");
            break;
        case 8:
            features("Yes", "No", "2", "6 Speakers", "Yes", "Yes", "Yes", "Yes", "No", "9-inch Display", "Yes", "No", "No", "Yes", "Yes", "Yes", "Dual Zone Automatic", "Alloy Wheels", "Yes", "Yes", "Yes", "No");
            break;
        case 9:
            features("Yes", "No", "2", "6 Speakers", "Yes", "Yes", "Yes", "Yes", "No", "9-inch Display", "Yes", "No", "Yes", "Yes", "Yes", "Yes", "Dual Zone Automatic", "Alloy Wheels", "Yes", "Yes", "Yes", "No");
            break;
        }
        break;

    case 4:
        switch (model)
        {
        case 1:
            features("Yes", "No", "2", "6 Speakers", "Yes", "Yes", "Yes", "Yes", "Yes", "Touchscreen Display", "Yes", "No", "Yes", "Yes", "Yes", "Yes", "Dual Zone Automatic", "GR-S Alloy Wheels", "Yes", "Yes", "Yes", "Yes");
            break;
        case 2:
            features("Yes", "No", "2", "6 Speakers", "Yes", "Yes", "Yes", "Yes", "No", "9-inch Display", "360 Degree Camera", "Yes", "Yes", "Yes", "Yes", "Yes", "Dual Zone Automatic", "GR-S Alloy Wheels", "Yes", "Yes", "Yes", "No");
            break;
        }
        break;
    }
}

int getNextID(char filename[], int recordSize)
{
    FILE *fp;
    int id, maxID = 0;

    fp = fopen(filename, "rb");
    if (fp == NULL)
        return 1;
    while (fread(&id, sizeof(int), 1, fp) == 1)
    {
        if (id > maxID)
            maxID = id;
        fseek(fp, (long)(recordSize - sizeof(int)), SEEK_CUR);
    }
    fclose(fp);
    return maxID + 1;
}

int loadCar(int carID, struct Car *selectedCar)
{
    FILE *fp;
    struct Car car;

    fp = fopen("cars.dat", "rb");
    if (fp == NULL)
        return 0;
    while (fread(&car, sizeof(struct Car), 1, fp) == 1)
    {
        if (car.carID == carID)
        {
            *selectedCar = car;
            fclose(fp);
            return 1;
        }
    }
    fclose(fp);
    return 0;
}

int saveCar(struct Car updatedCar)
{
    FILE *fp;
    struct Car car;

    fp = fopen("cars.dat", "rb+");
    if (fp == NULL)
        return 0;
    while (fread(&car, sizeof(struct Car), 1, fp) == 1)
    {
        if (car.carID == updatedCar.carID)
        {
            fseek(fp, -(long)sizeof(struct Car), SEEK_CUR);
            fwrite(&updatedCar, sizeof(struct Car), 1, fp);
            fclose(fp);
            return 1;
        }
    }
    fclose(fp);
    return 0;
}

int reserveCarByID(int carID)
{
    struct Car car;

    if (loadCar(carID, &car) == 0)
        return 0;
    if (car.status != AVAILABLE)
        return 0;
    car.status = BOOKED;
    return saveCar(car);
}

int countStock(int category, int model)
{
    FILE *fp;
    struct Car car;
    int count = 0;

    fp = fopen("cars.dat", "rb");
    if (fp == NULL)
        return 0;
    while (fread(&car, sizeof(struct Car), 1, fp) == 1)
        if (car.category == category && car.model == model && car.status == AVAILABLE)
            count++;
    fclose(fp);
    return count;
}

int countColorStock(int category, int model, char color[])
{
    FILE *fp;
    struct Car car;
    int count = 0;

    fp = fopen("cars.dat", "rb");
    if (fp == NULL)
        return 0;
    while (fread(&car, sizeof(struct Car), 1, fp) == 1)
        if (car.category == category && car.model == model && car.status == AVAILABLE && strcmp(car.color, color) == 0)
            count++;
    fclose(fp);
    return count;
}

int findAvailableCar(int category, int model, char color[], struct Car *selectedCar)
{
    FILE *fp;
    struct Car car;

    fp = fopen("cars.dat", "rb");
    if (fp == NULL)
        return 0;
    while (fread(&car, sizeof(struct Car), 1, fp) == 1)
    {
        if (car.category == category && car.model == model && car.status == AVAILABLE && strcmp(car.color, color) == 0)
        {
            *selectedCar = car;
            fclose(fp);
            return 1;
        }
    }
    fclose(fp);
    return 0;
}

void setBookingStatus(int carID, int newStatus)
{
    FILE *fp;
    struct Booking booking;

    fp = fopen("bookings.dat", "rb+");
    if (fp == NULL)
        return;
    while (fread(&booking, sizeof(struct Booking), 1, fp) == 1)
    {
        if (booking.carID == carID && booking.status == ACTIVE)
        {
            booking.status = newStatus;
            fseek(fp, -(long)sizeof(struct Booking), SEEK_CUR);
            fwrite(&booking, sizeof(struct Booking), 1, fp);
            fseek(fp, 0, SEEK_CUR);
        }
    }
    fclose(fp);
}

void initializeInventory()
{
    FILE *fp;
    struct Car car;
    int category, model, unit, nextID = 1, price, colors;

    fp = fopen("cars.dat", "rb");
    if (fp != NULL)
    {
        fclose(fp);
        return;
    }

    fp = fopen("cars.dat", "wb");
    if (fp == NULL)
        return;

    for (category = 1; category <= 4; category++)
    {
        for (model = 1; model <= getModelCount(category); model++)
        {
            price = getCarPrice(category, model);
            colors = colorCount(category, model);
            for (unit = 0; unit < 10; unit++)
            {
                car.carID = nextID;
                nextID++;
                car.category = category;
                car.model = model;
                getmodel(category, model, car.carName);
                getcolor(category, model, (unit % colors) + 1, car.color);
                car.sellingPrice = price;
                car.purchaseCost = price - price / 10;
                car.status = AVAILABLE;
                fwrite(&car, sizeof(struct Car), 1, fp);
            }
        }
    }
    fclose(fp);
}

void showAllAvailableCars()
{
    FILE *fp;
    struct Car car;
    int found = 0;

    printf("\nCURRENT SHOWROOM AVAILABILITY\n");
    printf("%-6s %-46s %-24s %-12s\n", "ID", "MODEL", "COLOUR", "PRICE");
    fp = fopen("cars.dat", "rb");
    if (fp != NULL)
    {
        while (fread(&car, sizeof(struct Car), 1, fp) == 1)
        {
            if (car.status == AVAILABLE)
            {
                printf("%-6d %-46s %-24s %-12d\n", car.carID, car.carName, car.color, car.sellingPrice);
                found++;
            }
        }
        fclose(fp);
    }
    if (found == 0)
        printf("No cars are currently available in the showroom.\n");
}

int showNewModels(int category)
{
    FILE *fp;
    struct Car car;
    int found = 0;

    printf("\n===== NEWLY ADDED MODELS =====\n");
    fp = fopen("cars.dat", "rb");
    if (fp != NULL)
    {
        while (fread(&car, sizeof(struct Car), 1, fp) == 1)
        {
            if (car.model == 0 && car.category == category && car.status == AVAILABLE)
            {
                printf("Car ID: %d | %s | %s | Price: %d\n", car.carID, car.carName, car.color, car.sellingPrice);
                found++;
            }
        }
        fclose(fp);
    }
    if (found == 0)
        printf("No newly added models are available in this category.\n");
    return found;
}

int pickNewModel(int category, struct Car *selectedCar)
{
    int id;

    if (showNewModels(category) == 0)
        return 0;
    printf("Enter Car ID (0 to go back): ");
    id = readNumber();
    if (id == 0)
        return 0;
    if (loadCar(id, selectedCar) == 0 || selectedCar->model != 0 || selectedCar->category != category || selectedCar->status != AVAILABLE)
    {
        printf("Invalid Car ID.\n");
        return 0;
    }
    return 1;
}

void carMenu(int category, int model)
{
    char name[100];
    int choice;

    getmodel(category, model, name);
    do
    {
        printf("\n%s\n", name);
        printf("1.Car Colors:\n");
        printf("2.Car Specifications:\n");
        printf("3.Car Features:\n");
        printf("4.Price:\n");
        printf("5.Back:\n");
        printf("What Do You Want?\n");
        choice = readNumber();
        switch (choice)
        {
        case 1:
            showColors(category, model);
            break;
        case 2:
            showSpecs(category, model);
            break;
        case 3:
            showFeatures(category, model);
            break;
        case 4:
            printf("Price: PKR %d\n", getCarPrice(category, model));
            printf("Cars in stock: %d\n", countStock(category, model));
            break;
        case 5:
            break;
        default:
            printf("Invalid choice, please try again.\n");
        }
    } while (choice != 5);
}

void browseCatalogue(int category)
{
    int model;

    do
    {
        showModels(category);
        printf("\nEnter Model Number (0 to go back): ");
        model = readNumber();
        if (model != 0)
        {
            if (getCarPrice(category, model) == 0)
                printf("Invalid Model!\n");
            else
                carMenu(category, model);
        }
    } while (model != 0);
}

void browseNewModels(int category)
{
    int id;
    struct Car car;

    do
    {
        if (showNewModels(category) == 0)
            return;
        printf("Enter Car ID to view (0 to go back): ");
        id = readNumber();
        if (id != 0)
        {
            if (loadCar(id, &car) == 1 && car.model == 0 && car.category == category && car.status == AVAILABLE)
            {
                printf("\nCar ID: %d\n", car.carID);
                printf("Model: %s\n", car.carName);
                printf("Color: %s\n", car.color);
                printf("Price: PKR %d\n", car.sellingPrice);
            }
            else
                printf("Invalid Car ID.\n");
        }
    } while (id != 0);
}

void viewCars()
{
    int category, choice;

    do
    {
        printf("\n===== VIEW CARS =====");
        carcategory();
        printf("5.Show All Available Cars\n");
        printf("0.Back\n");
        printf("Enter Your Choice: ");
        category = readNumber();
        if (category >= 1 && category <= 4)
        {
            do
            {
                printf("\n1.Catalogue Models\n2.Newly Added Models\n0.Back\n");
                printf("Enter Your Choice: ");
                choice = readNumber();
                if (choice == 1)
                    browseCatalogue(category);
                else if (choice == 2)
                    browseNewModels(category);
                else if (choice != 0)
                    printf("Invalid choice, please try again.\n");
            } while (choice != 0);
        }
        else if (category == 5)
            showAllAvailableCars();
        else if (category != 0)
            printf("Invalid choice, please try again.\n");
    } while (category != 0);
}

int chooseCar(int *category, int *model, struct Car *car)
{
    int choice;

    while (1)
    {
        carcategory();
        printf("0.Back\n");
        printf("Enter Car Category: ");
        *category = readNumber();
        if (*category == 0)
            return 0;
        if (*category < 1 || *category > 4)
        {
            printf("Invalid Category!\n");
            continue;
        }
        printf("\n1.Catalogue Models\n2.Newly Added Models\n0.Back\n");
        printf("Enter Your Choice: ");
        choice = readNumber();
        if (choice == 1)
        {
            showModels(*category);
            printf("\nEnter Model Number (0 to go back): ");
            *model = readNumber();
            if (*model != 0 && getCarPrice(*category, *model) > 0)
                return 1;
            if (*model != 0)
                printf("Invalid Model!\n");
        }
        else if (choice == 2)
        {
            if (pickNewModel(*category, car) == 1)
                return 2;
        }
        else if (choice != 0)
            printf("Invalid choice, please try again.\n");
    }
}

void bookTestDrive()
{
    int category, model, result, confirm;
    struct Car car;
    struct TestDrive td;
    char categoryname[50];
    FILE *fp;

    printf("\nBook Test Drive:\n");
    result = chooseCar(&category, &model, &car);
    if (result == 0)
        return;
    if (result == 1)
        getmodel(category, model, td.carName);
    else
        strcpy(td.carName, car.carName);
    getcategory(category, categoryname);

    printf("\n===== TEST DRIVE SELECTION =====\n");
    printf("Car Category: %s\n", categoryname);
    printf("Car Model: %s\n", td.carName);
    printf("Is Your Test Drive Booking Confirm\n");
    printf("1.Yes\n2.No\n");
    confirm = readNumber();
    if (confirm != 1)
    {
        printf("Thankyou For Visiting\n");
        return;
    }

    printf("Enter Your Name\n");
    scanf(" %49[^\n]", td.name);
    printf("Enter Your Phone Number\n");
    scanf(" %19[^\n]", td.phone);
    printf("Enter Your City\n");
    scanf(" %49[^\n]", td.city);
    printf("Enter Preferred Date (DD/MM/YYYY)\n");
    scanf(" %19[^\n]", td.date);
    printf("Enter Preferred Time (e.g. 3:00 PM)\n");
    scanf(" %19[^\n]", td.time);

    td.driveID = getNextID("testdrives.dat", sizeof(struct TestDrive));
    fp = fopen("testdrives.dat", "ab");
    if (fp == NULL)
    {
        printf("Unable to save the test drive booking.\n");
        return;
    }
    fwrite(&td, sizeof(struct TestDrive), 1, fp);
    fclose(fp);

    printf("\n===== TEST DRIVE BOOKING SUMMARY =====\n");
    printf("Booking ID: %d\n", td.driveID);
    printf("Car Category: %s\n", categoryname);
    printf("Car Model: %s\n", td.carName);
    printf("Name: %s\n", td.name);
    printf("Contact: %s\n", td.phone);
    printf("City: %s\n", td.city);
    printf("Date: %s\n", td.date);
    printf("Time: %s\n", td.time);
    printf("TEST DRIVE BOOKED\n");
}

void printBooking(struct Booking b)
{
    char status[20];

    getbookingstatus(b.status, status);
    printf("\n========== BOOKING #%d ==========\n", b.bookingID);
    printf("Status: %s\n", status);
    printf("Car ID: %d\n", b.carID);
    printf("Car: %s\n", b.carName);
    printf("Color: %s\n", b.color);
    printf("Name: %s\n", b.name);
    printf("Contact: %s\n", b.phone);
    printf("CNIC: %s\n", b.cnic);
    printf("City: %s\n", b.city);
    printf("Address: %s\n", b.address);
    printf("Date: %s\n", b.date);
    printf("Time: %s\n", b.time);
    if (b.filer == 1)
        printf("Filer: Yes\n");
    else
        printf("Filer: No\n");
    printf("Car Price: Rs. %d\n", b.price);
    printf("Tax Amount: Rs. %.2f\n", b.taxAmount);
    printf("Total Price After Tax: Rs. %.2f\n", b.totalPrice);
    if (b.installments == 1)
    {
        printf("Payment: Installments\n");
        printf("Interest Rate: %.0f%%\n", b.interestRate * 100);
        printf("Down Payment (30%%): Rs. %.2f\n", b.downPayment);
        printf("Remaining Amount: Rs. %.2f\n", b.remaining);
        printf("Total Amount After Interest: Rs. %.2f\n", b.totalAmount);
        printf("Duration: %d Months\n", b.months);
        printf("Monthly Installment: Rs. %.2f\n", b.monthly);
    }
    else
        printf("Payment: Full Payment\n");
}

void bookCar()
{
    int category, model, result, i, color, total, stock, confirm, choice, selected;
    struct Car car;
    struct Booking b;
    char categoryname[50];
    char colorname[50];
    double taxrate;
    FILE *fp;

    printf("\nBook Car:\n");
    result = chooseCar(&category, &model, &car);
    if (result == 0)
        return;

    if (result == 1)
    {
        total = colorCount(category, model);
        selected = 0;
        while (selected == 0)
        {
            printf("\nCar Colors:\n");
            for (i = 1; i <= total; i++)
            {
                getcolor(category, model, i, colorname);
                stock = countColorStock(category, model, colorname);
                printf("%d.%s (In stock: %d)\n", i, colorname, stock);
            }
            printf("0.Back\n");
            printf("Enter Color Number: ");
            color = readNumber();
            if (color == 0)
                return;
            getcolor(category, model, color, colorname);
            if (strcmp(colorname, "Invalid Color") == 0)
                printf("Invalid Color!\n");
            else if (findAvailableCar(category, model, colorname, &car) == 0)
                printf("This color is out of stock, please choose another.\n");
            else
                selected = 1;
        }
    }

    getcategory(category, categoryname);
    printf("\n===== SELECTION SUMMARY =====\n");
    printf("Car Category: %s\n", categoryname);
    printf("Car Model: %s\n", car.carName);
    printf("Selected Color: %s\n", car.color);
    printf("Price: PKR %d\n", car.sellingPrice);
    printf("Is Your Booking Confirm\n");
    printf("1.Yes\n2.No\n");
    confirm = readNumber();
    if (confirm != 1)
    {
        printf("Thankyou For Visiting\n");
        return;
    }

    printf("Enter Your Name\n");
    scanf(" %49[^\n]", b.name);
    printf("Enter Your Phone Number (03XX-XXXXXXX)\n");
    scanf(" %19[^\n]", b.phone);
    printf("Enter Your CNIC (42XXX-XXXXXXX-X)\n");
    scanf(" %19[^\n]", b.cnic);
    printf("Enter Your City\n");
    scanf(" %49[^\n]", b.city);
    printf("Enter Your Address\n");
    scanf(" %99[^\n]", b.address);
    printf("Enter Preferred Date (DD/MM/YYYY)\n");
    scanf(" %19[^\n]", b.date);
    printf("Enter Preferred Time (e.g. 3:00 PM)\n");
    scanf(" %19[^\n]", b.time);

    printf("Are You Filer\n");
    printf("1. Yes\n2. No\n");
    choice = readNumber();
    while (choice != 1 && choice != 2)
    {
        printf("Invalid Choice, enter 1 or 2: ");
        choice = readNumber();
    }
    if (choice == 1)
    {
        b.filer = 1;
        taxrate = 0.10;
    }
    else
    {
        b.filer = 0;
        taxrate = 0.18;
    }

    b.price = car.sellingPrice;
    b.taxAmount = b.price * taxrate;
    b.totalPrice = b.price + b.taxAmount;
    b.installments = 0;
    b.months = 0;
    b.interestRate = 0;
    b.downPayment = 0;
    b.remaining = 0;
    b.totalAmount = 0;
    b.monthly = 0;

    printf("\nDo you want to buy the car on installments?\n");
    printf("1. Yes\n2. No\n");
    choice = readNumber();
    while (choice != 1 && choice != 2)
    {
        printf("Invalid Choice, enter 1 or 2: ");
        choice = readNumber();
    }

    if (choice == 1)
    {
        b.installments = 1;
        printf("\nSelect Installment Duration:\n");
        printf("1. 12 Months - No Interest\n");
        printf("2. 24 Months - 10%% Interest\n");
        printf("3. 36 Months - 15%% Interest\n");
        printf("Enter Your Choice: ");
        choice = readNumber();
        while (choice < 1 || choice > 3)
        {
            printf("Invalid Choice, enter 1, 2 or 3: ");
            choice = readNumber();
        }
        if (choice == 1)
        {
            b.months = 12;
            b.interestRate = 0;
        }
        else if (choice == 2)
        {
            b.months = 24;
            b.interestRate = 0.10;
        }
        else
        {
            b.months = 36;
            b.interestRate = 0.15;
        }
        b.downPayment = b.totalPrice * 0.30;
        b.remaining = b.totalPrice - b.downPayment;
        b.totalAmount = b.remaining + b.remaining * b.interestRate;
        b.monthly = b.totalAmount / b.months;
    }
    else
        printf("You selected full payment.\n");

    if (reserveCarByID(car.carID) == 0)
    {
        printf("Sorry, this car is no longer available.\n");
        return;
    }

    b.bookingID = getNextID("bookings.dat", sizeof(struct Booking));
    b.carID = car.carID;
    strcpy(b.carName, car.carName);
    strcpy(b.color, car.color);
    b.status = ACTIVE;

    fp = fopen("bookings.dat", "ab");
    if (fp == NULL)
    {
        printf("Unable to save the booking.\n");
        return;
    }
    fwrite(&b, sizeof(struct Booking), 1, fp);
    fclose(fp);

    printf("\n===== BOOKING SUMMARY =====");
    printBooking(b);
    printf("\nBOOKING CONFIRMED - CAR STATUS IS BOOKED\n");
}

void bookService()
{
    struct Service s;
    int choice, confirm, rate;
    FILE *fp;

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
    printf("6. Standard Package - Rs. 10500\n");
    printf("   Oil Change, Car Wash, Engine Tuning\n");
    printf("7. Premium Package - Rs. 13000\n");
    printf("   Oil Change, Car Wash, Engine Tuning, AC Service\n");
    printf("0. Back\n");
    printf("\nEnter your choice (0-7): ");
    choice = readNumber();

    switch (choice)
    {
    case 0:
        return;
    case 1:
        rate = 5000;
        strcpy(s.serviceName, "Oil Change");
        break;
    case 2:
        rate = 8000;
        strcpy(s.serviceName, "Maintenance");
        break;
    case 3:
        rate = 2000;
        strcpy(s.serviceName, "Car Wash");
        break;
    case 4:
        rate = 7000;
        strcpy(s.serviceName, "Inspection");
        break;
    case 5:
        rate = 6500;
        strcpy(s.serviceName, "Basic Package");
        break;
    case 6:
        rate = 10500;
        strcpy(s.serviceName, "Standard Package");
        break;
    case 7:
        rate = 13000;
        strcpy(s.serviceName, "Premium Package");
        break;
    default:
        printf("\nInvalid service choice!\n");
        return;
    }
    s.charge = rate;

    printf("\nEnter Customer Name: ");
    scanf(" %49[^\n]", s.name);
    printf("Enter Phone Number: ");
    scanf(" %19[^\n]", s.phone);
    printf("Enter Car Model: ");
    scanf(" %99[^\n]", s.carModel);
    printf("Enter Car Registration Number: ");
    scanf(" %29[^\n]", s.registration);

    printf("\n========== SERVICE SUMMARY ==========\n");
    printf("Customer Name: %s\n", s.name);
    printf("Phone Number: %s\n", s.phone);
    printf("Car Model: %s\n", s.carModel);
    printf("Registration Number: %s\n", s.registration);
    printf("Selected Service: %s\n", s.serviceName);
    printf("Service Charges: Rs. %d\n", s.charge);

    printf("\nConfirm Service Booking?\n");
    printf("1. Confirm Booking\n");
    printf("2. Cancel Booking\n");
    printf("Enter choice: ");
    confirm = readNumber();

    if (confirm == 1)
    {
        s.serviceID = getNextID("services.dat", sizeof(struct Service));
        fp = fopen("services.dat", "ab");
        if (fp == NULL)
        {
            printf("Unable to save the service booking.\n");
            return;
        }
        fwrite(&s, sizeof(struct Service), 1, fp);
        fclose(fp);

        printf("\n====================================\n");
        printf("       SERVICE BOOKING CONFIRMED\n");
        printf("====================================\n");
        printf("Booking ID: %d\n", s.serviceID);
        printf("Customer: %s\n", s.name);
        printf("Car: %s\n", s.carModel);
        printf("Registration: %s\n", s.registration);
        printf("Service: %s\n", s.serviceName);
        printf("Total Bill: Rs. %d\n", s.charge);
        printf("\nPlease visit our showroom for service.\n");
    }
    else
        printf("\nService booking cancelled.\n");
}

void customerPortal()
{
    int choice;

    do
    {
        printf("\nWelcome To Showroom:\n");
        printf("1.View Cars:\n");
        printf("2.Book Test Drive :\n");
        printf("3.Book Cars:\n");
        printf("4.Book Service:\n");
        printf("5.Back To Main Menu:\n");
        printf("Enter your choice:\n");
        choice = readNumber();

        switch (choice)
        {
        case 1:
            viewCars();
            break;
        case 2:
            bookTestDrive();
            break;
        case 3:
            bookCar();
            break;
        case 4:
            bookService();
            break;
        case 5:
            printf("Thank You For Visiting:\n");
            break;
        default:
            printf("Invalid choice, please try again.\n");
        }
    } while (choice != 5);
}

void viewCarsByStatus(int wantedStatus)
{
    FILE *fp;
    struct Car car;
    char status[20];
    int found = 0;

    fp = fopen("cars.dat", "rb");
    if (fp == NULL)
    {
        printf("No inventory found. Add cars first.\n");
        return;
    }
    printf("\n%-6s %-46s %-24s %-10s\n", "ID", "MODEL", "COLOR", "STATUS");
    while (fread(&car, sizeof(struct Car), 1, fp) == 1)
    {
        if (car.status == wantedStatus)
        {
            getstatus(car.status, status);
            printf("%-6d %-46s %-24s %-10s\n", car.carID, car.carName, car.color, status);
            found++;
        }
    }
    if (found == 0)
        printf("No cars in this status.\n");
    fclose(fp);
}

int listBookings(int onlyActive)
{
    FILE *fp;
    struct Booking b;
    char status[20];
    int found = 0;

    printf("\n%-5s %-6s %-30s %-18s %-14s %-11s %-10s\n", "ID", "CAR ID", "CAR", "CUSTOMER", "PHONE", "DATE", "STATUS");
    fp = fopen("bookings.dat", "rb");
    if (fp != NULL)
    {
        while (fread(&b, sizeof(struct Booking), 1, fp) == 1)
        {
            if (onlyActive == 1 && b.status != ACTIVE)
                continue;
            getbookingstatus(b.status, status);
            printf("%-5d %-6d %-30.30s %-18.18s %-14.14s %-11.11s %-10s\n", b.bookingID, b.carID, b.carName, b.name, b.phone, b.date, status);
            found++;
        }
        fclose(fp);
    }
    if (found == 0)
        printf("No bookings found.\n");
    return found;
}

void viewBookings()
{
    FILE *fp;
    struct Booking b;
    int id, found;

    printf("\n===== CUSTOMER CAR BOOKINGS =====\n");
    if (listBookings(0) == 0)
        return;
    do
    {
        printf("\nEnter Booking ID for full details (0 to go back): ");
        id = readNumber();
        if (id != 0)
        {
            found = 0;
            fp = fopen("bookings.dat", "rb");
            if (fp != NULL)
            {
                while (fread(&b, sizeof(struct Booking), 1, fp) == 1)
                {
                    if (b.bookingID == id)
                    {
                        printBooking(b);
                        found = 1;
                        break;
                    }
                }
                fclose(fp);
            }
            if (found == 0)
                printf("Booking ID not found.\n");
        }
    } while (id != 0);
}

void viewTestDrives()
{
    FILE *fp;
    struct TestDrive td;
    int found = 0;

    printf("\n===== TEST DRIVE REQUESTS =====\n");
    printf("%-5s %-44s %-18s %-14s %-12s %-11s %-9s\n", "ID", "CAR", "CUSTOMER", "PHONE", "CITY", "DATE", "TIME");
    fp = fopen("testdrives.dat", "rb");
    if (fp != NULL)
    {
        while (fread(&td, sizeof(struct TestDrive), 1, fp) == 1)
        {
            printf("%-5d %-44.44s %-18.18s %-14.14s %-12.12s %-11.11s %-9.9s\n", td.driveID, td.carName, td.name, td.phone, td.city, td.date, td.time);
            found++;
        }
        fclose(fp);
    }
    if (found == 0)
        printf("No test drive requests found.\n");
}

void viewServices()
{
    FILE *fp;
    struct Service s;
    int found = 0;

    printf("\n===== SERVICE BOOKINGS =====\n");
    printf("%-5s %-18s %-14s %-28s %-14s %-18s %-8s\n", "ID", "CUSTOMER", "PHONE", "CAR", "REGISTRATION", "SERVICE", "CHARGE");
    fp = fopen("services.dat", "rb");
    if (fp != NULL)
    {
        while (fread(&s, sizeof(struct Service), 1, fp) == 1)
        {
            printf("%-5d %-18.18s %-14.14s %-28.28s %-14.14s %-18.18s %-8d\n", s.serviceID, s.name, s.phone, s.carModel, s.registration, s.serviceName, s.charge);
            found++;
        }
        fclose(fp);
    }
    if (found == 0)
        printf("No service bookings found.\n");
}

void inventoryReport()
{
    FILE *fp;
    struct Car car;
    int category, model, total, available, booked, sold, customFound;
    char categoryname[50];
    char modelname[100];
    char status[20];

    printf("\n===============================================================================================\n");
    printf("                                      INVENTORY REPORT\n");
    printf("===============================================================================================\n");

    for (category = 1; category <= 4; category++)
    {
        getcategory(category, categoryname);
        printf("\nCATEGORY: %s\n", categoryname);
        printf("%-46s %-12s %-6s %-10s %-7s %-5s\n", "MODEL", "PRICE", "TOTAL", "AVAILABLE", "BOOKED", "SOLD");

        for (model = 1; model <= getModelCount(category); model++)
        {
            getmodel(category, model, modelname);
            total = 0;
            available = 0;
            booked = 0;
            sold = 0;

            fp = fopen("cars.dat", "rb");
            if (fp != NULL)
            {
                while (fread(&car, sizeof(struct Car), 1, fp) == 1)
                {
                    if (car.category == category && car.model == model)
                    {
                        total++;
                        if (car.status == AVAILABLE)
                            available++;
                        else if (car.status == BOOKED)
                            booked++;
                        else
                            sold++;
                    }
                }
                fclose(fp);
            }
            printf("%-46s %-12d %-6d %-10d %-7d %-5d\n", modelname, getCarPrice(category, model), total, available, booked, sold);
        }
    }

    printf("\nNEW MODELS ADDED BY OWNER\n");
    customFound = 0;
    fp = fopen("cars.dat", "rb");
    if (fp != NULL)
    {
        printf("%-6s %-18s %-30s %-20s %-10s\n", "ID", "CATEGORY", "MODEL", "COLOUR", "STATUS");
        while (fread(&car, sizeof(struct Car), 1, fp) == 1)
        {
            if (car.model == 0)
            {
                getcategory(car.category, categoryname);
                getstatus(car.status, status);
                printf("%-6d %-18s %-30s %-20s %-10s\n", car.carID, categoryname, car.carName, car.color, status);
                customFound++;
            }
        }
        fclose(fp);
    }
    if (customFound == 0)
        printf("No new models have been added.\n");

    printf("\nCURRENTLY BOOKED CARS (CUSTOMER BOOKINGS)\n");
    listBookings(1);

    printf("\nACTUAL INVENTORY DETAILS\n");
    fp = fopen("cars.dat", "rb");
    if (fp == NULL)
        printf("No cars have been added to the inventory yet.\n");
    else
    {
        printf("%-6s %-18s %-46s %-24s %-12s %-10s\n", "ID", "CATEGORY", "MODEL", "COLOUR", "PRICE", "STATUS");
        while (fread(&car, sizeof(struct Car), 1, fp) == 1)
        {
            getcategory(car.category, categoryname);
            getstatus(car.status, status);
            printf("%-6d %-18s %-46s %-24s %-12d %-10s\n", car.carID, categoryname, car.carName, car.color, car.sellingPrice, status);
        }
        fclose(fp);
    }

    printf("\n===============================================================================================\n");
    printf("                                         END OF INVENTORY REPORT\n");
    printf("===============================================================================================\n");
}

void addCars()
{
    FILE *fp;
    struct Car car;
    int total, i, modelChoice, color;

    printf("How many cars do you want to add? ");
    total = readNumber();
    if (total <= 0)
    {
        printf("Invalid quantity.\n");
        return;
    }

    for (i = 0; i < total; i++)
    {
        printf("\n--- Enter details for car %d ---\n", i + 1);
        carcategory();
        printf("Enter category number: ");
        car.category = readNumber();
        while (car.category < 1 || car.category > 4)
        {
            printf("Invalid category, enter again: ");
            car.category = readNumber();
        }

        printf("\n1. Add Existing Model\n");
        printf("2. Add Completely New Model\n");
        printf("Choose model type: ");
        modelChoice = readNumber();
        while (modelChoice != 1 && modelChoice != 2)
        {
            printf("Invalid choice, enter 1 or 2: ");
            modelChoice = readNumber();
        }

        if (modelChoice == 1)
        {
            showModels(car.category);
            printf("Enter model number: ");
            car.model = readNumber();
            while (car.model < 1 || car.model > getModelCount(car.category))
            {
                printf("Invalid model, enter again: ");
                car.model = readNumber();
            }
            getmodel(car.category, car.model, car.carName);

            showColors(car.category, car.model);
            printf("Enter color number: ");
            color = readNumber();
            while (color < 1 || color > colorCount(car.category, car.model))
            {
                printf("Invalid color, enter again: ");
                color = readNumber();
            }
            getcolor(car.category, car.model, color, car.color);
        }
        else
        {
            car.model = 0;
            printf("Enter new car model name: ");
            scanf(" %99[^\n]", car.carName);
            printf("Enter available colour: ");
            scanf(" %49[^\n]", car.color);
        }

        printf("Enter showroom purchase cost (Rs.): ");
        car.purchaseCost = readNumber();
        while (car.purchaseCost <= 0)
        {
            printf("Cost must be greater than zero, enter again: ");
            car.purchaseCost = readNumber();
        }
        printf("Enter selling price (Rs.): ");
        car.sellingPrice = readNumber();
        while (car.sellingPrice <= 0)
        {
            printf("Price must be greater than zero, enter again: ");
            car.sellingPrice = readNumber();
        }

        car.status = AVAILABLE;
        car.carID = getNextID("cars.dat", sizeof(struct Car));

        fp = fopen("cars.dat", "ab");
        if (fp == NULL)
        {
            printf("Unable to open inventory file.\n");
            return;
        }
        fwrite(&car, sizeof(struct Car), 1, fp);
        fclose(fp);
        printf("Car added successfully. ID: %d\n", car.carID);
    }
}

void updateCarStatus()
{
    struct Car car;
    int carID, choice;
    char status[20];

    printf("Enter Car ID: ");
    carID = readNumber();
    if (loadCar(carID, &car) == 0)
    {
        printf("Car ID not found.\n");
        return;
    }

    getstatus(car.status, status);
    printf("Car: %s (%s)\n", car.carName, car.color);
    printf("Current Status: %s\n", status);
    printf("\nSelect New Status:\n");
    printf("1. AVAILABLE\n");
    printf("2. BOOKED\n");
    printf("3. SOLD\n");
    printf("Enter choice: ");
    choice = readNumber();
    if (choice < 1 || choice > 3)
    {
        printf("Invalid choice.\n");
        return;
    }

    if (car.status == BOOKED && choice == SOLD)
        setBookingStatus(car.carID, COMPLETED);
    else if (car.status == BOOKED && choice == AVAILABLE)
        setBookingStatus(car.carID, CANCELLED);

    car.status = choice;
    if (saveCar(car) == 1)
        printf("Car status updated successfully.\n");
    else
        printf("Unable to update the inventory file.\n");
}

void deleteCar()
{
    FILE *fp, *temp;
    struct Car car, selectedCar;
    int carID, confirm, writeError = 0, removed = 0;

    printf("\n====================================\n");
    printf("           DELETE CAR\n");
    printf("====================================\n");
    printf("\nAVAILABLE CARS IN SHOWROOM:\n");
    viewCarsByStatus(AVAILABLE);

    printf("\nEnter Car ID you want to delete (0 to cancel): ");
    carID = readNumber();
    if (carID == 0)
        return;

    if (loadCar(carID, &selectedCar) == 0)
    {
        printf("\nCar ID not found in inventory.\n");
        return;
    }
    if (selectedCar.status != AVAILABLE)
    {
        printf("\nThis car cannot be deleted.\n");
        if (selectedCar.status == BOOKED)
            printf("Reason: This car is currently BOOKED.\n");
        else
            printf("Reason: This car has already been SOLD.\n");
        printf("Only AVAILABLE cars can be deleted.\n");
        return;
    }

    printf("\n========== CAR DETAILS ==========\n");
    printf("Car ID: %d\n", selectedCar.carID);
    printf("Car Model: %s\n", selectedCar.carName);
    printf("Car Color: %s\n", selectedCar.color);
    printf("Purchase Cost: Rs. %d\n", selectedCar.purchaseCost);
    printf("Selling Price: Rs. %d\n", selectedCar.sellingPrice);
    printf("Status: AVAILABLE\n");
    printf("\nAre you sure you want to delete this car?\n");
    printf("1. Confirm Delete\n");
    printf("2. Cancel\n");
    printf("Enter your choice: ");
    confirm = readNumber();
    if (confirm != 1)
    {
        printf("\nCar deletion cancelled.\n");
        return;
    }

    fp = fopen("cars.dat", "rb");
    temp = fopen("cars_temp.dat", "wb");
    if (fp == NULL || temp == NULL)
    {
        printf("\nUnable to open the inventory files.\n");
        if (fp != NULL)
            fclose(fp);
        if (temp != NULL)
            fclose(temp);
        return;
    }

    while (fread(&car, sizeof(struct Car), 1, fp) == 1)
    {
        if (car.carID == carID)
        {
            removed++;
            continue;
        }
        if (fwrite(&car, sizeof(struct Car), 1, temp) != 1)
        {
            writeError = 1;
            break;
        }
    }
    fclose(fp);
    fclose(temp);

    if (writeError == 1 || removed != 1)
    {
        printf("\nError while updating inventory.\n");
        remove("cars_temp.dat");
        return;
    }

    remove("cars_backup.dat");
    if (rename("cars.dat", "cars_backup.dat") != 0)
    {
        printf("\nUnable to create inventory backup.\n");
        remove("cars_temp.dat");
        return;
    }
    if (rename("cars_temp.dat", "cars.dat") != 0)
    {
        printf("\nUnable to update inventory file.\n");
        rename("cars_backup.dat", "cars.dat");
        return;
    }
    remove("cars_backup.dat");

    printf("\n====================================\n");
    printf("       CAR DELETED SUCCESSFULLY\n");
    printf("====================================\n");
    printf("Deleted Car ID: %d\n", selectedCar.carID);
    printf("Deleted Model: %s\n", selectedCar.carName);
    printf("Deleted Color: %s\n", selectedCar.color);
    printf("\nInventory updated successfully.\n");
}

void markCarAsSold()
{
    struct Car car;
    int carID, confirm;

    printf("\n====================================\n");
    printf("         MARK CAR AS SOLD\n");
    printf("====================================\n");
    printf("\nAVAILABLE CARS:\n");
    viewCarsByStatus(AVAILABLE);
    printf("\nBOOKED CARS:\n");
    viewCarsByStatus(BOOKED);

    printf("\nEnter Car ID to mark as sold (0 to cancel): ");
    carID = readNumber();
    if (carID == 0)
        return;
    if (loadCar(carID, &car) == 0)
    {
        printf("Car ID not found.\n");
        return;
    }
    if (car.status == SOLD)
    {
        printf("This car is already marked as SOLD.\n");
        return;
    }

    printf("\nCar ID: %d\n", car.carID);
    printf("Model: %s\n", car.carName);
    printf("Color: %s\n", car.color);
    printf("Selling Price: Rs.%d\n", car.sellingPrice);
    printf("Mark this car as SOLD?\n1. Yes\n2. No\n");
    printf("Enter choice: ");
    confirm = readNumber();
    if (confirm != 1)
    {
        printf("Operation cancelled.\n");
        return;
    }

    if (car.status == BOOKED)
        setBookingStatus(car.carID, COMPLETED);
    car.status = SOLD;
    if (saveCar(car) == 1)
    {
        printf("\nCar marked as SOLD successfully.\n");
        printf("Profit on this car: Rs.%d\n", car.sellingPrice - car.purchaseCost);
    }
    else
        printf("Unable to update the inventory file.\n");
}

void addShowroomExpense()
{
    FILE *fp;
    struct Expense expense;
    int choice, confirm;

    printf("\n========== ADD SHOWROOM EXPENSE ==========\n");
    printf("1. Employee Salaries\n");
    printf("2. Electricity and Gas Bills\n");
    printf("3. Showroom Rent\n");
    printf("4. Car Maintenance\n");
    printf("5. Marketing and Advertisement\n");
    printf("6. Transportation Expenses\n");
    printf("7. Other Expenses\n");
    printf("0. Back\n");
    printf("\nEnter Expense Category: ");
    choice = readNumber();

    switch (choice)
    {
    case 0:
        return;
    case 1:
        strcpy(expense.category, "Employee Salaries");
        break;
    case 2:
        strcpy(expense.category, "Electricity and Gas");
        break;
    case 3:
        strcpy(expense.category, "Showroom Rent");
        break;
    case 4:
        strcpy(expense.category, "Car Maintenance");
        break;
    case 5:
        strcpy(expense.category, "Marketing and Advertisement");
        break;
    case 6:
        strcpy(expense.category, "Transportation");
        break;
    case 7:
        strcpy(expense.category, "Other Expenses");
        break;
    default:
        printf("\nInvalid Category!\n");
        return;
    }

    printf("Enter Expense Description: ");
    scanf(" %99[^\n]", expense.description);
    printf("Enter Expense Amount (Rs.): ");
    expense.amount = readNumber();
    if (expense.amount <= 0)
    {
        printf("\nInvalid Amount! Amount must be greater than zero.\n");
        return;
    }
    printf("Enter Date (DD/MM/YYYY): ");
    scanf(" %19[^\n]", expense.date);
    expense.expenseID = getNextID("expenses.dat", sizeof(struct Expense));

    printf("\n========== EXPENSE DETAILS ==========\n");
    printf("Expense ID: %d\n", expense.expenseID);
    printf("Category: %s\n", expense.category);
    printf("Description: %s\n", expense.description);
    printf("Amount: Rs. %d\n", expense.amount);
    printf("Date: %s\n", expense.date);

    printf("\nConfirm Expense? (1 = Yes / 0 = No): ");
    confirm = readNumber();
    if (confirm == 1)
    {
        fp = fopen("expenses.dat", "ab");
        if (fp == NULL)
        {
            printf("\nError opening expense file!\n");
            return;
        }
        fwrite(&expense, sizeof(struct Expense), 1, fp);
        fclose(fp);
        printf("\nExpense Added Successfully!\n");
    }
    else
        printf("\nExpense Addition Cancelled!\n");
}

void financialReport()
{
    FILE *fp;
    struct Car car;
    struct Expense exp;
    struct Service s;
    int total = 0, available = 0, booked = 0, sold = 0;
    long long revenue = 0, soldCost = 0, stockValue = 0, totalExpenses = 0, serviceRevenue = 0;
    long long grossProfit, netProfit;

    fp = fopen("cars.dat", "rb");
    if (fp == NULL)
    {
        printf("\nNo inventory found. Add cars first.\n");
        return;
    }
    while (fread(&car, sizeof(struct Car), 1, fp) == 1)
    {
        total++;
        if (car.status == SOLD)
        {
            sold++;
            revenue += car.sellingPrice;
            soldCost += car.purchaseCost;
        }
        else
        {
            if (car.status == AVAILABLE)
                available++;
            else
                booked++;
            stockValue += car.purchaseCost;
        }
    }
    fclose(fp);

    fp = fopen("expenses.dat", "rb");
    if (fp != NULL)
    {
        while (fread(&exp, sizeof(struct Expense), 1, fp) == 1)
            totalExpenses += exp.amount;
        fclose(fp);
    }

    fp = fopen("services.dat", "rb");
    if (fp != NULL)
    {
        while (fread(&s, sizeof(struct Service), 1, fp) == 1)
            serviceRevenue += s.charge;
        fclose(fp);
    }

    grossProfit = revenue - soldCost;
    netProfit = grossProfit + serviceRevenue - totalExpenses;

    printf("\n====================================\n");
    printf("         FINANCIAL REPORT\n");
    printf("====================================\n");
    printf("Total Cars in Records : %d\n", total);
    printf("Available / Booked / Sold : %d / %d / %d\n", available, booked, sold);
    printf("------------------------------------\n");
    printf("Total Sales Revenue   : Rs.%lld\n", revenue);
    printf("Cost of Sold Cars     : Rs.%lld\n", soldCost);
    printf("Gross Profit          : Rs.%lld\n", grossProfit);
    printf("Service Revenue       : Rs.%lld\n", serviceRevenue);
    printf("Showroom Expenses     : Rs.%lld\n", totalExpenses);
    printf("------------------------------------\n");
    printf("NET PROFIT            : Rs.%lld\n", netProfit);
    printf("====================================\n");
    printf("Value of Unsold Stock (at cost): Rs.%lld\n", stockValue);
}

void ownerPortal()
{
    int choice, statusChoice;

    do
    {
        printf("\n========== SHOWROOM OWNER PORTAL ==========\n");
        printf("1. Inventory Report\n");
        printf("2. View Car by Status\n");
        printf("3. Add Cars\n");
        printf("4. Update Car Status\n");
        printf("5. Delete Car\n");
        printf("6. Mark Car as Sold\n");
        printf("7. Add Showroom Expenses\n");
        printf("8. Financial Reports\n");
        printf("9. View Car Bookings\n");
        printf("10. View Test Drive Requests\n");
        printf("11. View Service Bookings\n");
        printf("12. Exit Owner Portal\n");
        printf("Enter choice: ");
        choice = readNumber();

        switch (choice)
        {
        case 1:
            inventoryReport();
            break;
        case 2:
            printf("\n1. Available\n2. Booked\n3. Sold\n");
            printf("Enter status: ");
            statusChoice = readNumber();
            if (statusChoice >= AVAILABLE && statusChoice <= SOLD)
                viewCarsByStatus(statusChoice);
            else
                printf("Invalid status.\n");
            break;
        case 3:
            addCars();
            break;
        case 4:
            updateCarStatus();
            break;
        case 5:
            deleteCar();
            break;
        case 6:
            markCarAsSold();
            break;
        case 7:
            addShowroomExpense();
            break;
        case 8:
            financialReport();
            break;
        case 9:
            viewBookings();
            break;
        case 10:
            viewTestDrives();
            break;
        case 11:
            viewServices();
            break;
        case 12:
            printf("Leaving owner portal.\n");
            break;
        default:
            printf("Invalid choice.\n");
        }
    } while (choice != 12);
}

void ownerLogin()
{
    int password = 12345678, entered, attempts = 0;

    while (attempts < 3)
    {
        printf("Enter Password: ");
        entered = readNumber();
        if (entered == password)
        {
            printf("Access Granted\n");
            ownerPortal();
            return;
        }
        attempts++;
        if (attempts < 3)
            printf("Incorrect Password, Try Again\n");
    }
    printf("Access Denied. Maximum attempts exceeded.\n");
}

int main()
{
    int choice;

    initializeInventory();

    do
    {
        printf("\n====================================\n");
        printf("\nWELCOME TO TOYOTA PAKISTAN\n");
        printf("\n====================================\n");
        printf("SELECT FROM THE GIVEN OPTIONS\n");
        printf("1. Showroom Owner\n");
        printf("2. Customer\n");
        printf("3. Exit\n");
        printf("Enter choice:\n");
        choice = readNumber();

        switch (choice)
        {
        case 1:
            ownerLogin();
            break;
        case 2:
            customerPortal();
            break;
        case 3:
            printf("THANKS FOR VISITING\n");
            break;
        default:
            printf("Invalid choice, please try again.\n");
        }
    } while (choice != 3);

    return 0;
}