int buttons[6];
// C = 262Hz, D = 294Hz, E = 330Hz, F=349Hz
int notes[] = {262, 294, 330, 349};

void setup() {
  buttons[0] = 2;
  // Starting communication with computer
  Serial.begin(9600);
}

void loop() {
  // Value from pin A0
  int keyVal = analogRead(A0);
  Serial.println(keyVal);
  
  if(keyVal >= 1020 && keyVal <= 1030){
    tone(8, notes[3]);
  }
  else if(keyVal >= 990 && keyVal <= 1010){
    tone(8, notes[2]);  
  }
  else if(keyVal >= 505 && keyVal <= 518){
    tone(8, notes[1]);  
  }
  else if(keyVal >= 5 && keyVal <= 15){
    tone(8, notes[0]); 
  }
  else{
    noTone(8);  
  }
 }
