#include "lpc214x.h" 
int main(void) 
{ 
 unsigned int sw_sts; 
 IODIR0 = 0x0000ff00; //Configure Port0  
PINSEL0 = 0; //Configure Port0 as General Purose IO 
while(1) 
{ 
 sw_sts = IOPIN0; 
 IOSET0 = 0x0000ff00; //Set P0.15-P0.8 to '1'  
 IOCLR0 = sw_sts >> 8; //Set P0.15-P0.8 to '0' 
} 
} 
