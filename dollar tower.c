#include <stdio.h>
#include <ctype.h>  // For checking if the character is alphabetic

int main() {
    int lines, i, j;
    char ch;

    // Get the starting character input from the user
    while (1) {
        printf("Enter a character to print (a-z or A-Z only): ");
        if (scanf(" %c", &ch) != 1 || !isalpha(ch)) {
            // If input is not a single character or not alphabetic
            printf("Error: Invalid character. Please enter a valid alphabet character (a-z or A-Z only).\n");
            while (getchar() != '\n');  // Clear the buffer of invalid input
        } else {
            break;  // Break out of the loop if a valid character is entered
        }
    }

    // Prompt for the number of lines until a valid number is entered
    while (1) {
        printf("Enter the number of lines: ");
        if (scanf("%d", &lines) != 1 || lines <= 0) {  
            // If the input is not a valid integer or it's a non-positive number
            printf("Error: Please enter a valid positive integer for the number of lines.\n");
            while (getchar() != '\n');  // Clear the invalid input from the buffer
        } else {
            break;  // Exit the loop if the input is valid
        }
    }

    // Print the alphabet pattern
    for (i = 1; i <= lines; i++) {
        for (j = 1; j <= i; j++) {
            printf("%c", ch);
        }
        printf("\n");

        // Move to the next alphabet after printing a line
        ch++;
        
        // Wrap around if 'z' is exceeded
        if (ch > 'z') {
            ch = 'a'; // Reset to 'a' after 'z'
        }
    }

    return 0;
}


