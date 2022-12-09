#pragma once
#include <iostream>
#include <Windows.h>

using namespace std;

class ConsoleIO {
public:
	static int GetValue(istream& is) {
		SetConsoleCP(1251);
		SetConsoleOutputCP(1251);
		int value;
		while (true) {
			is >> value;
			if (is.peek() == '\n') {
				is.get();
				break;
			}
			else {
				cout << "\n\tPROBLEM: ";
				is.clear();
				while (is.get() != '\n') {};
			}
		}
		return value;
	};

	static char* GetText(istream& is) {
		char* buffer = new char[255];
		while (true) {
			SetConsoleCP(1251);
			is.getline(buffer, 255, '\n');
			SetConsoleCP(866);
			SetConsoleCP(1251);
			SetConsoleOutputCP(1251);
			if (strlen(buffer) > 0) {
				int emptyChar = 0;
				for (int i = 0; i < strlen(buffer); i++)
					if (buffer[i] == ' ')
						emptyChar++;
				if (emptyChar != strlen(buffer))
					break;
			}
			cout << "\n\tPROBLEM: " << endl;
		}
		is.clear();
		return buffer;
	};
};