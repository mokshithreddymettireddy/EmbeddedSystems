#include <reg51.h>

// Software delay routine for 8051
void delay(unsigned int count) {
    unsigned int i, j;
    for (i = 0; i < count; i++) {
        for (j = 0; j < 1275; j++);
    }
}

void main(void) {
    while (1) {
        P2 = 0xFF;  // Turn ON all LEDs on Port 2 (Active High)
        delay(100);
        
        P2 = 0x00;  // Turn OFF all LEDs on Port 2
        delay(100);
    }
}