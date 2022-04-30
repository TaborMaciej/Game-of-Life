#include "life.h"

void Display()
{
	for (int i = 0; i < width + 2; i++)
		cout << '-';
	cout << endl;
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			if (j == 0)
				cout << '|';

			cout << grid[i][j];

			if (j == width - 1)
				cout << '|';
		}
		cout << endl;
	}
	for (int i = 0; i < width + 2; i++)
		cout << '-';
	cout << endl;
}

int CountNeighbors(position currentPosition)
{
	int count = 0;
	for(int i = currentPosition.x - 1; (i <= currentPosition.x + 1) && (i < height); i++)
		for (int j = currentPosition.y - 1; (j <= currentPosition.y + 1) && (j < width); j++)
			if ((i != currentPosition.x || j != currentPosition.y) && i >= 0 && j >= 0)
				if (grid[i][j] != ' ')
					count++;
	return count;
}

vector<vector<char>> Behaviour(bool* change)
{
	*change = false;
	vector<vector<char>> temp = grid;
	position pos;
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			pos.x = i;
			pos.y = j;
			int adjacent = CountNeighbors(pos);
			if (grid[i][j] != ' ')
			{
				if (adjacent < 2)
				{
					temp[i][j] = ' ';
					*change = true;
				}
				else if (adjacent > 3)
				{
					temp[i][j] = ' ';
					*change = true;
				}

			}
			else
				if (adjacent == 3)
				{
					temp[i][j] = symbol;
					*change = true;
				}
		}
	}
	return temp;
}