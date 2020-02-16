
/*
 * Dein Arduino blinkt jede Sekunde!
 * IT WORKS, b-----s!
 */
 
void setup() {
  pinMode(BUILTIN_LED, OUTPUT);
}

void loop() {                              // Alles innerhalb von loop() wird wiederholt durchlaufen

    digitalWrite(BUILTIN_LED, HIGH);       // Die LED bekommt Strom
    delay(500);                            // Das Programm wartet für 500 Millisekunden
    digitalWrite(BUILTIN_LED, LOW);        // Die LED bekommt keinen Strom
    delay(500);                            // Das Programm wartet für 500 Millisekunden
}
