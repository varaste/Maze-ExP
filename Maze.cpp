#include <iostream>
#include <string>
# include <cmath>
#include <windows.h>
#include <conio.h>
#include <ctime>
#include <cstdlib>
	0,1,1,1,0,1,1,1,1,0,
	0,1,0,1,0,1,1,0,1,0,
	for (int i = 0; i < 10; i++) {
	for (int j = 0; j < 10; j++) {
	cout << a[i][j]<<" ";
	}
	cout << endl;
	}
	*/
	a[sx][sy] = 2;
	an[sx][sy] = 2;

	while (x != ex && y != ey) {
		SetConsoleTextAttribute(hstdout, 0x09); //Color for text
		cout << "what direction you want to go\n";
		cin >> answer;
		if (answer == "d" && (a[x + 1][y] == 1 || a[x + 1][y] == 2)) {
			if (a[x + 1][y] == 2) {
				a[x][y] = 1;
				an[x][y] = 0;
			}
		if (answer == "u" && (a[x - 1][y] == 1 || a[x - 1][y] == 2)) {
			if (a[x - 1][y] == 2) {
				a[x][y] = 1;
				an[x][y] = 0;
			}
			an[x - 1][y] = 2;
		
			}
			an[x][y - 1] = 2;
			a[x][y - 1] = 2;

			y--;
			an[x][y - 1] = 4;
				}
				if (an[i][j] == 2) {
					SetConsoleTextAttribute(hstdout, 0x0a); //Color for text
					cout << char(219);
					SetConsoleTextAttribute(hstdout, 0x0a); //Color for text
					cout << char(219);
				}
			
			}

			cout << endl;
		}
