
/*
 * Algorithmus: Zeitspanne (1000 ms) / 2 * Anzahl der Wiederholungen (30)
 * Wir müssen das Ergebnis halbieren, da ein Blinken aus zwei Befehlen besteht - an und aus. 
 */
 
void setup() {
  pinMode(BUILTIN_LED, OUTPUT);
}

void loop() {                             // Alles innerhalb von loop() wird wiederholt durchlaufen

    digitalWrite(BUILTIN_LED, HIGH);      // Die LED bekommt Strom
    delay(17);                            // Das Programm wartet für 1/60 Sekunde
    digitalWrite(BUILTIN_LED, LOW);       // Die LED bekommt keinen Strom
    delay(17);                            // Das Programm wartet für 1/60 Sekunde
}
