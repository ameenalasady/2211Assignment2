// Converter
// Converts various types of units
// Ameen Al-Asady
// 251146878

#include <stdio.h>

int main()
{
    int choice;     // Variable to store the user's choice
    char direction; // Variable to store the direction of conversion
    float value;    // Variable to store the input value for conversion

    printf("Welcome to the conversion program!\n");

    while (1)
    {
        printf("Please enter an integer to choose an action:\n");
        printf("1 for conversion between Kilometre and Mile\n");
        printf("2 for conversion between Litres and Gallons\n");
        printf("3 for conversion between Hectares and Acres\n");
        printf("4 for conversion between Kilograms and Pounds\n");
        printf("5 for quit\n");

        scanf("%d", &choice); // Read the user's choice

        if (choice == 5)
        {
            break; // Exit the loop if the user chooses to quit
        }

        switch (choice)
        {
        case 1:
            printf("Enter K for conversion from Kilometre to Mile\n");
            printf("Enter M for conversion from Mile to Kilometre\n");
            scanf(" %c", &direction); // Read the conversion direction
            if (direction == 'K')
            {
                printf("Please enter a value in kilometres: ");
                scanf("%f", &value); // Read the value to be converted
                printf("Your conversion is %.2f miles.\n", value * 0.621371);
            }
            else if (direction == 'M')
            {
                printf("Please enter a value in miles: ");
                scanf("%f", &value); // Read the value to be converted
                printf("Your conversion is %.2f kilometres.\n", value / 0.621371);
            }
            else
            {
                printf("Invalid input. Please try again.\n");
            }
            break;
        case 2:
            printf("Enter L for conversion from Litres to Gallons\n");
            printf("Enter G for conversion from Gallons to Litres\n");
            scanf(" %c", &direction);
            if (direction == 'L')
            {
                printf("Please enter a value in litres: ");
                scanf("%f", &value);
                printf("Your conversion is %.2f gallons.\n", value * 0.264172);
            }
            else if (direction == 'G')
            {
                printf("Please enter a value in gallons: ");
                scanf("%f", &value);
                printf("Your conversion is %.2f litres.\n", value / 0.264172);
            }
            else
            {
                printf("Invalid input. Please try again.\n");
            }
            break;
        case 3:
            printf("Enter H for conversion from Hectares to Acres\n");
            printf("Enter A for conversion from Acres to Hectares\n");
            scanf(" %c", &direction);
            if (direction == 'H')
            {
                printf("Please enter a value in hectares: ");
                scanf("%f", &value);
                printf("Your conversion is %.2f acres.\n", value * 2.47105);
            }
            else if (direction == 'A')
            {
                printf("Please enter a value in acres: ");
                scanf("%f", &value);
                printf("Your conversion is %.2f hectares.\n", value / 2.47105);
            }
            else
            {
                printf("Invalid input. Please try again.\n");
            }
            break;
        case 4:
            printf("Enter K for conversion from Kilograms to Pounds\n");
            printf("Enter P for conversion from Pounds to Kilograms\n");
            scanf(" %c", &direction);
            if (direction == 'K')
            {
                printf("Please enter a value in kilograms: ");
                scanf("%f", &value);
                printf("Your conversion is %.2f pounds.\n", value * 2.20462);
            }
            else if (direction == 'P')
            {
                printf("Please enter a value in pounds: ");
                scanf("%f", &value);
                printf("Your conversion is %.2f kilograms.\n", value / 2.20462);
            }
            else
            {
                printf("Invalid input. Please try again.\n");
            }
            break;
        default: // If any other integer is inputted:
            printf("\nPlease try again\n\n");
        }
    }
}