#include <Servo.h>
Servo servol;
int pos1 = 0;

void setup() {
servol.attach(10);


}

void loop()
{
for(pos1=0 ; pos1 < 180; pos1 +=1)
 { 
  servol.write(pos1);
  delay(5);
 }
 for(pos1 =180; pos1>=1; pos1-=1)
 {servol.write(pos1);
 delay(5);
 
}
}
