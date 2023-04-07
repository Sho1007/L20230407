#include <iostream>
#include <cstdlib>

using namespace std;

int StartNum = 1, EndNum = 45, BallBoxSize = 6;

int main()
{
	srand(time(NULL));

	int* BallBox = new int[BallBoxSize];
	int BallCount = 0;

	while (BallCount < BallBoxSize)
	{
		int Ball = rand() % ((EndNum - StartNum) + 1) + StartNum;
		bool IsSame = false;
		for (int i = 0; i < BallCount; ++i)
		{
			if (BallBox[i] == Ball)
			{
				IsSame = true;
				break;
			}
		}
		if (!IsSame)
		{
			BallBox[BallCount++] = Ball;
		}
	}

	for (int i = 0; i < BallBoxSize; ++i)
	{
		cout << BallBox[i] << ' ';
	}
	cout << endl;

	return 0;
}