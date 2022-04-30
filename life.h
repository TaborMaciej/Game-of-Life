#pragma once
#include <iostream>
#include <vector>

using namespace std;
extern vector<vector<char>> grid;
struct position {
	int x, y;
};
extern constexpr int height = 40;
extern constexpr int width = 100;
extern constexpr char symbol = 'o';

void Display();
int CountNeighbors(position currentPosition);
vector<vector<char>> Behaviour(bool* change);

void Random();
void FromFile(string _fileName);
void FilePreset();