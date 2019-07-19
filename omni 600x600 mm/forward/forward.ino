#define dir2 5
#define pwm2 6
#define brk2 7

#define dir4 8
#define pwm4 9
#define brk4 10

#define dir1 2
#define pwm1 3
#define brk1 4

#define dir3 11
#define pwm3 12
#define brk3 13

int pwmh=50;
void forward()
{
  digitalWrite(brk2,LOW);
  analogWrite(pwm2,pwmh);
  digitalWrite(dir2,HIGH);

  digitalWrite(brk4,LOW);
  analogWrite(pwm4,pwmh);
  digitalWrite(dir4,HIGH);

  digitalWrite(brk1,HIGH);
  digitalWrite(brk3,HIGH);
}

void right()
{
  digitalWrite(brk1,LOW);
 analogWrite(pwm1,pwmh);
  digitalWrite(dir1, HIGH);

  digitalWrite(brk3,LOW);
  analogWrite(pwm3,pwmh);
  digitalWrite(dir3,LOW);

  digitalWrite(brk2,HIGH);
   digitalWrite(brk4,HIGH);
}

void left()
{
  digitalWrite(brk1,LOW);
 analogWrite(pwm1,pwmh);
  digitalWrite(dir1,LOW);

  digitalWrite(brk3,LOW);
  analogWrite(pwm3,pwmh);
  digitalWrite(dir3,HIGH);

  digitalWrite(brk2,HIGH);
   digitalWrite(brk4,HIGH);
}

void reverse()
{
  digitalWrite(brk2,LOW);
  analogWrite(pwm2,pwmh);
  digitalWrite(dir2,HIGH);

  digitalWrite(brk4,LOW);
  analogWrite(pwm4,pwmh);
  digitalWrite(dir4,LOW);

  digitalWrite(brk1,HIGH);
  digitalWrite(brk3,HIGH);
}

void agni()
{
  digitalWrite(brk4,LOW);
  analogWrite(pwm4,pwmh);
  digitalWrite(dir4,HIGH);

   digitalWrite(brk3,LOW);
  analogWrite(pwm3,pwmh);
  digitalWrite(dir3,LOW);

  digitalWrite(brk1,LOW);
  analogWrite(pwm1,pwmh);
  digitalWrite(dir1,HIGH);

   digitalWrite(brk2,LOW);
  analogWrite(pwm2,pwmh);
  digitalWrite(dir2,LOW);
}

void ishan()
{
  digitalWrite(brk4,LOW);
  analogWrite(pwm4,pwmh);
  digitalWrite(dir4,HIGH);

   digitalWrite(brk3,LOW);
  analogWrite(pwm3,pwmh);
  digitalWrite(dir3,HIGH);

  digitalWrite(brk1,LOW);
  analogWrite(pwm1,pwmh);
  digitalWrite(dir1,LOW);

   digitalWrite(brk2,LOW);
  analogWrite(pwm2,pwmh);
  digitalWrite(dir2,LOW);
}

void nairutya()
{
  digitalWrite(brk4,LOW);
  analogWrite(pwm4,pwmh);
  digitalWrite(dir4,LOW);

   digitalWrite(brk3,LOW);
  analogWrite(pwm3,pwmh);
  digitalWrite(dir3,LOW);

  digitalWrite(brk1,LOW);
  analogWrite(pwm1,pwmh);
  digitalWrite(dir1,HIGH);

   digitalWrite(brk2,LOW);
  analogWrite(pwm2,pwmh);
  digitalWrite(dir2,HIGH);
}

void vayavy()
{
  digitalWrite(brk4,LOW);
  analogWrite(pwm4,pwmh);
  digitalWrite(dir4,LOW);

   digitalWrite(brk3,LOW);
  analogWrite(pwm3,pwmh);
  digitalWrite(dir3,HIGH);

  digitalWrite(brk1,LOW);
  analogWrite(pwm1,pwmh);
  digitalWrite(dir1,LOW);

   digitalWrite(brk2,LOW);
  analogWrite(pwm2,pwmh);
  digitalWrite(dir2,HIGH);
  
}
void freeze()
{
  digitalWrite(brk1,HIGH);
  digitalWrite(brk2,HIGH);
  digitalWrite(brk3,HIGH);
  digitalWrite(brk4,HIGH);
}
void setup() {
//  pinMode(2,OUTPUT);
//  pinMode(3,OUTPUT);
//  pinMode(4,OUTPUT);
//  pinMode(5,OUTPUT);
//  pinMode(6,OUTPUT);
//  pinMode(7,OUTPUT);
//  pinMode(8,OUTPUT);
//  pinMode(9,OUTPUT);
//  pinMode(10,OUTPUT);
//  pinMode(11,OUTPUT);
//  pinMode(12,OUTPUT);
//  pinMode(13,OUTPUT);
  for(byte i=2;i<=13;i++)
  pinMode(i,OUTPUT);
}

void loop() {
  
delay(2000);

//left();

forward();
//delay(2000);

//forward();
//delay(5000);
//
//right();
//delay(1500);
//
//left();
//delay(1500);
//
//reverse();
//delay(1500);
//
//ishan();
//delay(1500);
//
//nairutya();
//delay(1500);
//
//agni();
//delay(1500);

//freeze();
while(1);

}
