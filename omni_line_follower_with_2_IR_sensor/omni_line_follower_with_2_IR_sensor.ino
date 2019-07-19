#define dir1 2  //MOTOR 1 (FL)
#define pwm1 3
#define brk1 13

#define dir2 5  //MOTOR 2 (FR)
#define pwm2 6
#define brk2 4

#define dir3 8  //MOTOR 3 (BR)
#define pwm3 9
#define brk3 7

#define dir4 10  //MOTOR 4 (BL)
#define pwm4 11
#define brk4 12

#define ir1 A5
#define ir2 A4
int detection1;
int detection2;

int pwmh = 50;
int pwml = 0;

void ishan()
{
  digitalWrite(brk1,HIGH);
  analogWrite(pwm1,0);
  
  digitalWrite(brk3,HIGH);
  analogWrite(pwm3,0);
  
  digitalWrite(brk2,LOW);
  analogWrite(pwm2,65);
  digitalWrite(dir2,HIGH);
  
  digitalWrite(brk4,LOW);
  analogWrite(pwm4,65);
  digitalWrite(dir4,HIGH);
  
}

void agni()
{
  digitalWrite(brk2,HIGH);
  analogWrite(pwm2,0);
  
  digitalWrite(brk4,HIGH);
  analogWrite(pwm4,0);
  digitalWrite(brk1,LOW);
  analogWrite(pwm1,30);
  digitalWrite(dir1,HIGH);
  
  digitalWrite(brk3,LOW);
  analogWrite(pwm3,30);
  digitalWrite(dir3,LOW);
}

void nairutya()
{
  digitalWrite(brk1,HIGH);
  analogWrite(pwm1,0);
  
  digitalWrite(brk3,HIGH);
  analogWrite(pwm3,0);
  
  digitalWrite(brk2,LOW);
  analogWrite(pwm2,pwmh);
  digitalWrite(dir2,HIGH);
  
  digitalWrite(brk4,LOW);
  analogWrite(pwm4,pwmh);
  digitalWrite(dir4,LOW);
}

void vayavy()
{
  digitalWrite(brk2,HIGH);
  analogWrite(pwm2,0);
  
  digitalWrite(brk4,HIGH);
  analogWrite(pwm4,0);
  
  digitalWrite(brk1,LOW);
  analogWrite(pwm1,30);
  digitalWrite(dir1,LOW);
  
  digitalWrite(brk3,LOW);
  analogWrite(pwm3,30);
  digitalWrite(dir3,HIGH);
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



void setup() {
 for(byte i=1;i<=12;i++) 
    pinMode(i,OUTPUT);
    pinMode(A5,INPUT);
    pinMode(A4,INPUT);
    Serial.begin(9600);
    pinMode(13,OUTPUT);

}

void loop() 
{
  delay(2000);
  detection1=digitalRead(ir1);
  detection2=digitalRead(ir2);

    if(detection1==LOW && detection2==LOW)
    {
        Serial.println(" forward ");
        //digitalWrite(13,HIGH);
        ishan();
        //delay(100);
    }
      else if(detection1==LOW && detection2==HIGH)
      {
          Serial.println(" LEFT ");
          digitalWrite(13,HIGH);
          vayavy();
          //delay(50);
      }
        else if(detection1==HIGH && detection2==LOW)
        {
            Serial.println(" RIGHT ");
            digitalWrite(13,HIGH);
            agni();
            //delay(50);
        }
          else if (detection1==HIGH && detection2==HIGH)
          {
              Serial.println(" STOPPED ");
              digitalWrite(13,HIGH);
              //delay(100);
              freeze();
          }
}
