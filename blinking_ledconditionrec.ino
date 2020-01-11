void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  pinMode(12,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(4,OUTPUT);
}


void loop() {
  int b;
  int a=10110;
  int a2=a;
  int c=13;
  while(a!=0){
    b=a%10;
    a=a/10;  
    if(b==1)
    {
      digitalWrite(c,HIGH);
      delay(1000);
      digitalWrite(c,LOW);
      delay(1000);
    }
    c=c-2;
  }
  
  
}
