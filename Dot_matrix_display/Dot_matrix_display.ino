
#include <MaxMatrix.h>
int DIN = 7;
int CLK = 6;
int CS = 5;
int maxInUse = 1;
byte buffer[20];
char text[] = "a";
MaxMatrix m(DIN, CS, CLK, maxInUse);
void setup() {
 m.init();
 m.setIntensity(5);
}

void loop() 
{
 // for l
for(int j=0;j<8;j++)
{
for(int i=0;i<8;i++)
{
  if(i==0 || i==1 || j==7 || j==6 )
  {
      m.setDot(i,j, true);
  }
}
}
}

 
 
 
