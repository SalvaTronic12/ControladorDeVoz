int bt = 0;
int foco = 9;

void setup() {
  Serial.begin(9600);
  pinMode(foco,OUTPUT);
  digitalWrite(foco,HIGH);

}

void loop() {

 if(Serial.available() >0){
  bt = Serial.read();
 }

if(bt =='a'){
  digitalWrite(foco,LOW);
  
}
if(bt == 'b'){
  digitalWrite(foco,HIGH);
}
 
}
