#define OLC_PGE_APPLICATION
#include "olcPixelGameEngine/olcPixelGameEngine.h"

class Game : public olc::PixelGameEngine
{
public:
	Game()
	{
		sAppName = "olc::PixelGameEngine Game";
	}
public:
	// Called once at startup
	bool OnUserCreate() override
	{
		return true;
	}

	bool OnUserUpdate(float fElapsedTime) override
	{
		for (int x = 0; x < ScreenWidth(); x++)
		{
			for (int y = 0; y < ScreenHeight(); y++)
			{
				Draw(x, y, olc::PixelF(rand() % 256, rand() % 256, rand() % 256));
			}
		}
		return true;
	}
};

int main()
{
	Game game;
	if (game.Construct(256, 240, 4, 4))
	{
		game.Start();
	}

	return 0;
}