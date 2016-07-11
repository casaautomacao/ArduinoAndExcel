void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

char comando;
 int valor;
 
void loop() {
  // put your main code here, to run repeatedly:

if (Serial.available()>0)
{
comando = Serial.read();
}

if (comando == 'e')
{
 valor = Serial.parseInt();
  analogWrite(11,valor);
comando='j';
}

  if (comando == 'i')
  {
    int teste = analogRead(A0);
    int teste2 = analogRead(A1);
       Serial.print(teste);
      Serial.print(",");
      Serial.println(teste2);
       delay(200);
  }
}
