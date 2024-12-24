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
