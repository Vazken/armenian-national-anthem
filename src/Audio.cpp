#include "Audio.h"
#include <windows.h>
Audio::Audio()
{
    //ctor
}

Audio::~Audio()
{
    //dtor
}

void Audio::playAmrnianAnthem() {
    for (short i = 0; i < 3; i++) {							//our first loop, we repeat the whole song 4 times :)
		for (short a = 0; a < 2; a++) {
			Beep(440, 800);				//A			Mer			a
			Beep(392, 400);				//G			hay			zat
			Beep(370, 800);				//F#		re			an
			Beep(294, 800);				//D2		niq			kax
		}
		Beep(497, 800);				//B2		vor
		Beep(554, 400);				//C#2		ap
		Beep(587, 800);				//D2		re
		Beep(659, 800);				//E2		le

		Beep(554, 800);				//C#2		da
		Beep(497, 800);				//B2		re
		Beep(440, 1600);			//A			dar
		for (short b = 0; b < 2; b++) {					//2nd loop
			Beep(497, 800);				//B2		yur
			Beep(554, 400);				//C#2		vor
			Beep(587, 800);				//D2		di
			Beep(659, 800);				//E2		q@

			Beep(440, 800);				//A			ard
			Beep(392, 400);				//G			kan
			Beep(370, 800);				//F#		chum
			Beep(294, 800);				//D			en

			Beep(330, 1000);			//E			A
			Beep(370, 400);				//F#		zat
			Beep(392, 800);				//G			an
			Beep(440, 800);				//A			kax
			if (b % 2 == 0) {								//first time goes up after the 2nd loop
				Beep(370, 800);				//F#		ha
				Beep(392, 800);				//G			yas
				Beep(440, 1600);			//A			tan
			}
			else {											//second time goes down after the 2nd loop
				Beep(370, 800);				//F#		ha
				Beep(330, 800);				//E			yas
				Beep(294, 1600);			//D			tan
			}
		}
	}
}
