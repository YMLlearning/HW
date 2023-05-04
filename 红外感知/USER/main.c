#include "sys.h"
#include "delay.h"
#include "usart.h"
#include "led.h"
#include "HW.h"
 #include "BEEP.h"


int main()
{
	LED_Init();
	infrared_INIT();
	while(1)
	{
	if(Detect()==0)  
		{
      LED0=0; 
		}
		else               
		{
		LED0=1;
		}
	}
}
