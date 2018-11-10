#include "Draw.h"
Draw::Draw()
{

}

Draw::~Draw()
{
    //dtor
}
void Draw::drawArmenianFlag(){
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
    int columns = csbi.srWindow.Right - csbi.srWindow.Left + 1;
    int rows = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;
	char x = 219;														//the flag's bar character,its ASCII code
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, 04 | FOREGROUND_INTENSITY);				//red
	for(int i=0;i<rows / 3;i++){
	cout << setfill(x) << setw(columns);
	cout << '\n';
	}
	for(int i=0;i<rows / 3;i++){
	SetConsoleTextAttribute(h, 01 | FOREGROUND_INTENSITY);				//blue
	cout << setfill(x) << setw(columns);;
	cout << '\n';
	}
	for(int i=0;i<rows / 3;i++){
	SetConsoleTextAttribute(h, 14 | FOREGROUND_INTENSITY);				//green
	cout << setfill(x) << setw(columns);
	cout << '\n';
	}
}
