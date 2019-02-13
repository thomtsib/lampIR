//=================================================================
//                      Constants                                 |
//=================================================================

            //A --> on/off lamp power
            //B --> enable/disable photoresistor
            //C --> enable/disable IR
            //D --> IR learn mode

//Buttons pins
const int buttonAPin = 0;
const int buttonBPin = buttonAPin + 1;
const int buttonCPin = buttonBPin + 1;
const int buttonDPin = buttonCPin + 1;
const int lastButtonPin = buttonDPin;

//Leds pins
const int ledAPin = lastButtonPin+1;
const int ledBPin = ledAPin+1;
const int ledCPin = ledBPin+1;
const int ledDPin = ledCPin+1;

//Buttons States
int buttonAState = 0;
int buttonBState = 0;
int buttonCState = 0;
int buttonDState = 0;

//Leds States
int ledAState = 0;
int ledBState = 0;
int ledCState = 0;
int ledDState = 0;

void setup() {
  // initialize the pushbutton pin as an input:
  pinMode(buttonAPin, INPUT);
  pinMode(buttonBPin, INPUT);
  pinMode(buttonCPin, INPUT);
  pinMode(buttonDPin, INPUT);
  // initialize the LED pin as an output:
  pinMode(ledAPin, OUTPUT);
  pinMode(ledBPin, OUTPUT);
  pinMode(ledCPin, OUTPUT);
  pinMode(ledDPin, OUTPUT);
  
}

void loop() {
  // read the state of the pushbutton value:
  buttonAState = digitalRead(buttonAPin);
  buttonBState = digitalRead(buttonBPin);
  buttonCState = digitalRead(buttonCPin);
  buttonDState = digitalRead(buttonDPin);

  checkPushButtonAndLeds();
}

void checkPushButtonAndLeds(){
  // read the state of the pushbutton value:
  buttonAState = digitalRead(buttonAPin);
  buttonBState = digitalRead(buttonBPin);
  buttonCState = digitalRead(buttonCPin);
  buttonDState = digitalRead(buttonDPin);

  if (buttonAState == HIGH) {
    digitalWrite(ledAPin, HIGH);
  } else {
    digitalWrite(ledAPin, LOW);
  }

  if (buttonAState == HIGH) {
    digitalWrite(ledAPin, HIGH);
  } else {
    digitalWrite(ledAPin, LOW);
  }

  if (buttonAState == HIGH) {
    digitalWrite(ledAPin, HIGH);
  } else {
    digitalWrite(ledAPin, LOW);
  }

  if (buttonAState == HIGH) {
    digitalWrite(ledAPin, HIGH);
  } else {
    digitalWrite(ledAPin, LOW);
  }
}
