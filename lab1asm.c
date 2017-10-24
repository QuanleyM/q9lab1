//Quanley Marieatte - MicroP Lab 1
//
#include <p18f452.h>
#include <stdio.h>
#include "xc_L1.h"
#include "htc_L1.h"
#include "lcd.h"

/*Set configuration bits for use with PICKit3*/
#pragma config OSC = HS
#pragma config WDT = OFF
#pragma config LVP = OFF

//#define _XTAL_FREQ 4000000
//From lab1.asm file
extern char getMapChar(void);
extern unsigned char MapName[8] = {'T','h','e','t','a','M','a','\0'};
unsigned char MapIndex = 0;

void InitLCD(void);

void main (void){
    InitLCD();
    while (BusyXLCD());
    //putrsXLCD("Hello");
    putsXLCD(MapName);
    while(1);
}

void InitLCD(void){
    OpenXLCD(FOUR_BIT & LINES_5X7);
    //screenAddr = 0x40;
    while(BusyXLCD());
    SetDDRamAddr(0x40);
    WriteCmdXLCD(SHIFT_DISP_LEFT);
    while (BusyXLCD());
    WriteCmdXLCD(BLINK_OFF);
}
