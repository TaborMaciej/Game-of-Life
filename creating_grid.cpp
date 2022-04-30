#include <fstream>
#include <string>
#include "life.h"

void FilePreset()
{
	ofstream preset;
	preset.open("preset.txt");
	if (preset.is_open())
	{
		for (int i = 0; i < height; i++)
		{
			for (int j = 0; j < width; j++)
				preset << '.';
			preset << endl;
		}
		cout << "Preset has been created" << endl;
		preset.close();
	}
}
void Random()
{
	srand(time(NULL));
	for (int i = 0; i < height; i++)
		for (int j = 0; j < width; j++)
		{
			int a = rand() % 3;
			grid[i][j] = a == 0 ? symbol : ' ';
		}
}
void FromFile(string _fileName)
{
	ifstream file;
	_fileName = _fileName + ".txt";
	cout << _fileName << endl;
	file.open(_fileName);
	string _line;
	char cell;
	if (file.is_open())
	{
		for (int i = 0; i < height; i++)
		{
			getline(file, _line, '\n');
			for (int j = 0; j < width; j++)
			{
				cell = _line[j];
				grid[i][j] = cell == '#' ? symbol : ' ';
			}
		}
		file.close();
	}
}