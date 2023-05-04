#ifndef __HW_H
#define __HW_H	 
#include "sys.h"
#define Detect() GPIO_ReadInputDataBit(GPIOA,GPIO_Pin_7)
void infrared_INIT(void);
#endif
