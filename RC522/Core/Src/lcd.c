#include "stm32f0xx_hal.h"
#include "main.h"
#include "LCD.h"

void delay(uint32_t i)
{
	for(; i != 0; i--);
}

void lcdDelay(void)
{
	delay(1000);
}

void lcdCmd(char outChar)
{
	LCD_RS_GPIO_Port->BRR  = LCD_RS_Pin;
	LCD_EN_GPIO_Port->BRR  = LCD_EN_Pin;
	LCD_D4_GPIO_Port->BRR  = LCD_D4_Pin;
	LCD_D5_GPIO_Port->BRR  = LCD_D5_Pin;
	LCD_D6_GPIO_Port->BRR  = LCD_D6_Pin;
	LCD_D7_GPIO_Port->BRR  = LCD_D7_Pin;

	lcdDelay();

	LCD_EN_GPIO_Port->ODR |= LCD_EN_Pin;

	if((outChar & 0x10)>>4) LCD_D4_GPIO_Port->BSRR = LCD_D4_Pin; else LCD_D4_GPIO_Port->BSRR = (uint32_t)LCD_D4_Pin << 16;
	if((outChar & 0x20)>>5) LCD_D5_GPIO_Port->BSRR = LCD_D5_Pin; else LCD_D5_GPIO_Port->BSRR = (uint32_t)LCD_D5_Pin << 16;
	if((outChar & 0x40)>>6) LCD_D6_GPIO_Port->BSRR = LCD_D6_Pin; else LCD_D6_GPIO_Port->BSRR = (uint32_t)LCD_D6_Pin << 16;
	if((outChar & 0x80)>>7) LCD_D7_GPIO_Port->BSRR = LCD_D7_Pin; else LCD_D7_GPIO_Port->BSRR = (uint32_t)LCD_D7_Pin << 16;

	lcdDelay();

	LCD_EN_GPIO_Port->BRR = LCD_EN_Pin;
	LCD_D4_GPIO_Port->BRR = LCD_D4_Pin;
	LCD_D5_GPIO_Port->BRR = LCD_D5_Pin;
	LCD_D6_GPIO_Port->BRR = LCD_D6_Pin;
	LCD_D7_GPIO_Port->BRR = LCD_D7_Pin;

	lcdDelay();

	LCD_EN_GPIO_Port->ODR |= LCD_EN_Pin;

	if(outChar & 0x01) LCD_D4_GPIO_Port->BSRR = LCD_D4_Pin; else LCD_D4_GPIO_Port->BSRR = (uint32_t)LCD_D4_Pin << 16;
	if((outChar & 0x02)>>1) LCD_D5_GPIO_Port->BSRR = LCD_D5_Pin; else LCD_D5_GPIO_Port->BSRR = (uint32_t)LCD_D5_Pin << 16;
	if((outChar & 0x04)>>2) LCD_D6_GPIO_Port->BSRR = LCD_D6_Pin; else LCD_D6_GPIO_Port->BSRR = (uint32_t)LCD_D6_Pin << 16;
	if((outChar & 0x08)>>3) LCD_D7_GPIO_Port->BSRR = LCD_D7_Pin; else LCD_D7_GPIO_Port->BSRR = (uint32_t)LCD_D7_Pin << 16;

	lcdDelay();

	LCD_EN_GPIO_Port->BRR = LCD_EN_Pin;
	LCD_D4_GPIO_Port->BRR = LCD_D4_Pin;
	LCD_D5_GPIO_Port->BRR = LCD_D5_Pin;
	LCD_D6_GPIO_Port->BRR = LCD_D6_Pin;
	LCD_D7_GPIO_Port->BRR = LCD_D7_Pin;
}

void lcdCharCp(char outChar)
{
	LCD_RS_GPIO_Port->ODR |= LCD_RS_Pin;

	LCD_EN_GPIO_Port->BRR  = LCD_EN_Pin;
	LCD_D4_GPIO_Port->BRR  = LCD_D4_Pin;
	LCD_D5_GPIO_Port->BRR  = LCD_D5_Pin;
	LCD_D6_GPIO_Port->BRR  = LCD_D6_Pin;
	LCD_D7_GPIO_Port->BRR  = LCD_D7_Pin;

	lcdDelay();

	LCD_EN_GPIO_Port->ODR |= LCD_EN_Pin;

	if((outChar & 0x10)>>4) LCD_D4_GPIO_Port->BSRR = LCD_D4_Pin; else LCD_D4_GPIO_Port->BSRR = (uint32_t)LCD_D4_Pin << 16;
	if((outChar & 0x20)>>5) LCD_D5_GPIO_Port->BSRR = LCD_D5_Pin; else LCD_D5_GPIO_Port->BSRR = (uint32_t)LCD_D5_Pin << 16;
	if((outChar & 0x40)>>6) LCD_D6_GPIO_Port->BSRR = LCD_D6_Pin; else LCD_D6_GPIO_Port->BSRR = (uint32_t)LCD_D6_Pin << 16;
	if((outChar & 0x80)>>7) LCD_D7_GPIO_Port->BSRR = LCD_D7_Pin; else LCD_D7_GPIO_Port->BSRR = (uint32_t)LCD_D7_Pin << 16;

	lcdDelay();

	LCD_EN_GPIO_Port->BRR = LCD_EN_Pin;
	LCD_D4_GPIO_Port->BRR = LCD_D4_Pin;
	LCD_D5_GPIO_Port->BRR = LCD_D5_Pin;
	LCD_D6_GPIO_Port->BRR = LCD_D6_Pin;
	LCD_D7_GPIO_Port->BRR = LCD_D7_Pin;

	lcdDelay();

	LCD_EN_GPIO_Port->ODR |= LCD_EN_Pin;

	if(outChar & 0x01) LCD_D4_GPIO_Port->BSRR = LCD_D4_Pin; else LCD_D4_GPIO_Port->BSRR = (uint32_t)LCD_D4_Pin << 16;
	if((outChar & 0x02)>>1) LCD_D5_GPIO_Port->BSRR = LCD_D5_Pin; else LCD_D5_GPIO_Port->BSRR = (uint32_t)LCD_D5_Pin << 16;
	if((outChar & 0x04)>>2) LCD_D6_GPIO_Port->BSRR = LCD_D6_Pin; else LCD_D6_GPIO_Port->BSRR = (uint32_t)LCD_D6_Pin << 16;
	if((outChar & 0x08)>>3) LCD_D7_GPIO_Port->BSRR = LCD_D7_Pin; else LCD_D7_GPIO_Port->BSRR = (uint32_t)LCD_D7_Pin << 16;

	lcdDelay();

	LCD_EN_GPIO_Port->BRR = LCD_EN_Pin;
	LCD_D4_GPIO_Port->BRR = LCD_D4_Pin;
	LCD_D5_GPIO_Port->BRR = LCD_D5_Pin;
	LCD_D6_GPIO_Port->BRR = LCD_D6_Pin;
	LCD_D7_GPIO_Port->BRR = LCD_D7_Pin;
}

void lcdOutCp(char *outChar)
{
	while(*outChar)
	{
		lcdDelay();
		lcdCharCp(*outChar++);
	}

	lcdDelay();
}

void lcdInit(char bits, char font, char lines)
{
	HAL_Delay(250);
	lcdCmd(_RETURN_HOME);
    HAL_Delay(50);
    lcdCmd(0x20 | bits | font | lines);
    HAL_Delay(50);
    lcdCmd(_LCD_INIT);
    HAL_Delay(50);
    lcdCmd(0x0E);
    HAL_Delay(50);
    lcdCmd(0x0C);
    HAL_Delay(50);
    lcdCmd(0x01);
    HAL_Delay(100);
}

void lcdGotoXY(unsigned char row, unsigned char column)
{
	if(row == 1)
	{
		lcdCmd(0x80 + (column - 1));
	}
	else if(row == 2)
	{
		lcdCmd(0xC0 + (column - 1));
	}
}

void lcdChar(unsigned char row, unsigned char column, char outChar)
{
	lcdGotoXY(row, column);
	lcdCharCp(outChar);
}

void lcdPrint(unsigned char row, unsigned char column, char *outChar)
{
	lcdGotoXY(row, column);
	lcdOutCp(outChar);
}

void lcdClear(void)
{
	lcdCmd(_CLEAR);
	HAL_Delay(2);
}

void lcdLine1(void)
{
	lcdCmd(0x80);
}

void lcdLine2(void)
{
	lcdCmd(0xC0);
}
