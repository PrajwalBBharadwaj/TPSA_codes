/*
 * connection: https://cdn.instructables.com/F3D/DJQ4/IAP6UGTG/F3DDJQ4IAP6UGTG.LARGE.jpg
 */
 const int buzzer = 9; //buzzer to arduino pin 9


void setup(){
 
  pinMode(buzzer, OUTPUT); // Set buzzer - pin 9 as an output

}

void loop(){
 
  tone(buzzer, 1000); // Send 1KHz sound signal...
  delay(1000);        // ...for 1 sec
  noTone(buzzer);     // Stop sound...
  delay(1000);        // ...for 1sec
  
}
