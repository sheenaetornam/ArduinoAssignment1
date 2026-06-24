int startvalue = 5;
int pinled = 7;

void flashled(int times){
   
  for (int flashCount = 0; flashCount < times; flashCount++){

    digitalWrite(pinled, HIGH);
    delay(250);

    digitalWrite(pinled, LOW);
    delay(250);
  }
}

void setup() {
  pinMode(pinled, OUTPUT);

  Serial.begin(9600);
  Serial.println("=======SMART COUNTDOWN=======");

  for (int count = startvalue; count > 0; count = count - 1){

    Serial.print("count: ");
    Serial.println(count);

    flashled(count);

    delay(1000);
  }
  

  Serial.println("=======Countdown is complete=======");
}

void loop() {}