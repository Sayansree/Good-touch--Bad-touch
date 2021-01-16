#define ledRed 2
#define ledGreen 3
#define ledOrange 4

#define Feet 5
#define Thighs 6
#define Chest 7 //chest in male belly in female
#define Breast 8 //for female only
#define Hands 9
#define Soulders 10
#define Face 11
#define Private 12

void setup() {
  Serial.begin(115200);
  pinMode(ledRed,OUTPUT);
  pinMode(ledGreen,OUTPUT);
  pinMode(ledOrange,OUTPUT);
  pinMode(Feet,INPUT_PULLUP);
  pinMode(Thighs,INPUT_PULLUP);
  pinMode(Chest,INPUT_PULLUP);
  pinMode(Breast,INPUT_PULLUP);
  pinMode(Hands,INPUT_PULLUP);
  pinMode(Soulders,INPUT_PULLUP);
  pinMode(Face,INPUT_PULLUP);
  pinMode(Private,INPUT_PULLUP);
  digitalWrite(ledRed,LOW);
  digitalWrite(ledGreen,LOW);
  digitalWrite(ledOrange,LOW);
}

void loop() {
  
  bool FeetTouched=     !digitalRead(Feet);
  bool ThighsTouched=   !digitalRead(Thighs);
  bool ChestTouched=    !digitalRead(Chest);
  bool BreastTouched=   !digitalRead(Breast);
  bool HandsTouched=    !digitalRead(Hands);
  bool SouldersTouched= !digitalRead(Soulders);
  bool FaceTouched=     !digitalRead(Face);
  bool PrivateTouched=  !digitalRead(Private);
  
  if(BreastTouched|PrivateTouched){
    Serial.println("BAD TOUCH");
    digitalWrite(ledRed,HIGH);
    digitalWrite(ledGreen,LOW);
    digitalWrite(ledOrange,LOW);
  }else if(ThighsTouched|ChestTouched|SouldersTouched|FaceTouched|FeetTouched){
    Serial.println("OK TOUCH");
    digitalWrite(ledRed,LOW);
    digitalWrite(ledGreen,HIGH);
    digitalWrite(ledOrange,LOW);
  }else if(HandsTouched){
    Serial.println("GOOD TOUCH");
    digitalWrite(ledRed,LOW);
    digitalWrite(ledGreen,HIGH);
    digitalWrite(ledOrange,LOW);
  }
}
