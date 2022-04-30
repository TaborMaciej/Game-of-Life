#include <time.h>
#include <Windows.h>
#include <fstream>
#include "life.h"

vector<vector<char>> grid(height, vector<char>(width, ' '));

int main()
{
	cout << "Create a file preset?\n1/2? ";
	int choice;
	cin >> choice;
	if (choice == 1)
		FilePreset();

	cout << "Would you like to use a preset (from a file) or use a randomized grid?\n1) Preset\n2) Random\n1\\2? ";
	cin >> choice;
	cout << endl;
	if (choice == 1)
	{
		cout << "REMEMBER! The preset file has to be " << width << " x " << height << "(width x height)\nDead cells must be marked with a '.', and alive cells must be marked with a '#'" << endl;
		cout << "Input the name of the file: ";
		string name;
		cin >> name;
		FromFile(name);
	}
	else
		Random();

	Display();
	system("pause");
	bool is_not_stable = true;
	while (is_not_stable)
	{
		system("cls");
		Display();
		Sleep(500);
		grid = Behaviour(&is_not_stable);
	}
	cout << "\nLIFE is stable!\n";
	system("pause");
	return 0;
}