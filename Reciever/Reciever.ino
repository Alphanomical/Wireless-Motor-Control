const int led = 8; //led at pin 13
const int MotorPin1 = 6;
const int MotorPin2 = 7;

char msg;

void setup() {
  Serial.begin(9600);//match the baud on the sender arduino
  pinMode(led,OUTPUT);
  pinMode(MotorPin1,OUTPUT);
  pinMode(MotorPin2,OUTPUT);
}
void loop() {
while(Serial.available() >0) {
           msg=Serial.read();
           
           //R is code for raise the platform
           if(msg=='R') {
               digitalWrite(led,HIGH);
               digitalWrite(MotorPin1, HIGH);
               digitalWrite(MotorPin2, LOW);
           }
           
           //L is code for lower the platform
           if(msg=='L') {
                digitalWrite(led,LOW);
                digitalWrite(MotorPin1, LOW);
                digitalWrite(MotorPin2, HIGH);
           }
           
           //X is code for keep stationary
           if(msg=='X') {
                digitalWrite(led,LOW);
                digitalWrite(MotorPin1, HIGH);
                digitalWrite(MotorPin2, HIGH);
           }
delay(10);
}
}
