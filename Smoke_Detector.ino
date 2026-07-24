#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,10,9,8,7);
int smokePin = A0;
int redLED = 2;
int greenLED = 3;
int buzzer = 4;
int threshold = 300; 

void setup() {
  lcd.begin(16,2);

  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(buzzer, OUTPUT);
  lcd.setCursor(0,0);
  lcd.print("Smoke Detector");
  lcd.setCursor(0,1);
  lcd.print("Initializing...");
  delay(2000);
  lcd.clear();
}

void loop() {
  int smokeValue = analogRead(smokePin);
  lcd.setCursor(0,0);
  lcd.print("Smoke:");
  lcd.print(smokeValue);
  lcd.print("   "); 

  if(smokeValue > threshold) {
    //Danger
    digitalWrite(redLED, HIGH);
    digitalWrite(greenLED, LOW);
    digitalWrite(buzzer, HIGH);

    lcd.setCursor(0,1);
    lcd.print("ALERT! SMOKE   ");
  } 
  else {
    //Safe
    digitalWrite(redLED, LOW);
    digitalWrite(greenLED, HIGH);
    digitalWrite(buzzer, LOW);
    lcd.setCursor(0,1);
    lcd.print("Air is Safe    ");
  }
  delay(500);
}
