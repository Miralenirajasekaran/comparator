#include <pic.h>

// Define pins for LED and comparator output
#define LED_PIN RB0
#define COMP_OUT RB1

void main() {
    // Set LED pin as output
    TRISB0 = 0;
    LED_PIN = 0; // Initially off
    
    // Set comparator output pin as input
    TRISB1 = 1;

    while (1) {
        // Read comparator output
        if (COMP_OUT) {
            LED_PIN = 1; // Voltage at non-inverting input > Voltage at inverting input
        } else {
            LED_PIN = 0; // Voltage at non-inverting input <= Voltage at inverting input
        }
    }
}

