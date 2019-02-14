#pragma region Declare Constants
  #pragma region Instructions
  /*
  =================================================================
  |                      Instructions                                |
  =================================================================
              
              1 --> on/off lamp power
              2 --> enable/disable photoresistor
              3 --> enable/disable IR
              4 --> IR learn mode
  */
  #pragma endregion

  #pragma region Buttons pins
  const int button1Pin = 0;
  const int button2Pin = button1Pin + 1;
  const int button3Pin = button1Pin + 1;
  const int button4Pin = button1Pin + 1;
  const int lastButtonPin = button4Pin;
  #pragma endregion

  #pragma region Leds pins
  const int led1Pin = lastButtonPin+1;
  const int led2Pin = led1Pin+1;
  const int led3Pin = led2Pin+1;
  const int led4Pin = led3Pin+1;
  #pragma endregion

  #pragma region Buttons States
  int button1State = 0;
  int button2State = 0;
  int button3State = 0;
  int button4State = 0;
  #pragma endregion

  #pragma region Leds States
  int led1State = 0;
  int led2State = 0;
  int led3State = 0;
  int led4State = 0;
  #pragma endregion
#pragma endregion

#pragma region Setup
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
#pragma endregion

#pragma region Loop
  void loop() {
    setButtonsStates();
    driveToEvent();
  }
#pragma endregion


#pragma region Methods
  void driveToEvent(){
    //all events shows to corresponding xlsx file
    switch (getLoopState())
    {
      case -1:
      case 0:
      case 1:
        //nothing
        break;
      case 2:
        changeIRState();
        break;
      case 3:

        break;
      case 4:

        break;
      case 5:

        break;
      case 6:

        break;
      case 7:

        break;
      case 8:

        break;
      case 9:

        break;
      case 10:

        break;
      case 11:

        break;
      case 12:

        break;
      case 13:

        break;
      case 14:

        break;
      case 15:

        break;
    }
  }

  void changeIRState(){

  }

  void setButtonsStates(){
    button1State = digitalRead(button1State);
    button2State = digitalRead(button2State);
    button3State = digitalRead(button3State);
    button4State = digitalRead(button4State);
  }

  int getLoopState(){
    int binaryButtonStates = 0;
    int response = -1;

    #pragma region make binary number from buttons
    binaryButtonStates = button1State * 1000;
    binaryButtonStates = binaryButtonStates + button2State * 100;
    binaryButtonStates = binaryButtonStates + button3State * 10;
    binaryButtonStates = binaryButtonStates + button4State * 1;
    #pragma endregion

    #pragma region convert binary signal to decimal
    int base = 1;
		int temp = binaryButtonStates;

		while (temp)
		{
			int last_digit = temp % 10;
			temp = temp / 10;

			response += last_digit * base;

			base = base * 2;
		}
    #pragma endregion

    return response; 
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
#pragma endregion 