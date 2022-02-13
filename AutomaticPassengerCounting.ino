int IRpin1 = A0;               // IR photodiode on analog pin A0
int IRpin2 = A1;               // IR photodiode on analog pin A0

void setup(){
  Serial.begin(9600);         // initializing Serial monitor
}

void loop(){
  int  readingIR1 = analogRead(IRpin1);  // storing IR coming from the ambient
  int  readingIR2 = analogRead(IRpin2);  // storing IR coming from the ambient
  // buzzer();                // uncomment to activate the buzzer function

  Serial.println(readingIR1);
  //Serial.print("\t");
  //Serial.println(readingIR2);

  //delay(1000);
}
