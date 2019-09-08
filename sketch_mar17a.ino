int led = 13;
int del = 250;
char indata[2];
int p = 0;
char inchar = '\0';


void setup()  
{  
    
  Serial.begin(9600);  
  pinMode(13, OUTPUT);  
}  
  
  
  
void loop()  
{  
  if(Serial.available())  
  {  
    int x = Serial.available();
    if (p <= 1)
    {
      indata[p] = '\0';
      inchar = Serial.read();
      indata[p] = inchar;
      p++;
    }
    if (indata[1] == 'a') { del = 500; };
    for (int i = 0; i <= x-2; i++)
    {
      char data=Serial.read();  
      Serial.println(data);  
      switch(data)   
      {  
        case 'a':
          digitalWrite(led, HIGH); delay(del);
            digitalWrite(led, LOW);  delay(del);   
          digitalWrite(led, HIGH); delay(3*del); 
        break;  
        case 'b':
          digitalWrite(led, HIGH); delay(3*del); 
            digitalWrite(led, LOW);  delay(del);  
          digitalWrite(led, HIGH); delay(del);
            digitalWrite(led, LOW);  delay(del);  
          digitalWrite(led, HIGH); delay(del);
            digitalWrite(led, LOW);  delay(del);  
          digitalWrite(led, HIGH); delay(del);
        break;  
        case 'c':
          digitalWrite(led, HIGH); delay(3*del); 
            digitalWrite(led, LOW);  delay(del);  
          digitalWrite(led, HIGH); delay(del);
            digitalWrite(led, LOW);  delay(del);
          digitalWrite(led, HIGH); delay(3*del); 
            digitalWrite(led, LOW);  delay(del);  
          digitalWrite(led, HIGH); delay(del);
        break;  
        case 'd':
          digitalWrite(led, HIGH); delay(3*del); 
            digitalWrite(led, LOW);  delay(del);  
          digitalWrite(led, HIGH); delay(del);
            digitalWrite(led, LOW);  delay(del);  
          digitalWrite(led, HIGH); delay(del);
        break;  
        case 'e':
          digitalWrite(led, HIGH); delay(del);
        break;  
        case 'f':
          digitalWrite(led, HIGH); delay(del);
            digitalWrite(led, LOW);  delay(del);  
          digitalWrite(led, HIGH); delay(del);
            digitalWrite(led, LOW);  delay(del);
          digitalWrite(led, HIGH); delay(3*del); 
            digitalWrite(led, LOW);  delay(del);  
          digitalWrite(led, HIGH); delay(del);
        break;  
        case 'g':
          digitalWrite(led, HIGH); delay(3*del); 
            digitalWrite(led, LOW);  delay(del); 
          digitalWrite(led, HIGH); delay(3*del); 
            digitalWrite(led, LOW);  delay(del); 
          digitalWrite(led, HIGH); delay(del); 
        break;  
        case 'h':
          digitalWrite(led, HIGH); delay(del); 
            digitalWrite(led, LOW);  delay(del);  
          digitalWrite(led, HIGH); delay(del);
            digitalWrite(led, LOW);  delay(del);  
          digitalWrite(led, HIGH); delay(del);
            digitalWrite(led, LOW);  delay(del);  
          digitalWrite(led, HIGH); delay(del);
        break;  
        case 'i':
          digitalWrite(led, HIGH); delay(del); 
            digitalWrite(led, LOW);  delay(del);  
          digitalWrite(led, HIGH); delay(del);
        break;  
        case 'j':
          digitalWrite(led, HIGH); delay(del); 
            digitalWrite(led, LOW);  delay(del);  
          digitalWrite(led, HIGH); delay(3*del); 
            digitalWrite(led, LOW);  delay(del); 
          digitalWrite(led, HIGH); delay(3*del); 
            digitalWrite(led, LOW);  delay(del); 
          digitalWrite(led, HIGH); delay(3*del); 
        break;  
        case 'k':
          digitalWrite(led, HIGH); delay(3*del); 
            digitalWrite(led, LOW);  delay(del); 
          digitalWrite(led, HIGH); delay(del); 
            digitalWrite(led, LOW);  delay(del);  
          digitalWrite(led, HIGH); delay(3*del); 
        break;  
        case 'l':
          digitalWrite(led, HIGH); delay(del); 
            digitalWrite(led, LOW);  delay(del);  
          digitalWrite(led, HIGH); delay(3*del); 
            digitalWrite(led, LOW);  delay(del); 
          digitalWrite(led, HIGH); delay(del); 
            digitalWrite(led, LOW);  delay(del); 
          digitalWrite(led, HIGH); delay(del); 
        break;  
        case 'm':
          digitalWrite(led, HIGH); delay(3*del); 
            digitalWrite(led, LOW);  delay(del); 
          digitalWrite(led, HIGH); delay(3*del); 
        break;  
        case 'n':
          digitalWrite(led, HIGH); delay(3*del); 
            digitalWrite(led, LOW);  delay(del); 
          digitalWrite(led, HIGH); delay(del); 
        break;  
        case 'o':
          digitalWrite(led, HIGH); delay(3*del); 
            digitalWrite(led, LOW);  delay(del); 
          digitalWrite(led, HIGH); delay(3*del); 
            digitalWrite(led, LOW);  delay(del); 
          digitalWrite(led, HIGH); delay(3*del); 
        break;  
        case 'p':
          digitalWrite(led, HIGH); delay(del); 
            digitalWrite(led, LOW);  delay(del); 
          digitalWrite(led, HIGH); delay(3*del); 
            digitalWrite(led, LOW);  delay(del); 
          digitalWrite(led, HIGH); delay(3*del); 
            digitalWrite(led, LOW);  delay(del); 
          digitalWrite(led, HIGH); delay(del); 
        break;  
        case 'q':
          digitalWrite(led, HIGH); delay(3*del); 
            digitalWrite(led, LOW);  delay(del); 
          digitalWrite(led, HIGH); delay(3*del); 
            digitalWrite(led, LOW);  delay(del); 
          digitalWrite(led, HIGH); delay(del); 
            digitalWrite(led, LOW);  delay(del); 
          digitalWrite(led, HIGH); delay(3*del); 
        break;  
        case 'r':
          digitalWrite(led, HIGH); delay(del); 
            digitalWrite(led, LOW);  delay(del); 
          digitalWrite(led, HIGH); delay(3*del); 
            digitalWrite(led, LOW);  delay(del); 
          digitalWrite(led, HIGH); delay(del); 
        break;  
        case 's':
          digitalWrite(led, HIGH); delay(del); 
            digitalWrite(led, LOW);  delay(del); 
          digitalWrite(led, HIGH); delay(del); 
            digitalWrite(led, LOW);  delay(del); 
          digitalWrite(led, HIGH); delay(del); 
        break;  
        case 't':
          digitalWrite(led, HIGH); delay(3*del); 
        break;  
        case 'u':
          digitalWrite(led, HIGH); delay(del); 
            digitalWrite(led, LOW);  delay(del); 
          digitalWrite(led, HIGH); delay(del); 
            digitalWrite(led, LOW);  delay(del); 
          digitalWrite(led, HIGH); delay(3*del); 
        break;  
        case 'v':
          digitalWrite(led, HIGH); delay(del); 
            digitalWrite(led, LOW);  delay(del); 
          digitalWrite(led, HIGH); delay(del); 
            digitalWrite(led, LOW);  delay(del); 
          digitalWrite(led, HIGH); delay(del); 
            digitalWrite(led, LOW);  delay(del); 
          digitalWrite(led, HIGH); delay(3*del); 
        break;  
        case 'w':
          digitalWrite(led, HIGH); delay(del); 
            digitalWrite(led, LOW);  delay(del); 
          digitalWrite(led, HIGH); delay(3*del); 
            digitalWrite(led, LOW);  delay(del); 
          digitalWrite(led, HIGH); delay(3*del); 
        break;  
        case 'x':
          digitalWrite(led, HIGH); delay(3*del); 
            digitalWrite(led, LOW);  delay(del); 
          digitalWrite(led, HIGH); delay(del); 
            digitalWrite(led, LOW);  delay(del); 
          digitalWrite(led, HIGH); delay(del); 
            digitalWrite(led, LOW);  delay(del); 
          digitalWrite(led, HIGH); delay(3*del);  
        break;  
        case 'y':
          digitalWrite(led, HIGH); delay(3*del); 
            digitalWrite(led, LOW);  delay(del); 
          digitalWrite(led, HIGH); delay(del); 
            digitalWrite(led, LOW);  delay(del); 
          digitalWrite(led, HIGH); delay(3*del); 
            digitalWrite(led, LOW);  delay(del); 
          digitalWrite(led, HIGH); delay(3*del);
        break;  
        case 'z':
          digitalWrite(led, HIGH); delay(3*del); 
            digitalWrite(led, LOW);  delay(del); 
          digitalWrite(led, HIGH); delay(3*del); 
            digitalWrite(led, LOW);  delay(del); 
          digitalWrite(led, HIGH); delay(del); 
            digitalWrite(led, LOW);  delay(del); 
          digitalWrite(led, HIGH); delay(del);
        break;  
        case ' ':
          if (indata[0] == 'a')
          {
            digitalWrite(led, HIGH);
            delay(del/7);
            digitalWrite(led, LOW);
            delay(del/7);
            digitalWrite(led, HIGH);
            delay(del/7);
            digitalWrite(led, LOW);
            delay(del/7);
            digitalWrite(led, HIGH);
            delay(del/7);
            digitalWrite(led, LOW);
            delay(del/7);
            digitalWrite(led, HIGH);
          }
          else
          {
            digitalWrite(led, LOW);
            delay(del);
          };
        break;  
      }  
    digitalWrite(led, LOW);  delay(3*del);  
    }
  }  
}   
