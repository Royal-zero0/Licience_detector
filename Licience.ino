
#include <LiquidCrystal.h>
#define buzzer 6
#define smoke A0
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);


#define IN1 8
#define IN2 9

char input[12];
int count = 0;

void setup() {
    pinMode(buzzer, OUTPUT);
pinMode(smoke, INPUT);
  
 Serial.begin(9600);
  lcd.begin (16,2);
         //Lighting backlight
          lcd.home ();
         // lcd.print("welcome"); 

  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  Serial.println("test");

  
}
int c=0;
void loop() {
  /*

   int sensorReading = analogRead(smoke);
\
 
  
  if(sensorReading > 300 && c == 0){
 lcd.setCursor(0, 0);
   lcd.clear();
  lcd.print("Alcohol detected");
    Serial.println("buzzer");
    
    
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  delay(1000);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  
  digitalWrite(buzzer, HIGH);
    delay(3000);
  digitalWrite(buzzer, LOW);
   
  c=1;
  }  else{

    c=0;

        digitalWrite(buzzer, LOW);
        
         lcd.clear();
         lcd.setCursor(0, 0);
  lcd.print("Not detected");
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  }
*/

if(Serial.available()) // CHECK FOR AVAILABILITY OF SERIAL DATA

{ count = 0; // Reset the counter to zero

while(Serial.available() && count < 12) {

input[count] = Serial.read(); // Read 1 Byte of data and store it in the input[] variable

count++; // increment counter delay(5); }

// PRINTING RFID TAG

for(int i=0;i<12;i++)

Serial.print(input[i]);



}

}
}
