#include <stdio.h>
#include "Lensflare.h"
#include "DynamicTxd.h"

/*
- (minus)
+ (plus)
● (center)
• (centeredright)
____________________
|                /\ +             |
|  -              |             , + |
|----•--------●---------,>|
|                 | -                |
|_________|_________.|

*/

int main(){
	float x;
	float y;
	float width;
	float height;
	Initialize();
	SetCenteredRight();
	return 0;
}

void Initialize(){
	Init("texture\\pixel.txd");
	if (!Validate()) {
		Load();
		GetTexture("pixel");
	}
}

void Draw(){
	width = 5.0f;
	height = 5.0f;
	DrawHalo("pixel", x, y, width * 2, height * 2, 0.0f, 255, 255, 255, 255, 2, 2);
}

void SetCentered(){
	float x = SCREEN_COORD_CENTER_X;
	float y = SCREEN_COORD_CENTER_Y;
	if (x != SCREEN_COORD_CENTER_X && y != SCREEN_COORD_CENTER_Y){
		Unload();
	}
}

void SetCenteredRight(){
	float x = SCREEN_COORD_CENTER_X;
	float y = 100.0f;
	if (x != SCREEN_COORD_CENTER_X && y != 100.0f){
		Unload();
	}
}

/* letter A on pixel
     ■■
 ■        ■
 ■■■■
 ■        ■
*/
void LetterA(){ // sample only 
	Draw();
	x += 1.0f;
	Draw();
	x += 1.0f;
	y += 1.0f;
	Draw();
	x += 1.0f;
	y += 2.0f;
	Draw();
	x += 0.0f;
	y += 3.0f;
	Draw();
	x += -1.0f;
	y += 3.0f;
	Draw();
	x += -2.0f;
	y += 2.0f;
	Draw();
	x += -2.0f;
	y += 1.0f;
	Draw();
	x += -2.0f;
	y += 0.0f;
	Draw();
}
