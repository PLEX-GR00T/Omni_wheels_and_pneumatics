#define dir1 2  //MOTOR 1 u(FL)
#define pwm1 3
#define brk1 4

#define dir2 5  //MOTOR 2 (FR)
#define pwm2 6
#define brk2 7

#define dir3 8  //MOTOR 3 (BR)
#define pwm3 9
#define brk3 10

#define dir4 12  //MOTOR 4 (BL)
#define pwm4 11
#define brk4 13


void forward() //dont use
{
  digitalWrite(brk1,LOW);
  analogWrite(pwm1,70);
  digitalWrite(dir1,HIGH);
  
  digitalWrite(brk2,LOW);
  analogWrite(pwm2,70);
  digitalWrite(dir2,LOW);
   
  digitalWrite(brk3,LOW);
  analogWrite(pwm3,70);
  digitalWrite(dir3,LOW);
   
  digitalWrite(brk4,LOW);
  analogWrite(pwm4,70);
  digitalWrite(dir4,HIGH);
  }

void reverse() //dont use
{
  digitalWrite(brk1,LOW);
  analogWrite(pwm1,70);
  digitalWrite(dir1,LOW);
  
  digitalWrite(brk2,LOW);
  analogWrite(pwm2,70);
  digitalWrite(dir2,HIGH);
  
  digitalWrite(brk3,LOW);
  analogWrite(pwm3,70);
  digitalWrite(dir3,HIGH);
  
  digitalWrite(brk4,LOW);
  analogWrite(pwm4,70);
  digitalWrite(dir4,LOW);
  }
  
void rightside() //dont use
  {
   digitalWrite(brk1,LOW);
   analogWrite(pwm1,70);
   digitalWrite(dir1,HIGH);

   digitalWrite(brk2,LOW);
   analogWrite(pwm2,70);
   digitalWrite(dir2,HIGH);
   
   digitalWrite(brk3,LOW);
   analogWrite(pwm3,70);
   digitalWrite(dir3,LOW);
   
   digitalWrite(brk4,LOW);
   analogWrite(pwm4,70);
   digitalWrite(dir4,LOW);
   }

void leftside() //dont use
{
  digitalWrite(brk1,LOW);
  analogWrite(pwm1,70);
  digitalWrite(dir1,LOW);
  
  digitalWrite(brk2,LOW);
  analogWrite(pwm2,70);
   digitalWrite(dir2,LOW);
   
   digitalWrite(brk3,LOW);
   analogWrite(pwm3,70);
   digitalWrite(dir3,HIGH);
   
   digitalWrite(brk4,LOW);
   analogWrite(pwm4,70);
  digitalWrite(dir4,HIGH);
 }

void ishan()
{
  digitalWrite(brk1,HIGH);
  analogWrite(pwm1,0);
  
  digitalWrite(brk3,HIGH);
  analogWrite(pwm3,0);
  
  digitalWrite(brk2,LOW);
  analogWrite(pwm2,70);
  digitalWrite(dir2,LOW);
  
  digitalWrite(brk4,LOW);
  analogWrite(pwm4,70);
  digitalWrite(dir4,HIGH);
  
}

void agni()
{
  digitalWrite(brk2,HIGH);
  analogWrite(pwm2,0);
  
  digitalWrite(brk4,HIGH);
  analogWrite(pwm4,0);
  
  digitalWrite(brk1,LOW);
  analogWrite(pwm1,70);
  digitalWrite(dir1,HIGH);
  
  digitalWrite(brk3,LOW);
  analogWrite(pwm3,70);
  digitalWrite(dir3,LOW);
}

void nairutya()
{
  digitalWrite(brk1,HIGH);
  analogWrite(pwm1,0);
  
  digitalWrite(brk3,HIGH);
  analogWrite(pwm3,0);
  
  digitalWrite(brk2,LOW);
  analogWrite(pwm2,70);
  digitalWrite(dir2,HIGH);
  
  digitalWrite(brk4,LOW);
  analogWrite(pwm4,70);
  digitalWrite(dir4,LOW);
}

void vayavy()
{
  digitalWrite(brk2,HIGH);
  analogWrite(pwm2,0);
  
  digitalWrite(brk4,HIGH);
  analogWrite(pwm4,0);
  
  digitalWrite(brk1,LOW);
  analogWrite(pwm1,70);
  digitalWrite(dir1,LOW);
  
  digitalWrite(brk3,LOW);
  analogWrite(pwm3,70);
  digitalWrite(dir3,HIGH);
}

void clockwise()
{
   digitalWrite(brk1,LOW);
   analogWrite(pwm1,70);
    digitalWrite(dir1,HIGH);
    
     digitalWrite(brk2,LOW);
     analogWrite(pwm2,70);
   digitalWrite(dir2,HIGH);
   
    digitalWrite(brk3,LOW);
    analogWrite(pwm3,70);
   digitalWrite(dir3,HIGH);
   
    digitalWrite(brk4,LOW);
    analogWrite(pwm4,70);
  digitalWrite(dir4,HIGH);
}

void anticlockwise()
{
  digitalWrite(brk1,LOW);
  analogWrite(pwm1,70);
    digitalWrite(dir1,LOW);
    
    digitalWrite(brk2,LOW);
    analogWrite(pwm2,70);
   digitalWrite(dir2,LOW);
   
  digitalWrite(brk3,LOW);
  analogWrite(pwm3,70);
   digitalWrite(dir3,LOW);
   
   digitalWrite(brk4,LOW);
   analogWrite(pwm4,70);
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




void setup() 
{
 /*analogWrite(pwm1,70);
 analogWrite(pwm2,70);
 analogWrite(pwm3,70);
 analogWrite(pwm4,70);*/
 for(byte i=1;i<=12;i++) 
    pinMode(i,OUTPUT);
 }

void loop() 
{
  delay(3000);
 forward();
 delay(4000);
 freeze();
 delay(1000);
 while(1);

 reverse();
 delay(8000);
 freeze();
 delay(1000);

 forward();
 delay(4000);
 freeze();
 delay(1000);

 rightside();
 delay(3000);
 freeze();
 delay(1000);

 leftside();
 delay(6000);
 freeze();
 delay(1000);

 rightside();
 delay(3000);
 freeze();
 delay(1000);

 ishan();
 delay(3000);
 freeze();
 delay(1000);

 nairutya();
 delay(3000);
 freeze();
 delay(1000);
//

 nairutya();
 delay(3000);
 freeze();
 delay(1000);

 ishan();
 delay(3000);
 freeze();
 delay(1000);


 agni();
 delay(3000);
 freeze();
 delay(1000);

 vayavy();
 delay(3000);
 freeze();
 delay(1000);

 vayavy();
 delay(3000);
 freeze();
 delay(1000);
 
 agni();
 delay(3000);
 freeze();
 delay(1000);
//
 clockwise();
 delay(3000);
 freeze();
 delay(1000);
//
 anticlockwise();
 delay(3000);
 freeze();
 while(1);  
 
 }
