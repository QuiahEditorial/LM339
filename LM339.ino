int A;
int B;

void setup()
{
Serial.begin(9600);
pinMode(D2, INPUT);
}

void loop()
{
A = analogRead(A0) / 204.6;
B = digitalRead(D2);
Serial.print(A);
Serial.print(" V");
Serial.println("  ");
Serial.println(B);
}
