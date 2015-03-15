#define ADC_IN 3
#define LED1 0
#define LED2 1
#define RIP_RESET 5
int oldsample = 1024, sample = 1024;

void setup() {
    pinMode(ADC_IN, INPUT);
    pinMode(LED1, OUTPUT);
    pinMode(LED2, OUTPUT);
    pinMode(RIP_RESET, OUTPUT);
    digitalWrite(RIP_RESET, LOW);
}

void fadeout() {
  int i;
  for(i = 255; i >= 0; i--){
    analogWrite(LED1, i);
    analogWrite(LED2, i);
    delay(10);
  }  
}

void loop() {
  sample = analogRead(ADC_IN);
  if (sample < oldsample-15) fadeout();
  
  oldsample = sample;   

  delay(50);
}
