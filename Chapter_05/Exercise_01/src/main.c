/* Exercise 1 from Chapter V.
 * Converting minutes to hours and minutes.
 */

#include <stdio.h>

#define MINUTES_IN_HOUR 60

void clearInputBuffer();

int main(void) {

        int  hours, minutes, total_minutes;

        do {
                printf("Please, type in the amount of minutes. Give me zero to exit: ");
                int check = scanf("%d", &total_minutes); //This variable equals 1 if the number has been successfully read.
                
                if(check == 0) { //Otherwise try again.
                        clearInputBuffer();
                        continue;
                }
                
                hours    = total_minutes / MINUTES_IN_HOUR; 
                minutes  = total_minutes % MINUTES_IN_HOUR;
                printf("Time: %dh:%dm\n\n", hours, minutes); 
                
                clearInputBuffer();

        } while(total_minutes != 0);

        return 0;
}

void clearInputBuffer() {
        static char buffer; //The variable is static to avoid infinite memory allocation.
        while((buffer = getchar()) != '\n' && buffer != EOF); //Clearing the input buffer.
}

