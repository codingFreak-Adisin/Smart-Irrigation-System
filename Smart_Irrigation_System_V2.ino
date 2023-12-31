#include <LiquidCrystal_I2C.h> // Using LCD package, to display water level on LCD Display
#include "DHT.h" // Using the DHT module to check temperature and humidity
LiquidCrystal_I2C lcd(0x27, 16, 2);
#define DHTPIN 2 
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

int led = 13; // Declaring the LED - For testing bluetooth module
int data; // To receive the bluetooth data
int relay = 6; // Digital pin 6 alloted for relay
int ldrPin = A1; // Light Dependent Resistor - Analog pin
int ldrled = 7;

void setup() {
  Serial.begin(9600); // starting the serial monitor
  lcd.init();
  lcd.backlight();
  dht.begin();
  pinMode(13, OUTPUT);
  pinMode(relay, OUTPUT);
  pinMode(ldrled, OUTPUT);
}

void loop() {

  float h = dht.readHumidity();
  // Read temperature as Celsius (the default)
  float t = dht.readTemperature();

  // Check if any reads failed and exit early (to try again).
  if (isnan(h) || isnan(t)) {
    Serial.println(F("Failed to read from DHT sensor!"));
    return;
  }

  // Used for bluetooth module testing
  
    while(Serial.available() > 0)
      {
        data = Serial.read();
        // Serial.println(data);

        if(data == 'e'){
            digitalWrite(led, HIGH); // If the data recieved is equal to e then turn on the light on pin 13 
        }
            
        else if(data == 'f') // If the data recieved is equal to f then turn off the light on pin 13{
            digitalWrite(led, LOW);
        } 
    
      }

// This is for the Light Sensor or (LDR - Light Dependent Resistor)
  int ldrdata = analogRead(ldrPin);
  Serial.println("");
  Serial.print("Light Sensor ");
  Serial.print("Value = ");
  Serial.print(ldrdata);
  if(ldrdata < 2000){
    digitalWrite(ldrled, HIGH);
  }
  else if(ldrdata > 2000){
    digitalWrite(ldrled, LOW);
  }

// This is for DHT 11 - (Humidity and Temperature sensor)
  int value = analogRead(A0);
  lcd.setCursor(0, 0);
  lcd.print("Value :");
  lcd.print(value); // Displays the value of water detected

  Serial.println(value);
  lcd.setCursor(0, 1);
  lcd.print("W Level :"); // Displays the water level

  Serial.print(F("Humidity: "));
  Serial.print(h); // Printing humidity % in the serial monitor
  Serial.print(F("%  Temperature in °C: "));
  Serial.print(t); // Printing temperature in °C in the serial monitor
  delay(2000);

// To check the water sensor's analog data and perform relay task accordingly 
if (value == 0) {
    lcd.print("Empty ");
    digitalWrite(relay, HIGH);
  }
  else if (value >= 1 && value <= 250) {
    lcd.print("LOW   ");
    digitalWrite(relay, HIGH);
  }
  else if (value > 250 && value <= 510) {
    lcd.print("Medium");
    digitalWrite(relay, HIGH);
  }
  else if (value > 510){
    lcd.print("HIGH  ");
    digitalWrite(relay, LOW);
  }
}
