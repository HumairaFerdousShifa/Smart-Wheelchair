#define ena 10
#define enb 11
#define lm1 2
#define lm2 3
#define rm1 4
#define rm2 5

void drive( int ,int);
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
analogWrite(ena,200);
analogWrite(enb,200);
pinMode(lm1,OUTPUT);
pinMode(lm2,OUTPUT);
pinMode(rm1,OUTPUT);
pinMode(rm2,OUTPUT);
}
char x;
void loop() {
  // put your main code here, to run repeatedly:
if (Serial.available()>0)
{x=Serial.read();
Serial.println(x);}
if(x=='F')drive(1,1);
else if(x=='B')drive(-1,-1);
else if(x=='L')drive(-1,1);
else if(x=='R')drive(1,-1);
else if(x=='G')drive(0,1);
else if(x=='I')drive(1,0);
else if(x=='H')drive(0,-1);
else if(x=='J')drive(-1,0);
else{
drive(0,0);

}
}


void drive(int l,int r)
{
  if (l==1)
  {digitalWrite(lm1,1);
   digitalWrite(lm2,0);
  }
  else if(l==0)
  {digitalWrite(lm1,1);
   digitalWrite(lm2,1);
  }
  else if(l==-1)
  {digitalWrite(lm1,0);
   digitalWrite(lm2,1);
  }

  if (r==1)
  {digitalWrite(rm1,1);
   digitalWrite(rm2,0);
  }
  else if(r==0)
  {digitalWrite(rm1,1);
   digitalWrite(rm2,1);
  }
  else if(r==-1)
  {digitalWrite(rm1,0);
   digitalWrite(rm2,1);
  }
  }
 
