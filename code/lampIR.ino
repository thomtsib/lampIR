/*
=================================================================
|                      Constants                                |
=================================================================
            
            1 --> on/off lamp power
            2 --> enable/disable photoresistor
            3 --> enable/disable IR
            4 --> IR learn mode
*/
//Buttons pins
const int button1Pin = 0;
const int button2Pin = button1Pin + 1;
const int button3Pin = button1Pin + 1;
const int button4Pin = button1Pin + 1;
const int lastButtonPin = button4Pin;

//Leds pins
const int led1Pin = lastButtonPin+1;
const int led2Pin = led1Pin+1;
const int led3Pin = led2Pin+1;
const int led4Pin = led3Pin+1;

//Buttons States
int button1State = 0;
int button2State = 0;
int button3State = 0;
int button4State = 0;

//Leds States
int led1State = 0;
int led2State = 0;
int led3State = 0;
int led4State = 0;

void setup() {
  // initialize the pushbutton pin as an input:
  pinMode(button1Pin, INPUT);
  pinMode(button2Pin, INPUT);
  pinMode(button3Pin, INPUT);
  pinMode(button4Pin, INPUT);
  // initialize the LED pin as an output:
  pinMode(led1Pin, OUTPUT);
  pinMode(led2Pin, OUTPUT);
  pinMode(led3Pin, OUTPUT);
  pinMode(led4Pin, OUTPUT);
  
}

void loop() {
  // read the state of the pushbutton value:
  //buttonAState = digitalRead(buttonAPin);
  int loopState = getLoopState();
  // if loopState == 0 --> test buttons
  checkPushButtonAndLeds();

  //on/off lamp power

  //enable/disable photoresistor

  //enable/disable IR
}

void setButtonsStates(){
  for (int i=0; i <= 255; i++){
      //analogWrite(PWMpin, i);
      delay(10);
   }
}

int getLoopState(){
 return -1; 
}

void checkPushButtonAndLeds(){
  // read the state of the pushbutton value:
  button1State = digitalRead(button1Pin);

  if (button1State == HIGH) {
    digitalWrite(led1Pin, HIGH);
  } else {
    digitalWrite(led1Pin, LOW);
  }
}
