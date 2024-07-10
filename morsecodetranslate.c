 /*
 * Filename:   MorseCodeTranslate.c
 * Author:      Christopher Bergsveinsson
 * Date:        6/14/24
 *
 * Translates letters to visual morse code shown by the
 * MSP430's LED light.
 *
 */

#include <msp430.h>
#include <stdio.h>
#include <string.h>

#define delay 40000;    // Software Delay

    void space() {  // Delay in between dots and dashes
    volatile unsigned int i = delay;  // volatile to prevent optimization
    do i--;
    while(i != 0);
    }

    void spaceLet() { // Delay in between letters
        int d;
        for (d=0; d<4; d++) {
            volatile unsigned int i = delay;  // volatile to prevent optimization
            do i--;
            while(i != 0);
                 }
    }

    void spaceWord() {  // Delay in between words
        int d;
        for (d=0; d<8; d++) {
           volatile unsigned int i = delay;  // volatile to prevent optimization
           do i--;
           while(i != 0);
                 }
    }

    void dot() {  // blinks for dot
        int d;
        for(d=0; d<4; d++) {
                P1OUT ^= 0x01; // Toggle P1.0 using exclusive-OR
                if(d==2){
                space();
                }

    }
    }
    void dash() {  // blinks for dash
            int d;
            for(d=0; d<4; d++) {

                    P1OUT ^= 0x01; // Toggle P1.0 using exclusive-OR
                    if(d==2) {
                        space();
                        space();
                        space();
                    }

                }
        }

    void mcTranslate(char t[]) {
        P1DIR |= 0x01;
        int a;
        int len = strlen(t);

        for(a=0; a<len; a++) {
            switch (t[a]) {   // cases for all letters and numbers
              case 'a':
                dot();
                space();
                dash();
                spaceLet();
                break;

              case 'b':
                dash();
                space();
                dot();
                space();
                dot();
                space();
                dot();
                spaceLet();
                break;

               case 'c':
                dash();
                space();
                dot();
                space();
                dash();
                space();
                dot();
                spaceLet();
                break;

               case 'd':
                dash();
                space();
                dot();
                space();
                dot();
                spaceLet();
                break;

               case 'e':
                dot();
                spaceLet();
                break;

               case 'f':
                dot();
                space();
                dot();
                space();
                dash();
                space();
                dot();
                spaceLet();
                break;

               case 'g':
                dash();
                space();
                dash();
                space();
                dot();
                spaceLet();
                break;

               case 'h':
                dot();
                space();
                dot();
                space();
                dot();
                space();
                dot();
                spaceLet();
                break;

               case 'i':
                dot();
                space();
                dot();
                spaceLet();
                break;

               case 'j':
                 dot();
                 space();
                 dash();
                 space();
                 dash();
                 space();
                 dash();
                 spaceLet();
                 break;

               case 'k':
                 dash();
                 space();
                 dot();
                 space();
                 dash();
                 spaceLet();
                 break;

               case 'l':
                 dot();
                 space();
                 dash();
                 space();
                 dot();
                 space();
                 dot();
                 spaceLet();
                 break;

               case 'm':
                 dash();
                 space();
                 dash();
                 spaceLet();
                 break;

               case 'n':
                 dash();
                 space();
                 dot();
                 spaceLet();
                 break;

               case 'o':
                 dash();
                 space();
                 dash();
                 space();
                 dash();
                 spaceLet();
                 break;

               case 'p':
                 dot();
                 space();
                 dash();
                 space();
                 dash();
                 space();
                 dot();
                 spaceLet();
                 break;

               case 'q':
                 dash();
                 space();
                 dash();
                 space();
                 dot();
                 space();
                 dash();
                 spaceLet();
                 break;

               case 'r':
                 dot();
                 space();
                 dash();
                 space();
                 dot();
                 spaceLet();
                 break;

               case 's':
                 dot();
                 space();
                 dot();
                 space();
                 dot();
                 spaceLet();
                 break;

               case 't':
                 dash();
                 spaceLet();
                 break;

               case 'u':
                 dot();
                 space();
                 dot();
                 space();
                 dash();
                 spaceLet();
                 break;

               case 'v':
                 dot();
                 space();
                 dot();
                 space();
                 dot();
                 space();
                 dash();
                 spaceLet();
                 break;

               case 'w':
                 dot();
                 space();
                 dash();
                 space();
                 dash();
                 spaceLet();
                 break;

               case 'x':
                 dash();
                 space();
                 dot();
                 space();
                 dot();
                 space();
                 dash();
                 spaceLet();
                 break;

               case 'y':
                dash();
                space();
                dot();
                space();
                dash();
                space();
                dash();
                spaceLet();
                break;

               case 'z':
                dash();
                space();
                dash();
                space();
                dot();
                space();
                dot();
                spaceLet();
                break;

               case '1':
                dot();
                space();
                dash();
                space();
                dash();
                space();
                dash();
                space();
                dash();
                spaceLet();
                break;

               case '2':
                dot();
                space();
                dot();
                space();
                dash();
                space();
                dash();
                space();
                dash();
                spaceLet();
                break;

               case '3':
                dot();
                space();
                dot();
                space();
                dot();
                space();
                dash();
                space();
                dash();
                spaceLet();
                break;

               case '4':
                dot();
                space();
                dot();
                space();
                dot();
                space();
                dot();
                space();
                dash();
                spaceLet();
                break;

               case '5':
                dot();
                space();
                dot();
                space();
                dot();
                space();
                dot();
                space();
                dot();
                spaceLet();
                break;

               case '6':
                dash();
                space();
                dot();
                space();
                dot();
                space();
                dot();
                space();
                dot();
                spaceLet();
                break;

               case '7':
                dash();
                space();
                dash();
                space();
                dot();
                space();
                dot();
                space();
                dot();
                spaceLet();
                break;

               case '8':
                dash();
                space();
                dash();
                space();
                dash();
                space();
                dot();
                space();
                dot();
                spaceLet();
                break;

               case '9':
                dash();
                space();
                dash();
                space();
                dash();
                space();
                dash();
                space();
                dot();
                spaceLet();
                break;

               case '0':
                dash();
                space();
                dash();
                space();
                dash();
                space();
                dash();
                space();
                dash();
                spaceLet();
                break;

               case ' ':
                spaceWord();
                break;
            }

        }

    }

    int main(void) {
    WDTCTL = WDTPW | WDTHOLD; // Stop watchdog timer
    PM5CTL0 &= ~LOCKLPM5;  // Disable the GPIO power-on default high-impedance mode
                           // to activate previously configured port settings
    P1DIR |= 0x01;  // Set P1.0 to output direction

    char c[]; // character array that will be translated

    printf("Enter what you would like to translate:  ");  // ask
    scanf("%s", c);

    mcTranslate(c); // translate

    return 0;
}
