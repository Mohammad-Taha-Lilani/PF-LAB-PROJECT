#include <stdio.h>
#include <string.h>

#define AVAILABLE 1
#define BOOKED 2
#define SOLD 3


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
            strcpy(selectedprice, "PKR 4,649,000");
            *carprice = 4649000;
            break;
        case 3:
            strcpy(selectedprice, "PKR 4,649,000");
            *carprice = 4649000;
            break;
        case 4:
            strcpy(selectedprice, "PKR 4,649,000");
            *carprice = 4649000;
            break;
        case 5:
            strcpy(selectedprice, "PKR 4,649,000");
            *carprice = 4649000;
            break;
        case 6:
            strcpy(selectedprice, "PKR 4,649,000");
            *carprice = 4649000;
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

int getNextCarID()
{
    FILE *fp;
    struct Car car;
    int maxID = 0;

    fp = fopen("cars.dat", "rb");
    if (fp == NULL) return 1;

    while (fread(&car, sizeof(struct Car), 1, fp) == 1)
        if (car.carID > maxID) maxID = car.carID;

    fclose(fp);
    return maxID + 1;
}

int countAvailableCar(int category, int model, const char color[])
{
    FILE *fp = fopen("cars.dat", "rb");
    struct Car car;
    int found = 0;
    if (fp == NULL) return 0;
    while (fread(&car, sizeof(struct Car), 1, fp) == 1)
        if (car.category == category && car.model == model &&
            strcmp(car.color, color) == 0 && car.status == AVAILABLE)
            found++;
    fclose(fp);
    return found;
}

int reserveCar(int category, int model, const char color[])
{
    FILE *fp = fopen("cars.dat", "rb+");
    struct Car car;
    if (fp == NULL) return -1;

    while (fread(&car, sizeof(struct Car), 1, fp) == 1)
    {
        if (car.category == category && car.model == model &&
            strcmp(car.color, color) == 0 && car.status == AVAILABLE)
        {
            car.status = BOOKED;
            fseek(fp, -(long)sizeof(struct Car), SEEK_CUR);
            fwrite(&car, sizeof(struct Car), 1, fp);
            fclose(fp);
            return car.carID;
        }
    }
    fclose(fp);
    return -1;
}

int getAvailableCarByID(int carID, struct Car *selectedCar)
{
    FILE *fp = fopen("cars.dat", "rb");
    struct Car car;
    if (fp == NULL) return 0;
    while (fread(&car, sizeof(struct Car), 1, fp) == 1)
    {
        if (car.carID == carID && car.status == AVAILABLE)
        {
            *selectedCar = car;
            fclose(fp);
            return 1;
        }
    }
    fclose(fp);
    return 0;
}

int reserveCarByID(int carID)
{
    FILE *fp = fopen("cars.dat", "rb+");
    struct Car car;
    if (fp == NULL) return -1;
    while (fread(&car, sizeof(struct Car), 1, fp) == 1)
    {
        if (car.carID == carID && car.status == AVAILABLE)
        {
            car.status = BOOKED;
            fseek(fp, -(long)sizeof(struct Car), SEEK_CUR);
            fwrite(&car, sizeof(struct Car), 1, fp);
            fclose(fp);
            return car.carID;
        }
    }
    fclose(fp);
    return -1;
}

void initializeInventory()
{
    FILE *fp = fopen("cars.dat", "rb");
    struct Car car;
    int hasCatalogueCars = 0;
    int category, model, quantity, colorCount, colorChoice;
    int nextID, carprice;
    char selectedprice[32];

    if (fp != NULL)
    {
        while (fread(&car, sizeof(struct Car), 1, fp) == 1)
        {
            if (car.model >= 1 &&
                ((car.category == 1 && car.model <= 6) ||
                 (car.category == 2 && car.model <= 6) ||
                 (car.category == 3 && car.model <= 9) ||
                 (car.category == 4 && car.model <= 2)))
            {
                hasCatalogueCars = 1;
                break;
            }
        }
        fclose(fp);
    }

    if (hasCatalogueCars) return;

    fp = fopen("cars.dat", "ab");
    if (fp == NULL) return;

    nextID = getNextCarID();

    for (category = 1; category <= 4; category++)
    {
        if (category == 1 || category == 2) quantity = 6;
        else if (category == 3) quantity = 9;
        else quantity = 2;

        for (model = 1; model <= quantity; model++)
        {
            for (int unit = 0; unit < 10; unit++)
            {
                car.carID = nextID++;
                car.category = category;
                car.model = model;
                getmodel(category, model, car.carName);
                enterprice(selectedprice, category, model, &carprice);
                car.sellingPrice = carprice;
                car.purchaseCost = carprice;

                if (category == 1) colorCount = 5;
                else if (category == 2) colorCount = 6;
                else if ((category == 3 && model <= 4) || (category == 4 && model == 1)) colorCount = 5;
                else colorCount = 6;

                colorChoice = (unit % colorCount) + 1;
                getcolor(category, model, colorChoice, car.color);
                car.status = AVAILABLE;
                fwrite(&car, sizeof(struct Car), 1, fp);
            }
        }
    }

    fclose(fp);
}

void addCars()
{
    FILE *fp = fopen("cars.dat", "ab");
    struct Car car;
    int total, i, nextID, modelChoice, colorChoice;
    char categoryName[50];

    if (fp == NULL)
    {
        printf("Unable to open inventory file.\n");
        return;
    }

    printf("How many cars do you want to add? ");
    scanf("%d", &total);
    if (total <= 0) { printf("Invalid quantity.\n"); fclose(fp); return; }

    nextID = getNextCarID();
    for (i = 0; i < total; i++)
    {
        car.carID = nextID++;
        printf("\n--- Enter details for car %d ---\n", i + 1);
        carcategory();
        printf("Enter category number: ");
        scanf("%d", &car.category);
        if (car.category < 1 || car.category > 4)
        {
            printf("Invalid category. This car was skipped.\n");
            continue;
        }
        getcategory(car.category, categoryName);

        printf("\n1. Add Existing Model\n");
        printf("2. Add Completely New Model\n");
        printf("Choose model type: ");
        scanf("%d", &modelChoice);

        if (modelChoice == 1)
        {
            switch (car.category)
            {
                case 1: compactsedan(); break;
                case 2: Sedan(); break;
                case 3: suv(); break;
                case 4: GR(); break;
            }
            printf("Enter model number: ");
            scanf("%d", &car.model);
            getmodel(car.category, car.model, car.carName);
            if (strcmp(car.carName, "Invalid Model") == 0)
            {
                printf("Invalid model. This car was skipped.\n");
                continue;
            }

            if (car.category == 1) yariscolor();
            else if (car.category == 2) corollacolor();
            else if (car.category == 3 && car.model <= 4) fortunercolor();
            else if (car.category == 3 || (car.category == 4 && car.model == 2)) hiluxcolor();
            else fortunercolor();

            printf("Enter color number: ");
            scanf("%d", &colorChoice);
            getcolor(car.category, car.model, colorChoice, car.color);
            if (strcmp(car.color, "Invalid Color") == 0)
            {
                printf("Invalid color. This car was skipped.\n");
                continue;
            }
        }
        else if (modelChoice == 2)
        {
            car.model = 0;
            printf("Enter new car model name: ");
            scanf(" %99[^\n]", car.carName);
            if (strlen(car.carName) == 0)
            {
                printf("Invalid model name. This car was skipped.\n");
                continue;
            }
            printf("Enter available colour: ");
            scanf(" %49[^\n]", car.color);
        }
        else
        {
            printf("Invalid model type. This car was skipped.\n");
            continue;
        }

        printf("Enter showroom purchase cost (Rs.): ");
        scanf("%d", &car.purchaseCost);
        printf("Enter selling price (Rs.): ");
        scanf("%d", &car.sellingPrice);
        if (car.purchaseCost <= 0 || car.sellingPrice <= 0)
        {
            printf("Invalid price. This car was skipped.\n");
            continue;
        }
        car.status = AVAILABLE;
        fwrite(&car, sizeof(struct Car), 1, fp);
        printf("Car added successfully. ID: %d\n", car.carID);
    }
    fclose(fp);
}

void viewCarsByStatus(int wantedStatus)
{
    FILE *fp = fopen("cars.dat", "rb");
    struct Car car;
    int found = 0;
    if (fp == NULL) { printf("No inventory found. Add cars first.\n"); return; }

    printf("\n+--------+--------------------------------+----------------------+----------------+\n");
    printf("| %-6s | %-30s | %-20s | %-14s |\n" , "ID", "MODEL", "COLOR", "STATUS");
    printf("+--------+--------------------------------+----------------------+----------------+\n");
    while (fread(&car, sizeof(struct Car), 1, fp) == 1)
    {
        if (car.status == wantedStatus)
        {
            printf("| %-6d | %-30.30s | %-20.20s | %-14s |\n", car.carID, car.carName,
                   car.color, wantedStatus == AVAILABLE ? "Available" :
                   wantedStatus == BOOKED ? "Booked" : "Sold");
            found++;
        }
    }
    printf("+--------+--------------------------------+----------------------+----------------+\n");
    if (!found) printf("| No cars in this status.                                                       |\n");
    fclose(fp);
}

void inventoryReport()
{
    FILE *fp;
    struct Car car;
    int category, model, totalModels, carprice;
    int available, booked, sold, total;
    char categoryName[50];
    char modelName[100];
    char selectedprice[32];

    printf("\n===============================================================================================\n");
    printf("                                      INVENTORY REPORT\n");
    printf("===============================================================================================\n");
    printf("This report includes every model shown in the Customer Portal.\n");

    for (category = 1; category <= 4; category++)
    {
        getcategory(category, categoryName);
        printf("\nCATEGORY: %s\n", categoryName);
        printf("+------------------+-----------------------------+---------------+--------+---------+---------+-------+\n");
        printf("| %-16s | %-27s | %-13s | %6s | %7s | %7s | %5s |\n", "CATEGORY", "MODEL", "PRICE", "TOTAL", "AVAILABLE", "BOOKED", "SOLD");
        printf("+------------------+-----------------------------+---------------+--------+---------+---------+-------+\n");

        if (category == 1 || category == 2)
            totalModels = 6;
        else if (category == 3)
            totalModels = 9;
        else
            totalModels = 2;

        for (model = 1; model <= totalModels; model++)
        {
            getmodel(category, model, modelName);
            enterprice(selectedprice, category, model, &carprice);

            available = 0;
            booked = 0;
            sold = 0;
            total = 0;

            fp = fopen("cars.dat", "rb");
            if (fp != NULL)
            {
                while (fread(&car, sizeof(struct Car), 1, fp) == 1)
                {
                    if (car.category == category && car.model == model)
                    {
                        total++;
                        if (car.status == AVAILABLE) available++;
                        else if (car.status == BOOKED) booked++;
                        else if (car.status == SOLD) sold++;
                    }
                }
                fclose(fp);
            }

            printf("| %-16.16s | %-27.27s | %-13.13s | %6d | %7d | %7d | %5d |\n",
                   categoryName, modelName, selectedprice, total, available, booked, sold);
        }
        printf("+------------------+-----------------------------+---------------+--------+---------+---------+-------+\n");
    }

    printf("\nNEW MODELS ADDED BY OWNER\n");
    fp = fopen("cars.dat", "rb");
    if (fp != NULL)
    {
        int customFound = 0;
        printf("+--------+------------------+-----------------------------+----------------------+----------------+\n");
        printf("| %-6s | %-16s | %-27s | %-20s | %-14s |\n", "ID", "CATEGORY", "MODEL", "COLOUR", "STATUS");
        printf("+--------+------------------+-----------------------------+----------------------+----------------+\n");
        while (fread(&car, sizeof(struct Car), 1, fp) == 1)
        {
            if (car.model == 0)
            {
                getcategory(car.category, categoryName);
                printf("| %-6d | %-16.16s | %-27.27s | %-20.20s | %-14s |\n", car.carID, categoryName,
                       car.carName, car.color, car.status == AVAILABLE ? "Available" :
                       car.status == BOOKED ? "Booked" : "Sold");
                customFound++;
            }
        }
        printf("+--------+------------------+-----------------------------+----------------------+----------------+\n");
        if (customFound == 0) printf("No new models have been added.\n");
        fclose(fp);
    }

    printf("\nACTUAL INVENTORY DETAILS\n");
    fp = fopen("cars.dat", "rb");
    if (fp == NULL)
    {
        printf("No cars have been added to the inventory yet.\n");
    }
    else
    {
        printf("+--------+------------------+-----------------------------+----------------------+---------------+----------------+\n");
        printf("| %-6s | %-16s | %-27s | %-20s | %-13s | %-14s |\n", "ID", "CATEGORY", "MODEL", "COLOUR", "SELLING PRICE", "STATUS");
        printf("+--------+------------------+-----------------------------+----------------------+---------------+----------------+\n");
        while (fread(&car, sizeof(struct Car), 1, fp) == 1)
        {
            getcategory(car.category, categoryName);
            printf("| %-6d | %-16.16s | %-27.27s | %-20.20s | Rs.%-10d | %-14s |\n",
                   car.carID, categoryName, car.carName, car.color, car.sellingPrice,
                   car.status == AVAILABLE ? "Available" :
                   car.status == BOOKED ? "Booked" : "Sold");
        }
        printf("+--------+------------------+-----------------------------+----------------------+---------------+----------------+\n");
        fclose(fp);
    }

    printf("\n===============================================================================================\n");
    printf("                                         END OF INVENTORY REPORT\n");
    printf("===============================================================================================\n");
}

void updateCarStatus()
{
    int carID, found = 0, choice;
    FILE *fp = fopen("cars.dat", "rb+");
    struct Car car;

    if (fp == NULL)
    {
        printf("Unable to open inventory file.\n");
        return;
    }

    printf("Enter Car ID: ");
    scanf("%d", &carID);

    while (fread(&car, sizeof(struct Car), 1, fp) == 1)
    {
        if (car.carID == carID)
        {
            found = 1;

            printf("Current Status: ");
            if (car.status == 1)
                printf("AVAILABLE\n");
            else if (car.status == 2)
                printf("BOOKED\n");
            else if (car.status == 3)
                printf("SOLD\n");

            printf("\nSelect New Status:\n");
            printf("1. AVAILABLE\n");
            printf("2. BOOKED\n");
            printf("3. SOLD\n");
            printf("Enter choice: ");
            scanf("%d", &choice);

            if (choice < 1 || choice > 3)
            {
                printf("Invalid choice.\n");
                fclose(fp);
                return;
            }

            car.status = choice;

            fseek(fp, -(long)sizeof(struct Car), SEEK_CUR);
            fwrite(&car, sizeof(struct Car), 1, fp);

            printf("Car status updated successfully.\n");
            break;
        }
    }

    if (!found)
        printf("Car ID not found.\n");

    fclose(fp);
}
void deleteCar()
{
    FILE *fp, *temp;
    struct Car car;
    struct Car selectedCar;

    int carID;
    int found = 0;
    int confirm;
    int writeError = 0;
    int removed = 0;

    printf("\n====================================\n");
    printf("           DELETE CAR\n");
    printf("====================================\n");

    printf("\nAVAILABLE CARS IN SHOWROOM:\n");
    viewCarsByStatus(AVAILABLE);

    printf("\nEnter Car ID you want to delete: ");
    scanf("%d", &carID);

    fp = fopen("cars.dat", "rb");

    if (fp == NULL)
    {
        printf("\nUnable to open inventory file.\n");
        return;
    }

    while (fread(&car, sizeof(struct Car), 1, fp) == 1)
    {
        if (car.carID == carID)
        {
            found = 1;
            selectedCar = car;
            break;
        }
    }

    fclose(fp);

    if (!found)
    {
        printf("\nCar ID not found in inventory.\n");
        return;
    }

    if (selectedCar.status != AVAILABLE)
    {
        printf("\nThis car cannot be deleted.\n");

        if (selectedCar.status == BOOKED)
            printf("Reason: This car is currently BOOKED.\n");
        else if (selectedCar.status == SOLD)
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
    scanf("%d", &confirm);

    if (confirm != 1)
    {
        printf("\nCar deletion cancelled.\n");
        return;
    }

    fp = fopen("cars.dat", "rb");

    if (fp == NULL)
    {
        printf("\nUnable to open original inventory file.\n");
        return;
    }

    temp = fopen("cars_temp.dat", "wb");

    if (temp == NULL)
    {
        printf("\nUnable to create temporary file.\n");
        fclose(fp);
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

    if (ferror(fp))
        writeError = 1;

    fclose(fp);
    fclose(temp);

    if (writeError || removed != 1)
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

        remove("cars_temp.dat");
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
    int carID, found = 0, confirm;
    FILE *fp;
    struct Car car;

    printf("\n====================================\n");
    printf("         MARK CAR AS SOLD\n");
    printf("====================================\n");

    printf("\nAVAILABLE CARS:\n");
    viewCarsByStatus(AVAILABLE);
    printf("\nBOOKED CARS:\n");
    viewCarsByStatus(BOOKED);

    fp = fopen("cars.dat", "rb+");
    if (fp == NULL)
    {
        printf("Unable to open inventory file.\n");
        return;
    }

    printf("\nEnter Car ID to mark as sold: ");
    scanf("%d", &carID);

    while (fread(&car, sizeof(struct Car), 1, fp) == 1)
    {
        if (car.carID == carID)
        {
            found = 1;

            if (car.status == SOLD)
            {
                printf("This car is already marked as SOLD.\n");
                break;
            }

            printf("\nCar ID: %d\n", car.carID);
            printf("Model: %s\n", car.carName);
            printf("Color: %s\n", car.color);
            printf("Selling Price: Rs.%d\n", car.sellingPrice);
            printf("Mark this car as SOLD?\n1. Yes\n2. No\n");
            printf("Enter choice: ");
            scanf("%d", &confirm);

            if (confirm != 1)
            {
                printf("Operation cancelled.\n");
                break;
            }

            car.status = SOLD;

            fseek(fp, -(long)sizeof(struct Car), SEEK_CUR);
            fwrite(&car, sizeof(struct Car), 1, fp);

            printf("\nCar marked as SOLD successfully.\n");
            printf("Profit on this car: Rs.%d\n", car.sellingPrice - car.purchaseCost);
            break;
        }
    }

    if (!found)
        printf("Car ID not found.\n");

    fclose(fp);
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
        printf("9. Exit Owner Portal\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                inventoryReport();
                break;
            case 2:
                printf("\n1. Available\n2. Booked\n3. Sold\n");
                printf("Enter status: ");
                scanf("%d", &statusChoice);
                if (statusChoice >= AVAILABLE && statusChoice <= SOLD)
                    viewCarsByStatus(statusChoice);
                else
                    printf("Invalid status.\n");
                break;
            case 3:
                addCars();
                break;
            case 4:
                printf("Update Car Status\n");
                updateCarStatus();
                
                break;
            case 5:
                // printf("Delete Car\n");
                deleteCar();
                break;
            case 6:
                // printf("Mark Car as Sold\n");
                markCarAsSold();
                break;
            case 7:
                printf("Add Showroom Expenses\n");
                break;
            case 8:
                printf("Financial Reports\n");
                break;
            case 9:
                printf("Leaving owner portal.\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 9);
}

int main()
{
    initializeInventory();
    int password = 12345678, Enteredpassword, i = 1, customer_choice, Car_category, Car_model, color, bookingstatus, filerchoice, installmentchoice,choice, Car_Details, installmentmonths, carprice, bookingMode, selectedInventoryID;
    float downpayment, remainingamount, interestrate, totalamount, monthlyinstallment;
    char selectedcategory[50], selectedmodel[100], selectedcolor[50], selectedprice[32], name[100], city[100], phonenumber[20], filerstatus[4], installments[4], testdate[20], testtime[20], bookingdate[20], bookingtime[20],address[60], cnic[16];
    float taxrate, taxamount, final_car_price;
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
            printf("Enter Password: ");
            scanf("%d", &Enteredpassword);
            if (Enteredpassword == password)
            {
                printf("Access Granted\n");
                ownerPortal();
                break;
            }
            i++;
            if (i <= 3) printf("Incorrect Password, Try Again\n");
        }
        if (Enteredpassword != password)
            printf("Access Denied. Maximum attempts exceeded.\n");
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
            printf("5.Exit:\n");
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
            printf("\nCURRENT SHOWROOM AVAILABILITY\n");
            {
                FILE *inventoryFile = fopen("cars.dat", "rb");
                struct Car inventoryCar;
                int inventoryFound = 0;
                if (inventoryFile != NULL)
                {
                    printf("+--------+-----------------------------+----------------------+---------------+\n");
                    printf("| %-6s | %-27s | %-20s | %-13s |\n", "CAR ID", "MODEL", "COLOUR", "PRICE (RS.)");
                    printf("+--------+-----------------------------+----------------------+---------------+\n");
                    while (fread(&inventoryCar, sizeof(struct Car), 1, inventoryFile) == 1)
                    {
                        if (inventoryCar.status == AVAILABLE)
                        {
                            printf("| %-6d | %-27.27s | %-20.20s | %13d |\n", inventoryCar.carID,
                                   inventoryCar.carName, inventoryCar.color, inventoryCar.sellingPrice);
                            inventoryFound++;
                        }
                    }
                    printf("+--------+-----------------------------+----------------------+---------------+\n");
                    fclose(inventoryFile);
                }
                if (inventoryFound == 0)
                    printf("No cars are currently available in the showroom.\n");
            }
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
            printf("1. Book an Existing Catalogue Model\n");
            printf("2. Book a Newly Added Model\n");
            printf("Choose booking type: ");
            scanf("%d", &bookingMode);

            if (bookingMode == 2)
            {
                FILE *inventoryFile = fopen("cars.dat", "rb");
                struct Car inventoryCar, chosenCar;
                int inventoryFound = 0;
                if (inventoryFile != NULL)
                {
                    printf("\n===== NEWLY ADDED MODELS AVAILABLE =====\n");
                    printf("%-6s %-42s %-18s %-14s\n", "ID", "MODEL", "COLOUR", "PRICE");
                    while (fread(&inventoryCar, sizeof(struct Car), 1, inventoryFile) == 1)
                    {
                        if (inventoryCar.model == 0 && inventoryCar.status == AVAILABLE)
                        {
                            printf("%-6d %-42s %-18s Rs.%-10d\n", inventoryCar.carID,
                                   inventoryCar.carName, inventoryCar.color, inventoryCar.sellingPrice);
                            inventoryFound++;
                        }
                    }
                    fclose(inventoryFile);
                }
                if (inventoryFound == 0)
                {
                    printf("No newly added models are currently available.\n");
                    break;
                }
                printf("Enter Car ID you want to book: ");
                scanf("%d", &selectedInventoryID);
                if (!getAvailableCarByID(selectedInventoryID, &chosenCar) || chosenCar.model != 0)
                {
                    printf("Invalid Car ID or car is not available.\n");
                    break;
                }
                Car_category = chosenCar.category;
                Car_model = chosenCar.model;
                strcpy(selectedmodel, chosenCar.carName);
                strcpy(selectedcolor, chosenCar.color);
                getcategory(Car_category, selectedcategory);
                carprice = chosenCar.sellingPrice;
                sprintf(selectedprice, "Rs. %d", carprice);
            }
            else if (bookingMode == 1)
            {
                carcategory();
                default_29:
                printf("\nEnter Car Category: ");
                scanf("%d", &Car_category);

                if (Car_category < 1 || Car_category > 4)
                {
                    printf("Invalid Category!\n");
                    goto default_29;
                }

                getcategory(Car_category, selectedcategory);
                switch (Car_category)
                {
                    case 1: compactsedan(); break;
                    case 2: Sedan(); break;
                    case 3: suv(); break;
                    case 4: GR(); break;
                }
                default_model:
                printf("\nEnter Your Choice: ");
                scanf("%d", &Car_model);
                getmodel(Car_category, Car_model, selectedmodel);
                if (strcmp(selectedmodel, "Invalid Model") == 0)
                {
                    printf("Invalid Model!, please try again\n");
                    goto default_model;
                }

                if (Car_category == 1) yariscolor();
                else if (Car_category == 2) corollacolor();
                else if (Car_category == 3)
                {
                    if (Car_model >= 1 && Car_model <= 4) fortunercolor();
                    else hiluxcolor();
                }
                else if (Car_category == 4)
                {
                    if (Car_model == 1) fortunercolor();
                    else hiluxcolor();
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
                }
                enterprice(selectedprice, Car_category, Car_model, &carprice);
            }
            else
            {
                printf("Invalid booking type.\n");
                break;
            }

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
            {
                int reservedCarID;
                if (bookingMode == 2)
                    reservedCarID = reserveCarByID(selectedInventoryID);
                else
                    reservedCarID = reserveCar(Car_category, Car_model, selectedcolor);
                if (reservedCarID == -1)
                {
                    printf("Sorry, this model/color is not available in showroom inventory.\n");
                    break;
                }
                printf("Inventory reserved. Car ID: %d\n", reservedCarID);
                printf("Enter Your Name\n");
                scanf(" %29[^\n]", name);
                printf("Enter Your Phone Number (03XX-XXXXXXX)\n");
                scanf(" %19[^\n]", phonenumber);
                printf("Enter Your CNIC (42XXX-XXXXXXX-X)\n");
                scanf(" %15[^\n]", cnic);
                printf("Enter Your City\n");
                scanf(" %29[^\n]", city);
                printf("Enter Your Address\n");
                scanf(" %59[^\n]", address);
                printf("Enter Preferred Date (DD/MM/YYYY)\n");
                scanf(" %19[^\n]", bookingdate);
                printf("Enter Preferred Time (e.g. 3:00 PM)\n");
                scanf(" %19[^\n]", bookingtime);

                printf("Are You Filer\n");
                printf("1. Yes\n2. No\n");
                default_31:
                scanf("%d", &filerchoice);
                switch (filerchoice)
                {
                case 1:
                    strcpy(filerstatus, "Yes");
                    taxrate = 0.10;
                    break;
                case 2:
                    strcpy(filerstatus, "No");
                    taxrate = 0.18;
                    break;
                default:
                    printf("Invalid Choice\n");
                    goto default_31;
                }
                taxamount = carprice * taxrate;
                final_car_price = carprice + taxamount;
                printf("\nDo you want to buy the car on installments?\n");
                printf("1. Yes\n");
                printf("2. No\n");
                printf("Enter your choice: ");
                default_32:
                scanf("%d", &installmentchoice);

                switch (installmentchoice)
                {
                case 1:
                    strcpy(installments, "Yes");

                    printf("\nSelect Installment Duration:\n");
                    printf("1. 12 Months - No Interest\n");
                    printf("2. 24 Months - 10%% Interest\n");
                    printf("3. 36 Months - 15%% Interest\n");
                    printf("Enter Your Choice: ");

                default_33:
                    scanf("%d", &installmentmonths);

                    switch (installmentmonths)
                    {
                    case 1:
                        installmentmonths = 12;
                        interestrate = 0;
                        break;

                    case 2:
                        installmentmonths = 24;
                        interestrate = 0.10;
                        break;

                    case 3:
                        installmentmonths = 36;
                        interestrate = 0.15;
                        break;

                    default:
                        printf("Invalid Choice! Enter 1, 2, or 3: ");
                        goto default_33;
                    }
                    downpayment = final_car_price * 0.30;
                    remainingamount = final_car_price - downpayment;

                    totalamount = remainingamount +(remainingamount * interestrate);

                    monthlyinstallment = totalamount / installmentmonths;

                    printf("\n----- INSTALLMENT DETAILS -----\n");
                    printf("Car Price: Rs. %d\n", carprice);
                    printf("Down Payment (30%%): Rs. %.2f\n", downpayment);
                    printf("Remaining Amount: Rs. %.2f\n", remainingamount);
                    printf("Interest Rate: %.0f%%\n", interestrate * 100);
                    printf("Total Amount After Interest: Rs. %.2f\n", totalamount);
                    printf("Duration: %d Months\n", installmentmonths);
                    printf("Monthly Installment: Rs. %.2f\n", monthlyinstallment);
                    break;

                case 2:
                    strcpy(installments, "No");
                    printf("You selected full payment.\n");
                    break;

                default:
                    printf("Invalid Choice! Enter 1 or 2: ");
                    goto default_32;
                }
                printf("\n===== BOOKING SUMMARY =====\n");
                printf("Car Category: %s\n", selectedcategory);
                printf("Car Model: %s\n", selectedmodel);
                printf("Selected Color: %s\n", selectedcolor);
                printf("Price: %s\n", selectedprice);
                printf("Filer Status: %s\n", filerstatus);
                printf("Tax Rate: %.0f%%\n", taxrate * 100);
                printf("Tax Amount: Rs. %.2f\n", taxamount);
                printf("Total Price After Tax: Rs. %.2f\n", final_car_price);
                printf("Name: %s\n", name);
                printf("Contact: %s\n", phonenumber);
                printf("City: %s\n", city);
                printf("Filer: %s\n", filerstatus);
                printf("Installments: %s\n", installments);
                if (strcmp(installments, "Yes") == 0)
                {
                    printf("Down Payment: Rs. %.2f\n", downpayment);
                    printf("Remaining Amount: Rs. %.2f\n", remainingamount);
                    printf("Total Amount After Interest: Rs. %.2f\n", totalamount);
                    printf("Installment Duration: %d Months\n", installmentmonths);
                    printf("Monthly Installment: Rs. %.2f\n", monthlyinstallment);
                }
                printf("BOOKING CONFIRMED - CAR STATUS IS BOOKED\n");
                break;
            }
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
