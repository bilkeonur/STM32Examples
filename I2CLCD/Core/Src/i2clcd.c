
#include <i2clcd.h>

extern I2C_HandleTypeDef hi2c1;
#define SLAVE_ADDRESS_LCD 0x4E

void lcdSendCmd (char cmd)
{
	char data_u, data_l;
	uint8_t data_t[4];
	data_u = (cmd&0xf0);
	data_l = ((cmd<<4)&0xf0);
	data_t[0] = data_u|0x0C;
	data_t[1] = data_u|0x08;
	data_t[2] = data_l|0x0C;
	data_t[3] = data_l|0x08;
	HAL_I2C_Master_Transmit (&hi2c1, SLAVE_ADDRESS_LCD,(uint8_t *) data_t, 4, 100);
}

void lcdSendData (char data)
{
	char data_u, data_l;
	uint8_t data_t[4];
	data_u = (data&0xf0);
	data_l = ((data<<4)&0xf0);
	data_t[0] = data_u|0x0D;
	data_t[1] = data_u|0x09;
	data_t[2] = data_l|0x0D;
	data_t[3] = data_l|0x09;
	HAL_I2C_Master_Transmit (&hi2c1, SLAVE_ADDRESS_LCD,(uint8_t *) data_t, 4, 100);
}

void lcdClear (void)
{
	lcdSendCmd (0x80);

	for (int i=0; i<70; i++)
	{
		lcdSendData (' ');
	}
}

void lcdPutCur(int row, int col)
{
    switch (row)
    {
        case 0:
            col |= 0x80;
            break;
        case 1:
            col |= 0xC0;
            break;
    }

    lcdSendCmd (col);
}


void lcdInit (void)
{
	HAL_Delay(50);
	lcdSendCmd(0x30);
	HAL_Delay(5);
	lcdSendCmd(0x30);
	HAL_Delay(1);
	lcdSendCmd(0x30);
	HAL_Delay(10);
	lcdSendCmd(0x20);
	HAL_Delay(10);
	lcdSendCmd (0x28);
	HAL_Delay(1);
	lcdSendCmd (0x08);
	HAL_Delay(1);
	lcdSendCmd (0x01);
	HAL_Delay(1);
	HAL_Delay(1);
	lcdSendCmd (0x06);
	HAL_Delay(1);
	lcdSendCmd (0x0C);
}

void lcdSendString (char *str)
{
	while (*str) lcdSendData (*str++);
}
