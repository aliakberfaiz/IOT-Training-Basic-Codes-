const int a =D0;
const int b =D1;
const int c =D2;
const int d =D3;
const int e =D4;
const int f =D5;
const int g =D6;
const int l1 = D7;
const int l2 = D8;
const int l3 = D9;



void setup() {
pinMode(a,OUTPUT);
pinMode(b,OUTPUT);
pinMode(c,OUTPUT);
pinMode(d,OUTPUT);
pinMode(e,OUTPUT);
pinMode(f,OUTPUT);
pinMode(g,OUTPUT);
pinMode(l1,OUTPUT);
pinMode(l2,OUTPUT);
pinMode(l3,OUTPUT);
}

void loop() {
  

}

void traffic(){digitalWrite(l1,HIGH);
    digitalWrite(l3,LOW);
  
 cd();
  digitalWrite(l1,LOW);
 digitalWrite(l2,HIGH);
 cd();
  digitalWrite(l2,LOW);
 digitalWrite(l3,HIGH);
 cd();}
void cd(){ nine();
  eight();
  seven();
  six();
  five();
  four();
  three();
  two();
  one();
  zero();}
void zero(){ digitalWrite(a,HIGH);
             digitalWrite(b,HIGH);
             digitalWrite(c,HIGH);
             digitalWrite(d,HIGH);
             digitalWrite(e,HIGH);
             digitalWrite(f,HIGH);
             digitalWrite(g,LOW);
             delay(500);}
void one(){digitalWrite(a,LOW);
             digitalWrite(b,HIGH);
             digitalWrite(c,HIGH);
             digitalWrite(d,LOW);
             digitalWrite(e,LOW);
             digitalWrite(f,LOW);
             digitalWrite(g,LOW); delay(500);}
void two(){digitalWrite(a,HIGH);
             digitalWrite(b,HIGH);
             digitalWrite(c,LOW);
             digitalWrite(d,HIGH);
             digitalWrite(e,HIGH);
             digitalWrite(f,LOW);
             digitalWrite(g,HIGH); delay(500);}
void three(){digitalWrite(a,HIGH);
             digitalWrite(b,HIGH);
             digitalWrite(c,HIGH);
             digitalWrite(d,HIGH);
             digitalWrite(e,LOW);
             digitalWrite(f,LOW);
             digitalWrite(g,HIGH); delay(500);}
void four(){digitalWrite(a,LOW);
             digitalWrite(b,HIGH);
             digitalWrite(c,HIGH);
             digitalWrite(d,LOW);
             digitalWrite(e,LOW);
             digitalWrite(f,HIGH);
             digitalWrite(g,HIGH); delay(500);}
void five(){digitalWrite(a,HIGH);
             digitalWrite(b,LOW);
             digitalWrite(c,HIGH);
             digitalWrite(d,HIGH);
             digitalWrite(e,LOW);
             digitalWrite(f,HIGH);
             digitalWrite(g,HIGH); delay(500);}
void six(){digitalWrite(a,HIGH);
             digitalWrite(b,LOW);
             digitalWrite(c,HIGH);
             digitalWrite(d,HIGH);
             digitalWrite(e,HIGH);
             digitalWrite(f,HIGH);
             digitalWrite(g,HIGH); delay(500);}
void seven(){digitalWrite(a,HIGH);
             digitalWrite(b,HIGH);
             digitalWrite(c,HIGH);
             digitalWrite(d,LOW);
             digitalWrite(e,LOW);
             digitalWrite(f,LOW);
             digitalWrite(g,LOW); delay(500);}
void eight(){digitalWrite(a,HIGH);
             digitalWrite(b,HIGH);
             digitalWrite(c,HIGH);
             digitalWrite(d,HIGH);
             digitalWrite(e,HIGH);
             digitalWrite(f,HIGH);
             digitalWrite(g,HIGH); delay(500);}
void nine(){digitalWrite(a,HIGH);
             digitalWrite(b,HIGH);
             digitalWrite(c,HIGH);
             digitalWrite(d,HIGH);
             digitalWrite(e,LOW);
             digitalWrite(f,HIGH);
             digitalWrite(g,HIGH); delay(500);}
