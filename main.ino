
int latchPin = 8;      
int clockPin = 7;   
int dataPin = 12;

int latchPin2 = 40;      
int clockPin2 = 42;   
int dataPin2 = 38;

int buttonPin=34;
int buttonPin2=32;
int buttonPin3=30;

int buttonState = 0;
int buttonState2 = 0;
int buttonState3 = 0;


    int red[16]={1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
    int green[16]={1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
    int blue[16]={1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};

byte leds=0;

void updateShiftRegister() {
  
   digitalWrite(latchPin, LOW);
   shiftOut(dataPin, clockPin, LSBFIRST, leds);
   shiftOut(dataPin, clockPin, LSBFIRST, leds);
   shiftOut(dataPin, clockPin, LSBFIRST, leds);
   digitalWrite(latchPin, HIGH);
}

void groundShiftRegister() {
  
   digitalWrite(latchPin2, LOW);
   shiftOut(dataPin2, clockPin2, LSBFIRST, leds );
   digitalWrite(latchPin2, HIGH);
}



void setup() {
  
  pinMode(latchPin, OUTPUT);
  pinMode(dataPin, OUTPUT);  
  pinMode(clockPin, OUTPUT);
  
  pinMode(latchPin2, OUTPUT);
  pinMode(dataPin2, OUTPUT);  
  pinMode(clockPin2, OUTPUT);
  
  pinMode(buttonPin, INPUT); 
  pinMode(buttonPin2, INPUT); 
  pinMode(buttonPin3, INPUT); 

}

void loop() {
 buttonState = digitalRead(buttonPin);
 if (buttonState==HIGH){}
 else {season();} 

 buttonState2 = digitalRead(buttonPin2);
 if (buttonState2==HIGH){}
 else {patternFire();} 

  buttonState3 = digitalRead(buttonPin3);
 if (buttonState3==HIGH){}
 else {patternchase();} 
 
}


void patternchase() {
    chasenom(1);
   chase2(1);
    delay(200);
  
 chasenom(2);
 chase2(2);
 delay(200);
 
 chasenom(3);
 chase2(1);
 delay(200);
 
 chasenom(4);
 chase2(2);
 delay(200);
 
 chasenom(5);
 chase2(1);
 delay(200);
 
 chasenom(6);
 chase2(1);
 delay(200); 
  
}


void patternFire() {

    digitalWrite(latchPin, LOW);
  
 
  for (int i = -1; i < 7; i++)  
     bitSet(leds,i);
  for(int i=-1;i<7;i++){
    bitClear(leds,i);   
   groundShiftRegister(); 

    for(int i=0;i<3;i++){
    digitalWrite(clockPin, LOW);
    digitalWrite(dataPin, 0);
    digitalWrite(clockPin, HIGH);
    
    digitalWrite(clockPin, LOW);
    digitalWrite(dataPin, 0);
    digitalWrite(clockPin, HIGH);
    
    digitalWrite(clockPin, LOW);
    digitalWrite(dataPin, 0);
    digitalWrite(clockPin, HIGH);
    
    digitalWrite(clockPin, LOW);
    digitalWrite(dataPin, red);
    digitalWrite(clockPin, HIGH);

    digitalWrite(clockPin, LOW);
    digitalWrite(dataPin, 0);
    digitalWrite(clockPin, HIGH);
    
    digitalWrite(clockPin, LOW);
    digitalWrite(dataPin, green);
    digitalWrite(clockPin, HIGH);

    digitalWrite(clockPin, LOW);
    digitalWrite(dataPin, red);
    digitalWrite(clockPin, HIGH);

    digitalWrite(clockPin, LOW);
    digitalWrite(dataPin, 0);
    digitalWrite(clockPin, HIGH);
  }
    digitalWrite(latchPin, HIGH);
    delay(1000);}
  }
  

 void allnum(int a,int b,int c,int d,int e,int f){
    
    digitalWrite(clockPin, LOW);
    digitalWrite(dataPin, 0);
    digitalWrite(clockPin, HIGH);
    
    digitalWrite(clockPin, LOW);
    digitalWrite(dataPin, a);
    digitalWrite(clockPin, HIGH);
    
    digitalWrite(clockPin, LOW);
    digitalWrite(dataPin, b);
    digitalWrite(clockPin, HIGH);
    
    digitalWrite(clockPin, LOW);
    digitalWrite(dataPin, c);
    digitalWrite(clockPin, HIGH);

    digitalWrite(clockPin, LOW);
    digitalWrite(dataPin, d);
    digitalWrite(clockPin, HIGH);
    
    digitalWrite(clockPin, LOW);
    digitalWrite(dataPin, e);
    digitalWrite(clockPin, HIGH);

    digitalWrite(clockPin, LOW);
    digitalWrite(dataPin, f);
    digitalWrite(clockPin, HIGH);

    digitalWrite(clockPin, LOW);
    digitalWrite(dataPin, 0);
    digitalWrite(clockPin, HIGH);
 }


