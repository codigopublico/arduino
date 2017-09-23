void setup(){
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
  pinMode(A4, INPUT);
  for(int i = 2; i < 12; i++){
  pinMode(i, OUTPUT);
  }
  Serial.begin(9600);
}

void loop(){
  int a[5];
  a[0] = analogRead(A0);
  a[1] = analogRead(A1);
  a[2] = analogRead(A2);
  a[3] = analogRead(A3);
  a[4] = analogRead(A4);
  a[5] = analogRead(A5);
  /*for(int i = 0; i < 5; i++){
    Serial.print(a[i]);
    Serial.print("         ");
    
  }*/
  for(int i = 2; i < 12; i++){
    for(int ii = 0; ii < 2; ii++){
      if(ii > 1){
  digitalWrite(i, HIGH);
      }else{
   digitalWrite(i, LOW);
      }
    }
  }
    Serial.println("Fin");
}

