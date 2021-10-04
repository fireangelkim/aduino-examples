int swBtn = 12;
int greenLed = 10;


void setup() {
  // put your setup code here, to run once: 
  pinMode(swBtn, INPUT_PULLUP);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     
  pinMode(greenLed, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(swBtn) == LOW)
    digitalWrite(greenLed, HIGH);
  else
    digitalWrite(greenLed, LOW);
}
