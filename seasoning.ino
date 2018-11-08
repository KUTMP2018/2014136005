

 void season() {
  
   groundShiftRegister();
   
  digitalWrite(latchPin, LOW);
for(int i=0;i<3;i++)
    allnum(1,1,0,1,1,0);
  delay(1500);
  digitalWrite(latchPin, HIGH);

  digitalWrite(latchPin, LOW);
for(int i=0;i<3;i++)
    allnum(0,1,0,0,1,0);
   delay(1500);
    digitalWrite(latchPin, HIGH);
    
    digitalWrite(latchPin, LOW);
   for(int i=0;i<3;i++){
   allnum(0,1,1,0,0,1); }

delay(800);
 digitalWrite(latchPin, HIGH);
 digitalWrite(latchPin, LOW);
   for(int i=0;i<3;i++){
    allnum(0,0,1,0,1,1);}
     
 delay(1500);
   digitalWrite(latchPin, HIGH);

   digitalWrite(latchPin, LOW);
 for(int i=0;i<3;i++)
 allnum(0,0,0,0,0,0);
   delay(1000);
   for(int i=0;i<3;i++)
  allnum(1,1,1,1,1,1);
 delay(1500);
 
  digitalWrite(latchPin, HIGH);
  
 }

  

