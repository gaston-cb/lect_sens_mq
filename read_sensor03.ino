float RL = 27.38e3 ; // 27.3Khom 
float RH = 1200  ; // 1.2 KohM 

float tension_1 ; 
float tension_2 ; 
float ROH ; 
float ROL ; 
void setup()
{

 Serial.begin(9600) ; 
 Serial.println("inicio: "); 
 tension_1 = analogRead(A0)* (5.0/1024) ; 
 tension_2 = analogRead(A1)* (5.0/1024) ; 
 float R0H = RH*(5-tension_1)/tension_1 ; 
 float R0L = RL*(5-tension_2)/tension_2 ; 
 Serial.print("tension 1 : ") ; Serial.println(tension_1) ; 
 Serial.print("tension 2 : ") ; Serial.println(tension_2) ; 

}

void loop()
{
 delay(1000) ; 
  tension_1 = analogRead(A0)* (5.0/1024) ; 
  tension_2 = analogRead(A1)* (5.0/1024) ; 
 float R0H = RH*(5-tension_1)/tension_1 ; 
 float R0L = RL*(5-tension_2)/tension_2 ; 
 Serial.print("tension 1 : ") ; Serial.println(tension_1) ; 
 Serial.print("tension 2 : ") ; Serial.println(tension_2) ; 




 delay(1000) ; 
}
