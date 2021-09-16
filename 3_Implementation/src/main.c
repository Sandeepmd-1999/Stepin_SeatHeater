#include <avr/io.h>
#include"Activ1.h"
#include"Activ2.h"
#include"Activ3.h"
#include<util/delay.h>
int main(void)
{
    LCD_INITIALIZATION();
    while(1)
    {
        Activ1(); //Activity 1
        Activ2(); //Activity 2
        Activ3(); //Activity 3
    }
  return 0;
}
