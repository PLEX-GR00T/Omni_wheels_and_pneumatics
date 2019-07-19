#define dir1 2
#define pwm1 3
#define brk1 4

#define dir2 5
#define pwm2 6
#define brk2 7

#define dir3 8
#define pwm3 9
#define brk3 10

#define dir4 12
#define pwm4 11
#define brk4 13

#define ir1 A5
#define ir2 A4
#define ir3 A3

int detection1;
int detection2;
int detection3;

int pwmh = 65;
int pwms = 45;

void forward()
{
  digitalWrite(brk2,LOW);
  analogWrite(pwm2,pwmh);
  digitalWrite(dir2,LOW);

  digitalWrite(brk1,HIGH);
  analogWrite(pwm1,0);

  digitalWrite(brk3,HIGH);
  analogWrite(pwm3,0);
  
  digitalWrite(brk4,LOW);
  analogWrite(pwm4,pwmh);
  digitalWrite(dir4,LOW);
}

void left()
{
  digitalWrite(brk1,LOW);
  analogWrite(pwm1,pwmh);
  digitalWrite(dir1,LOW);

  digitalWrite(brk2,HIGH);
  analogWrite(pwm2,0);

  digitalWrite(brk4,HIGH);
  analogWrite(pwm4,0);
  
  digitalWrite(brk3,LOW);
  analogWrite(pwm3,pwmh);
  digitalWrite(dir3,HIGH);
}


void freeze()
{
  digitalWrite(brk1,HIGH);
  digitalWrite(brk2,HIGH);
  digitalWrite(brk3,HIGH);
  digitalWrite(brk4,HIGH);
}

void setup() {
 for(byte i=2;i<=13;i++)
 pinMode(i,OUTPUT);
 pinMode(ir1,INPUT);
 pinMode(ir2,INPUT);
 pinMode(ir3,INPUT);
Serial.begin(9600);
}

void loop() 
{
 delay(3000);
 detection1=digitalRead(ir1);
 detection2=digitalRead(ir2);
 detection3=digitalRead(ir3);

  if(detection1==HIGH && detection2==LOW && detection3==HIGH)
  {
    Serial.println(" FORWARD ");
    forward();
   }
  else if(detection1==LOW && detection2==LOW && detection3==HIGH)
  {
    Serial.println(" LEFT ");
    left();
  }
  else if( detection1==HIGH && detection2==HIGH && detection3==LOW)
  {
  Serial.println(" again forward ");
  forward();
  }
  else if(detection1==LOW && detection2==LOW && detection3==LOW)
  {
    Serial.println(" again left ");
    left();
  }
  else if (detection1==HIGH && detection2==HIGH && detection3==HIGH)
  {
    Serial.println(" STOPPRD ");
    freeze();
  }
}
