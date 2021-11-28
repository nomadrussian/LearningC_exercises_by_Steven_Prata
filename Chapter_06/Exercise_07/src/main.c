/* Exercise 7 from Chapter VI.
 * Reversing the string.
 * Actually the exercise demands it only for one word,
 * but I'm trying to overcome this limitation. Because I like taking challenges.
 */

#include <stdio.h>
#include <string.h>
#include <stdint.h>

#define MAX 4095 // not including '\0' symbol

void printAsterisks(uint8_t);
void clearString(char[]);
void clearInputBuffer(void);

int main(void) {

        char text[MAX + 1], temp;
        int length, index;

        printAsterisks(46);
        printf("Please, type in any string. To exit give me #. THE MAX LENGTH: 4095 symbols.\n");
        printAsterisks(46);

        while(1) {
                index = 0;
                printf("Your string : "); 

                fgets(text, MAX + 1, stdin);
                
                if(text[0] == '#') {
                        printAsterisks(39);
                        printf("The program has been cancelled by User.\n");
                        printAsterisks(39);
                        break;
                }

                /* Thanks to Some programmer dude who helped me to fix this bug with string underflow.
                 * I was attempting to call clearInputBuffer() in all cases, but I didn't have to.
                 * So, we have to check if there is a new line to stop reading the input.
                 * This happenes because with underflow I press <Enter> once and fgets() reads it as '\n', 
                 * but clearInputBuffer() waits for the second new line ('\n'). 
                 * So, if the input length is less than MAX, we don't have to clear the input buffer, but
                 * we HAVE TO finish the string earlier with '\0'.
                 */
                size_t newline_pos = strcspn(text, "\n");
                if (text[newline_pos] == '\n') {
                        // There's a newline in the input, remove it
                        text[newline_pos] = '\0';
                }
                else {
                        // There's no newline, skip the remainder of the line
                        clearInputBuffer();
                }

                length = strlen(text);
                
                for(index = 0; index < length / 2; index++) {
                        temp = text[index];
                        text[index] = text[length - index - 1];
                        text[length - index - 1] = temp;
                }
                printf("Reversed    : %s\n\n", text);

                clearString(text);
        }

        return 0;
}

void printAsterisks(uint8_t count) {
        for(uint8_t i = 0; i < count; i++) {
                printf("*");
        }
        printf("\n");
}

void clearString(char buffer[MAX + 1]) {
        for(int i = 0; buffer[i] != 0; i++) {
                buffer[i] = '\0';
        }
}

void clearInputBuffer() {
        static int buff;
        while((buff = getchar()) != '\n' && buff != EOF);
}

