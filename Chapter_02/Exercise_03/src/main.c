/* Exercise 3 from Chapter II.
 * In this exercise the program is playing a sound using ASCII code
 * and printing a message.
 * Just so simple.
 */

#include <stdio.h>

void playASCIISound(void);

int main(void) {
        playASCIISound();
        printf("Напуганная внезапным звуком, Вика вскрикнула:\n\"Что это было?????\"\n");
        return 0;
}

void playASCIISound(void) {
        printf("\a");       
}

/* Unfortunately, My Linux Mint Terminal doesn't want to play it. 
 * But if I use e.g. an online C compiler, it has a nice sound :)
 */

