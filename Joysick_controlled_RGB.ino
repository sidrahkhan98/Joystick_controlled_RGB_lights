#define LED_green 9
#define LED_yellow 10
#define LED_red 11
#define JX_pin 0
#define JY_pin 1
#define JSW_pin 2 

int joyX_in; //Variable to store the Joystick X reading
int joyY_in; //Variable to store the Joystick Y reading
int joySW_in; //Variable to store the Joystick Switch Reading

int joyX_out; //Variable to store the Joystick X mapped value to write
int joyY_out; //Variable to store the Joystick Y mapped value to write
int joySW_out; //Variable to store the Joystick Switch mapped value to write


void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_green, OUTPUT);
  pinMode(LED_yellow, OUTPUT);
  pinMode(LED_red, OUTPUT);
}

void loop() {
  joyX_in = analogRead(JX_pin);
  joyX_out = map(joyX_in, 0, 1023, 0,255); 
  joyY_in = analogRead(JY_pin);
  joyY_out = map(joyY_in, 0, 1023, 0,255); 
  joySW_in = analogRead(JSW_pin);
  joySW_out = map(joySW_in, 0, 1023, 0,255); 
  analogWrite(LED_green, joyX_out);
  analogWrite(LED_red, joyY_out);
  analogWrite(LED_yellow, joySW_out);

//  delay(100);

}
