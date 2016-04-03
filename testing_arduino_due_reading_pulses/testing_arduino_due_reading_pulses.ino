uint8_t arr[92] = {0};

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(22, INPUT);
}

void loop() {
  int i = 0;
  unsigned long strt = 0;
  unsigned long fin = 0;
  while(i < 46)
  {
    strt = micros();
    arr[i] = digitalRead(22);
    i++;
    fin = micros();
    delayMicroseconds(745);
  }

  for (int j = 0; j < 46; j++)
  {
    Serial.print(arr[j]);
  }
  Serial.println();

//  Serial.println(strt);
//  Serial.println(fin);

}
