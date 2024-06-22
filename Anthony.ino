void setup() {
  Serial.begin(9600);
 pinMode(7,OUTPUT);
}

char valor;

void loop() {
  
if(Serial.available()>0){
  valor = Serial.read();
  Serial.println(valor);

   if(valor=='A'){
    digitalWrite(7, HIGH);
    }else{
      digitalWrite(7,LOW);
     }
  }
}
