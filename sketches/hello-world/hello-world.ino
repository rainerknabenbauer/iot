
/*
 * Dein Arduino blinkt jede Sekunde!
 * IT WORKS, b-----s!
 */
 
void setup() {
  pinMode(BUILTIN_LED, OUTPUT);
  pinMode(D0, WAKEUP_PULLUP);
}

void loop() {

    digitalWrite(BUILTIN_LED, HIGH);
    delay(500);   // 500 steht für 500ms -> Als also eine halbe Sekunde aus..
    digitalWrite(BUILTIN_LED, LOW);
    delay(500);   // ... eine halbe Sekunde an. Probiert gleich mal, die Zahl zu ändern und hochzuladen!
}
