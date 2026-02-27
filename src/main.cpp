#include <Arduino.h>
/**
 * @file main.ino
 * @brief Embedded Light Intensity Monitoring using LDR
 * @author AKSHAY KUMAR
 * @date 2026-02-15
 *
 * @details
 * Reads analog brightness data from LDR sensor
 * and displays structured output via Serial Monitor.
 */

#define LDR_PIN A0
 // Define LDR analog pin (Use A0)

 int ldrValue = 0;
 // Create variable to store sensor reading

void setup() {

    Serial.begin(9600);
    // Initialize Serial communication (9600 baud rate)

    Serial.println("LDR setup");
    // Print system initialization message
}

void loop() {

    ldrValue = analogRead(A0);
    // Read analog value from LDR

    Serial.println(ldrValue);
    // Print raw ADC value

    if (ldrValue == 255) {
        Serial.println("Bright");
    } else if (ldrValue == 0) {
        Serial.println("Dark");
    } else {
        Serial.println("Moderate");
    }
    // Apply threshold logic (Bright / Dark detection)
    delay(1000);
    // Add delay (500ms or 1 second)
}
