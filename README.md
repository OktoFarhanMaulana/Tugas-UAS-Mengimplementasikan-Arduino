# OKTO FARHAN MAULANA (21010021)
# Sistem Deteksi Cahaya Untuk Menyalakan LED


## Description:

- LDR (Light Dependent Resistor) 
Adalah sensor yang sensitif terhadap cahaya. Komponen ini memiliki resistansi yang berubah-ubah tergantung pada intensitas cahaya yang diterimanya. Ketika cahaya lebih terang, resistansinya menjadi lebih rendah, dan sebaliknya, saat cahaya lebih redup, resistansinya meningkat. 
- It is a sensor that is sensitive to light. This component has a resistance that changes depending on the intensity of the light it receives. When the light is brighter, its resistance becomes lower, and vice versa, when the light is dimmer, its resistance increases.


## Component (Tools & Materials):

• Arduino Uno = 1 unit;
• Sensor LDR = 1 unit;
• LED (Light Emitting Diode) = 1 unit;
• Resistor 10Ω = 1 unit;
• Resistor 220Ω = 1 unit;
• Breadboard = 1 unit;
• Jumper Wire = 1 unit;
• Power Supply (5V atau USB) = 1 unit;


## Circuit Schematic:

![Circuit-Schematic](img/OKTOFARHANMAULANA(21010021).png)

## Sketch Code Program:

```cpp
/* Program Sistem Deteksi Cahaya Untuk Menyalakan LED */

int ledPin = 13;         
int ldrPin = A0;         
int ldrValue = 0;        

void setup() {
  pinMode(ledPin, OUTPUT);  
  pinMode(ldrPin, INPUT);   
  Serial.begin(9600);       
}

void loop() {
  ldrValue = analogRead(ldrPin); 
  
  
  if (ldrValue < 500) {
    digitalWrite(ledPin, HIGH);   
    Serial.println("LED ON");     
  } else {
    digitalWrite(ledPin, LOW);    
    Serial.println("LED OFF");    
  }
  
  delay(500);  
}


```

## Conclusion:

- Sistem Deteksi Cahaya untuk Menyalakan LED yang dirancang menggunakan Arduino Uno berhasil memenuhi tujuan utama yaitu mendeteksi intensitas cahaya dan mengontrol LED secara otomatis. Dengan memanfaatkan sensor LDR (Light Dependent Resistor), sistem ini mampu membaca tingkat pencahayaan di lingkungan dan mengambil keputusan untuk menyalakan atau mematikan LED berdasarkan ambang batas yang telah ditentukan. 
- The Light Detection System for Turning on LEDs designed using Arduino Uno successfully fulfills its main objective of detecting light intensity and controlling LEDs automatically. By utilizing the LDR (Light Dependent Resistor) sensor, this system is able to read the lighting level in the environment and make decisions to turn the LEDs on or off based on a predetermined threshold.
