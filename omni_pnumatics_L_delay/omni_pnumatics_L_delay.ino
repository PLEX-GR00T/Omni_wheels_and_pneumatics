#define dir1 2  //MOTOR 1 (FL)
#define pwm1 3
#define brk1 1

#define dir2 5  //MOTOR 2 (FR)
#define pwm2 6
#define brk2 4

#define dir3 8  //MOTOR 3 (BR)
#define pwm3 9
#define brk3 7

#define dir4 10  //MOTOR 4 (BL)
#define pwm4 11
#define brk4 12

#define pwm5 13




  

void ishan()
{
  digitalWrite(brk1,HIGH);
  analogWrite(pwm1,0);
  
  digitalWrite(brk3,HIGH);
  analogWrite(pwm3,0); 
  
  digitalWrite(brk2,LOW);
  analogWrite(pwm2,90);
  digitalWrite(dir2,LOW);
  
  digitalWrite(brk4,LOW);
  analogWrite(pwm4,90);
  digitalWrite(dir4,HIGH);
  
}

  
void nairutya()
{
  digitalWrite(brk1,HIGH);
  analogWrite(pwm1,0);
  
  digitalWrite(brk3,HIGH);
  analogWrite(pwm3,0);
  
  digitalWrite(brk2,LOW);
  analogWrite(pwm2,90);
  digitalWrite(dir2,HIGH);
  
  digitalWrite(brk4,LOW);
  analogWrite(pwm4,90);
  digitalWrite(dir4,LOW);
}

void freeze()
{
  digitalWrite(brk1,HIGH);
  analogWrite(pwm1,0);
  digitalWrite(brk2,HIGH);
  analogWrite(pwm2,0);
  digitalWrite(brk3,HIGH);
  analogWrite(pwm3,0);
  digitalWrite(brk4,HIGH);
  analogWrite(pwm4,0);
}


void vayavy()
{
  digitalWrite(brk2,HIGH);
  analogWrite(pwm2,0);
  
  digitalWrite(brk4,HIGH);
  analogWrite(pwm4,0);
  
  digitalWrite(brk1,LOW);
  analogWrite(pwm1,90);
  digitalWrite(dir1,LOW);
  
  digitalWrite(brk3,LOW);
  analogWrite(pwm3,90);
  digitalWrite(dir3,HIGH);
}



void setup() 
{
 
 for(byte i=1;i<=12;i++) 
    pinMode(i,OUTPUT);
 }

void loop() 
{
 delay(3000);
 nairutya();
 delay(7000);

 freeze();
 delay(1000);

 vayavy();
 delay(5000);

 freeze();
 delay(2000);
 
 digitalWrite(pwm5,HIGH);
 delay(1000);

 digitalWrite(pwm5,LOW);

 freeze();
 while(1);  
 
 }
