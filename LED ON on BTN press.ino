#define L1 11
#define L2 8
#define S1 6

void setup() {
  // put your setup code here, to run once:
  pinMode(L1, OUTPUT);
  pinMode(L2, OUTPUT);
  pinMode(S1, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(S1) == 1){
    digitalWrite(L1,1);
    digitalWrite(L2,1);
  
  }
  else{
    digitalWrite(L1,0);
    digitalWrite(L2,0);
  }
}
