
int IR_Left= 3;
int IR_Right= 4; 
void setup() {
  // put your setup code here, to run once:
pinMode(IR_Left, INPUT); // IR1 DO pin
pinMode(IR_Left, INPUT); // IR2 DO pin
pinMode(13, OUTPUT); // motor pins
pinMode (12, OUTPUT);
pinMode(11, OUTPUT);
pinMode(10, OUTPUT);
}

void loop()
{
  digitalWrite(13, LOW);                                  // code to make the bot move forward continuously 
  digitalWrite(12, HIGH);
  digitalWrite(11, LOW);
  digitalWrite(10, HIGH);

  if(digitalRead(IR_Left)==HIGH&&digitalRead(IR_Right)==HIGH){      // code to mke the bot stop when there is an obstacle in front of it
    
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
    
    
    delay(2000); 
      digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(11, HIGH);
  digitalWrite(10, LOW);
    
    }
  if(digitalRead(IR_Left)== LOW && digitalRead(IR_Right)==HIGH){          // To move left
    
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(11, HIGH);
  digitalWrite(10, LOW);
    
  }
  
  if(digitalRead(IR_Left)==HIGH&&digitalRead(IR_Right)==HIGH){         // To turn right 
  digitalWrite(13, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  
  }
  }
  
  
  
