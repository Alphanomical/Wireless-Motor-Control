//two button setup
//one for raise, one for lower
const int raiseButton = 7;
const int lowerButton = 6;

boolean raiseStatus = 0;
boolean lowerStatus = 0;

void setup() {
  //transmit Serial data at 9600 baud
  //the XBee will transmit the data
  Serial.begin(9600);
  
  pinMode(raiseButton,INPUT);
  pinMode(lowerButton,INPUT);
}
void loop() {
  //read the buttons
  raiseStatus = digitalRead(raiseButton);
  lowerStatus = digitalRead(lowerButton);
  
  if(raiseStatus == HIGH && lowerStatus == LOW){
    Serial.println("R"); //raise platform
  }
  
  else if(raiseStatus == LOW && lowerStatus == HIGH){
    Serial.println("L"); //lower platform
  }
  
  else
  {
  Serial.println("X"); //keep system stationary 
  }
  
  delay(100);
}
