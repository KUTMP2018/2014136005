


void chasenom(int x) {
  digitalWrite(latchPin,LOW);
if(x==1) {  
  shiftOut(dataPin, clockPin, LSBFIRST, leds);
  shiftOut(dataPin, clockPin, LSBFIRST, leds);

for(int i=0;i<4;i++) {
  digitalWrite(clockPin,LOW);
  digitalWrite(dataPin,0);
  digitalWrite(clockPin,HIGH);
  }
  
  digitalWrite(clockPin,LOW);
  digitalWrite(dataPin,1);
  digitalWrite(clockPin,HIGH);
  
  for(int i=0;i<3;i++) {
  digitalWrite(clockPin,LOW);
  digitalWrite(dataPin,0);
  digitalWrite(clockPin,HIGH);
  }
  delay(200);
}

else if(x==2) {  
  shiftOut(dataPin, clockPin, LSBFIRST, leds);
  shiftOut(dataPin, clockPin, LSBFIRST, leds);

 
 
  digitalWrite(clockPin,LOW);
  digitalWrite(dataPin,0);
  digitalWrite(clockPin,HIGH);

  digitalWrite(clockPin,LOW);
  digitalWrite(dataPin,1);
  digitalWrite(clockPin,HIGH);

  for(int i=0;i<6;i++){
  digitalWrite(clockPin,LOW);
  digitalWrite(dataPin,0);
  digitalWrite(clockPin,HIGH);
  }
  delay(200);
}

else if(x==3) {  
  shiftOut(dataPin, clockPin, LSBFIRST, leds);

  for(int i=0;i<4;i++) {
  digitalWrite(clockPin,LOW);
  digitalWrite(dataPin,0);
  digitalWrite(clockPin,HIGH);
  }
  
  digitalWrite(clockPin,LOW);
  digitalWrite(dataPin,1);
  digitalWrite(clockPin,HIGH);
  
  for(int i=0;i<3;i++) {
  digitalWrite(clockPin,LOW);
  digitalWrite(dataPin,0);
  digitalWrite(clockPin,HIGH);
  }
  shiftOut(dataPin, clockPin, LSBFIRST, leds);
  delay(200);
}

else if(x==4) {  
  shiftOut(dataPin, clockPin, MSBFIRST, leds);
  
 
  
  digitalWrite(clockPin,LOW);
  digitalWrite(dataPin,0);
  digitalWrite(clockPin,HIGH);

  digitalWrite(clockPin,LOW);
  digitalWrite(dataPin,1);
  digitalWrite(clockPin,HIGH);

  for(int i=0;i<6;i++){
  digitalWrite(clockPin,LOW);
  digitalWrite(dataPin,0);
  digitalWrite(clockPin,HIGH);
  }
  
  shiftOut(dataPin, clockPin, MSBFIRST, leds);
  delay(200);
}

else if(x==5) {  
  for(int i=0;i<4;i++) {
  digitalWrite(clockPin,LOW);
  digitalWrite(dataPin,0);
  digitalWrite(clockPin,HIGH);
  }
  
  digitalWrite(clockPin,LOW);
  digitalWrite(dataPin,1);
  digitalWrite(clockPin,HIGH);
  
  for(int i=0;i<3;i++) {
  digitalWrite(clockPin,LOW);
  digitalWrite(dataPin,0);
  digitalWrite(clockPin,HIGH);
  }
  shiftOut(dataPin, clockPin, LSBFIRST, leds);
  shiftOut(dataPin, clockPin, LSBFIRST, leds);
delay(200);
}

else if(x==6) {  
  
  
  digitalWrite(clockPin,LOW);
  digitalWrite(dataPin,0);
  digitalWrite(clockPin,HIGH);

  digitalWrite(clockPin,LOW);
  digitalWrite(dataPin,1);
  digitalWrite(clockPin,HIGH);

  for(int i=0;i<6;i++){
  digitalWrite(clockPin,LOW);
  digitalWrite(dataPin,0);
  digitalWrite(clockPin,HIGH);
  }
  
  shiftOut(dataPin, clockPin, LSBFIRST, leds);
  shiftOut(dataPin, clockPin, LSBFIRST, leds);
}
delay(500);
  digitalWrite(latchPin,HIGH);
}

void chase2(int y){

if(y==1){
for(int i=0;i<7;i++)
bitSet(leds,i);
  
for(int i=0;i<7;i++){
bitClear(leds,i);  
groundShiftRegister();
delay(200);
}
}

else if(y==2){
for(int i=8;i>0;i--)
bitSet(leds,i);  

for(int i=8;i>0;i--){
bitClear(leds,i);  
groundShiftRegister();
delay(300);  
}
}
}

