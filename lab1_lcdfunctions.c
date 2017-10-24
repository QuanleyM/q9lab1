#include <p18f452.h>
#include <stdio.h>
#include "xc_L1.h"
#include "htc_L1.h"
#include "lcd.h"

//#define _XTAL_FREQ 4000000

extern void DelayFor18TCY(void){
    _delay(18);
}

extern void DelayPORXLCD(void){
    __delay_ms(15);
}
extern void DelayXLCD(void){
    __delay_ms(5);
}
