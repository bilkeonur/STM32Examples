#define _TURN_ON     		    0x0C 		// Turn Lcd Display On
#define _TURN_OFF     		  0x08 		// Turn Lcd Display Off
#define _FIRST_ROW     		  0x80 		// Move Cursor To The 1st Row
#define _SECOND_ROW     	  0xC0 		// Move Cursor To The 2nd Row
#define _CLEAR      		    0x01		// Clear Display
#define _RETURN_HOME    	  0x02 		// Return Cursor To Home Position
#define _CURSOR_OFF     	  0x0C 		// Turn Off Cursor
#define _UNDERLINE_ON   	  0x0E 		// Underline Cursor On
#define _BLINK_CURSOR_ON    0x0F 		// Blink Cursor On
#define _MOVE_CURSOR_LEFT   0x10 		// Move Cursor Left Without Changing Display Data RAM
#define _MOVE_CURSOR_RIGHT  0x14 		// Move Cursor Right Without Changing Display Data RAM
#define _SHIFT_LEFT     	  0x18 		// Shift Display Left Without Changing Display Data RAM
#define _SHIFT_RIGHT    	  0x1C 		// Shift Display Right Without Changing Display Data RAM
#define _LCD_4BIT     		  0x00
#define _LCD_8BIT     		  0x10
#define _LCD_FONT_5x8    	  0x00
#define _LCD_FONT_5x10      0x04
#define _LCD_1LINE     		  0x00
#define _LCD_2LINE     		  0x08
#define _LCD_INIT     	    0x06

void lcdDelay(void);
void lcdCmd(char outChar);
void lcdCharCp(char outChar);
void lcdChar(unsigned char row, unsigned char column, char outChar);
void lcdOutCp(char *outChar);
void lcdPrint(unsigned char row, unsigned char column, char *outChar);
void lcdGotoXY(unsigned char row, unsigned char column);
void lcdInit(char bits, char font, char lines);
void lcdClear(void);
void lcdLine1(void);
void lcdLine2(void);
