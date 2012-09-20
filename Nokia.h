/*
  Nokia.h - Driver for Nokia 5110 LCD screen.
  Created by Pierre-Yves Merle, September 16, 2012.
  Released into the public domain.
*/
#ifndef Nokia_h
#define Nokia_h

#include <WProgram.h>
#include <stdlib.h>
#include <inttypes.h>

#define LCD_C     LOW
#define LCD_D     HIGH

#define LCD_X     84
#define LCD_Y     48

#define LCD_CMD   0

class Nokia
{
  public:
    Nokia(int SCLK,int SDIN, int DC, int RESET, int SCE);
    void writechar(char character);
	void clear(void);
	void print(char *characters);
	void write(byte dc, byte data);
	void gotoXY(int x, int y);
	void drawLine(void);
  private:
    int _pin_sce;
	int _pin_rst;
	int _pin_dc;
	int _pin_sdin;
	int _pin_sclk;
	static byte ASCII[][5];
};

#endif