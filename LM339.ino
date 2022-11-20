// Por Roberto A. Zavala
// Breve : https://es.overleaf.com/read/ksspyfprvykc
// Libro : https://www.amazon.com.mx/dp/B074TTGLL2
// 🙏🏼    : DNv7acPAeVBhTXbKv26itJecPG1SPy2o4F

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
