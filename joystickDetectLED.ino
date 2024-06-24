int joystick = 2;
int joystickX = 0;
int joystickY = 1;

int redUp = 4;
int blueDown = 5;
int greenLeft = 6;
int yellowRight = 7;

void setup() {
  // put your setup code here, to run once:
  pinMode(joystick, INPUT);
  digitalWrite(joystick, HIGH);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("Switch: "); 
  Serial.print(digitalRead(joystick));
  Serial.print("\n");
  Serial.print("X-Axis: "); 
  Serial.print(analogRead(joystickX));
  Serial.print("\n");
  Serial.print("Y-Axis: "); 
  Serial.print(analogRead(joystickY));
  Serial.print("\n\n\n");
  delay(1000);

  if(analogRead(joystickX) < 511){
    digitalWrite(greenLeft, HIGH);
  }
  else digitalWrite(greenLeft, LOW);
  
  if(analogRead(joystickX) > 511){
    digitalWrite(yellowRight, HIGH);
  }
  else digitalWrite(yellowRight, LOW);

  if(analogRead(joystickY) < 517){
    digitalWrite(redUp, HIGH);
  }
  else digitalWrite(redUp, LOW);

  if(analogRead(joystickY) > 517){
    digitalWrite(blueDown, HIGH);
  }
  else digitalWrite(blueDown, LOW);
}
