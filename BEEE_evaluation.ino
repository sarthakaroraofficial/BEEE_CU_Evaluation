int switch_state=0;
int ldr_val;
int ldr_pin=A0,switch_pin=5;
int led_pin1=6,ledpin2=3;
 
void setup()
{
  pinMode(led_pin1,OUTPUT);
  pinMode(ledpin2,OUTPUT);
  pinMode(switch_pin,INPUT);
 }
void loop()
{
  
   switch_state=digitalRead(switch_pin);
  if(switch_state==HIGH){
  ldr_val=analogRead(ldr_pin);
  if(ldr_val<350)
  {
  
   
    
    digitalWrite(led_pin1,HIGH);
      delay(300);
      digitalWrite(led_pin1,LOW);
     delay(300);
    
      }
  
  else if(ldr_val>=350)
  {
    
    
    digitalWrite(ledpin2,HIGH);
      delay(300);
       digitalWrite(ledpin2,LOW);
    delay(300);
  }
 
  }
}
  
