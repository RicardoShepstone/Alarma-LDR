int medida=0;
int ldr=0;
void setup() {
 Serial.begin(9600);
 pinMode(10, OUTPUT);
 pinMode(11,OUTPUT);
 digitalWrite(10, HIGH);
 digitalWrite(11, HIGH);
}
void monitorizar(){
  Serial.println(medida);
  delay(500);
}
void loop() {
  medida=analogRead(ldr);
  monitorizar();

}
