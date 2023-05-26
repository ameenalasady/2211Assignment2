// English Numbers
// Convert any integer from 1-999 into the English word (in lower case)
// Ameen Al-Asady
// 251146878

#include <stdio.h>

int main(void)
{
    int num;

    // Store the English words for ones, teens, and tens.
    // This is an array of pointers that point to the first character of each string. The compiler knows that the string is over using the null character.
    char *ones[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    char *teens[] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    char *tens[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

    while (1)
    {
        // Prompt the user to enter a value
        printf("Please enter a value (1-999, 0 to quit): ");
        scanf("%d", &num);

        // Check if the user wants to quit
        if (num == 0)
        {
            break;
        }

        printf("You entered the number ");

        // Convert hundreds place
        if (num >= 100)
        {
            printf("%s hundred ", ones[num / 100]);
            num %= 100; // Reduce the number to two digits
            if (num != 0)
            {
                printf("and ");
            }
        }

        // Convert tens place
        if (num >= 20)
        {
            printf("%s", tens[num / 10]);
            num %= 10; // Reduce the number to a single digit
            if (num != 0)
            {
                printf("-");
            }
        }
        else if (num >= 10)
        {
            printf("%s ", teens[num - 10]);
            num = 0; // No ones place digit needed
        }

        // Convert ones place
        if (num > 0)
        {
            printf("%s ", ones[num]);
        }

        printf("\n");
    }

    return 0;
}
