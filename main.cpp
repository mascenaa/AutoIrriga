#include <LiquidCrystal.h>
#include <Servo.h>

bool open;
Servo regar;
LiquidCrystal lcd(12, 11, 7, 8, 9, 10);

void setup()
{
    pinMode(A0, INPUT); 
    pinMode(2, OUTPUT); 
    pinMode(3, OUTPUT); 
    pinMode(4, OUTPUT); 

    regar.attach(A5); 

    lcd.begin(16, 1);
    lcd.print("Auto Irrigacao");
}
void display()
{
    int umidadeDisplay = analogRead(A0); 

    lcd.begin(17, 2);
    lcd.print("Umidade: ");

    lcd.print(umidadeDisplay * 10 / 100);
    lcd.print("%");
    delay(3000);    

    lcd.clear();

    if (open == true)
    {
        lcd.print("Comporta aberta");
    }
    else
    {
        lcd.print("Comporta fechada");
    }
}
void loop()
{
    delay(5000);
    int umidadeSensor = analogRead(A0);
    regar.write(0);

    if (umidadeSensor <= 450)
    {
        digitalWrite(2, HIGH); 
        digitalWrite(3, LOW);  
        digitalWrite(4, LOW); 
        regar.write(92);
        open = true;
    }
    if (umidadeSensor >= 451 && umidadeSensor <= 900)
    {
        digitalWrite(2, LOW);
        digitalWrite(3, HIGH);
        digitalWrite(4, LOW);
        regar.write(0);
        open = false;
    };

    display();
}
