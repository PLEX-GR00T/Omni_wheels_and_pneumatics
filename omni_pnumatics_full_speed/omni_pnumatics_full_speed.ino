#define ir1 A5
int detection=HIGH;
int i=0;
int dir = 8;
int pwm1 = 9;
int buzzer=7;
//#define output 13




#define dir2 5  //MOTOR 2 (FR)
#define pwm2 6
#define brk2 4

#define dir4 10  //MOTOR 4 (BL)
#define pwm4 11
#define brk4 12

void ishan()
{
  /*digitalWrite(brk1,HIGH);
  analogWrite(pwm1,0);
  
  digitalWrite(brk3,HIGH);
  analogWrite(pwm3,0); */
  
  digitalWrite(brk2,LOW);
  analogWrite(pwm2,255);
  digitalWrite(dir2,LOW);
  
  digitalWrite(brk4,LOW);
  analogWrite(pwm4,255);
  digitalWrite(dir4,HIGH);
  
}

  
void nairutya()
{
 /* digitalWrite(brk1,HIGH);
  analogWrite(pwm1,0);
  
  digitalWrite(brk3,HIGH);
  analogWrite(pwm3,0);*/
  
  digitalWrite(brk2,LOW);
  analogWrite(pwm2,255);
  digitalWrite(dir2,HIGH);
  
  digitalWrite(brk4,LOW);
  analogWrite(pwm4,255);
  digitalWrite(dir4,LOW);
}

void freeze()
{
 // digitalWrite(brk1,HIGH);
  //analogWrite(pwm1,0);
  digitalWrite(brk2,HIGH);
  analogWrite(pwm2,0);
  //digitalWrite(brk3,HIGH);
  //analogWrite(pwm3,70);
  digitalWrite(brk4,HIGH);
  analogWrite(pwm4,0);
}

void piston_up()
{
  analogWrite(pwm1,255);
 
}

void piston_down()
{
  analogWrite(pwm1,0);
 }
void setup() {
  Serial.begin(9600);
  pinMode(ir1,INPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
  pinMode(dir,OUTPUT);
  pinMode(pwm1,OUTPUT);
  pinMode(buzzer,OUTPUT);
  
}   
void loop() 
{
  detection=digitalRead(ir1);
  if(detection==HIGH && i<4)
  {
     Serial.println("ir = 1");
     digitalWrite(13,LOW);
    ishan();
    
    
  }
    else if(detection==LOW && i<4)
    {
      Serial.println("ir = 0");
      freeze();
      digitalWrite(buzzer,HIGH);
      delay(3000);
      digitalWrite(13,HIGH);
      piston_up();
      delay(2000);
      digitalWrite(13,LOW);
      piston_down();
      digitalWrite(buzzer,LOW);
      while(1)
      freeze();
      i++;
      Serial.print(i);
      delay(3000);

      //nairutya();  // reverse();
      //delay(1000);
      freeze();
      while(1);
     }                            

    else if(i==3)
    {
      freeze();
      Serial.println("STOPPED");
    }
  }

