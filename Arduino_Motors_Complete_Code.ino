
/*############## Pin Variables Here ##############*/
const int PWM_Pin = 3;
const int Button_Pin = 13;

int count = 0;

/*############## End Of Pin Variables ###############  */

void setup() {

  pinMode(Button_Pin, INPUT_PULLUP);
  pinMode(PWM_Pin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(Button_Pressed(Button_Pin)){
    count = count + 1;
  }

  if(count == 0){
  analogWrite(PWM_Pin, 0); 
  }
  else if(count == 1){
  analogWrite(PWM_Pin,50); 
  }
  else if(count == 2){
  analogWrite(PWM_Pin,100); 
  }
  else if(count == 3){
  analogWrite(PWM_Pin,200); 
  }
  else{
  count = 0; 
  }

}
















// #############################################################################################################################################
// ###################################################### IMPORTANT CODE BELOW #################################################################
// #############################################################################################################################################

bool Button_Pressed(int Pin){
if(digitalRead(Pin) == 0){
    while(!digitalRead(Pin));
    unsigned long int initial = millis();
    while(millis() < initial + 250);
    return true;
}
return false;
};

// #############################################################################################################################################
// #############################################################################################################################################
// #############################################################################################################################################

