#include <Servo.h>
Servo servol;
int pos1 = 0;

void setup() {
servol.attach(10);


}

void loop()
{
for(pos1=0 ; pos1 < 90; pos1 +=1)
 { 
  servol.write(pos1);
  delay(10);
 }
 for(pos1 =90; pos1>=1; pos1-=1)
 {servol.write(pos1);
 delay(10);
 
}
}
