#include "stm32f0xx_hal.h"

void lcdInit (void);   				// Initialize Lcd
void lcdSendCmd (char cmd); 		// Send Command To The Lcd
void lcdSendData (char data);  		// Send Data To The Lcd
void lcdSendString (char *str);  	// Send String To The Lcd
void lcdPutCur(int row, int col);  	// Put Cursor At The Entered Position Row(0or1), Col(0-15);
void lcdClear (void);
