#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <string>
#include <windows.h>
#include <cstdlib>
#include <time.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;

void dzwiek()
{
	Beep(600, 50);
}

void gotoxy(int x, int y)
{
	COORD c;
	c.X = x;
	c.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

string zmiana(string nazwa)
{
	cin >> nazwa;
	transform(nazwa.begin(), nazwa.end(), nazwa.begin(), ::tolower);
	return nazwa;
}

void T(int x2, int y2)
{
	int z1;						// daszek T
	for (z1 = x2; z1 <= x2 + 6; z1++)
	{
		Sleep(100);
		gotoxy(z1, y2 - 5);
		dzwiek();
		cout << "*";
	}

	int z2;						// laseczka T
	for (z2 = y2 - 4; z2 <= y2; z2++)
	{
		Sleep(100);
		gotoxy(x2 + 3, z2);
		dzwiek();
		cout << "*";
	}
}
///////////////////////////////////////////
void o(int x2, int y2)
{
	int z3;						// lewe O
	for (z3 = y2 - 3; z3 <= y2 - 1; z3++)
	{
		Sleep(100);
		gotoxy(x2, z3);
		dzwiek();
		cout << "*";
	}

	int z4;						// dó³ O
	for (z4 = x2 + 1; z4 <= x2 + 3; z4++)
	{
		Sleep(100);
		gotoxy(z4, y2);
		dzwiek();
		cout << "*";
	}

	int z5;						// prawe O
	for (z5 = y2 - 1; z5 >= y2 - 3; z5--)
	{
		Sleep(100);
		gotoxy(x2 + 4, z5);
		dzwiek();
		cout << "*";
	}

	int z6;						// gora O
	for (z6 = x2 + 3; z6 >= x2 + 1; z6--)
	{
		Sleep(100);
		gotoxy(z6, y2 - 4);
		dzwiek();
		cout << "*";
	}
}
///////////////////////////////////////////
void m(int x2, int y2)
{
	int z7;						// lewe M
	for (z7 = y2; z7 >= y2 - 4; z7--)
	{
		Sleep(100);
		gotoxy(x2, z7);
		dzwiek();
		cout << "*";
	}

	Sleep(100);
	gotoxy(x2 + 1, y2 - 3);
	dzwiek();;
	cout << "*";

	Sleep(100);
	gotoxy(x2 + 2, y2 - 2);
	dzwiek();
	cout << "*";

	Sleep(100);
	gotoxy(x2 + 3, y2 - 3);
	dzwiek();
	cout << "*";

	int z8;						// prawe M
	for (z8 = y2 - 4; z8 <= y2; z8++)
	{
		Sleep(100);
		gotoxy(x2 + 4, z8);
		dzwiek();
		cout << "*";
	}
}
///////////////////////////////////////////
void e(int x2, int y2)
{
	int z9;						// srodek e
	for (z9 = x2 + 1; z9 <= x2 + 3; z9++)
	{
		Sleep(100);
		gotoxy(z9, y2 - 2);
		dzwiek();
		cout << "*";
	}

	int z10;						// prawe e
	for (z10 = y2 - 3; z10 >= y2 - 4; z10--)
	{
		Sleep(100);
		gotoxy(x2 + 3, z10);
		dzwiek();
		cout << "*";
	}

	int z11;						// góra e
	for (z11 = x2 + 2; z11 >= x2; z11--)
	{
		Sleep(100);
		gotoxy(z11, y2 - 4);
		dzwiek();
		cout << "*";
	}

	int z12;						// lewe e
	for (z12 = y2 - 3; z12 <= y2; z12++)
	{
		Sleep(100);
		gotoxy(x2, z12);
		dzwiek();
		cout << "*";
	}

	int z13;						// dó³ e
	for (z13 = x2 + 1; z13 <= x2 + 3; z13++)
	{
		Sleep(100);
		gotoxy(z13, y2);
		dzwiek();
		cout << "*";
	}
}
///////////////////////////////////////////
void k(int x2, int y2)
{
	int z14;						// laseczka K
	for (z14 = y2 - 4; z14 <= y2; z14++)
	{
		Sleep(100);
		gotoxy(x2, z14);
		dzwiek();
		cout << "*";
	}

	Sleep(100);
	gotoxy(x2 + 1, y2 - 2);
	dzwiek();
	cout << "*";

	Sleep(100);
	gotoxy(x2 + 2, y2 - 3);
	dzwiek();
	cout << "*";

	Sleep(100);
	gotoxy(x2 + 3, y2 - 4);
	dzwiek();
	cout << "*";

	Sleep(100);
	gotoxy(x2 + 2, y2 - 1);
	dzwiek();
	cout << "*";

	Sleep(100);
	gotoxy(x2 + 3, y2);
	dzwiek();
	cout << "*";			// koniec K
}
///////////////////////////////////////////
void K(int x2, int y2)
{
	int z14;						// laseczka K
	for (z14 = y2 - 4; z14 <= y2; z14++)
	{
		Sleep(100);
		gotoxy(x2, z14);
		dzwiek();
		cout << "*";
	}

	Sleep(100);
	gotoxy(x2 + 1, y2 - 2);
	dzwiek();
	cout << "*";

	Sleep(100);
	gotoxy(x2 + 2, y2 - 3);
	dzwiek();
	cout << "*";

	Sleep(100);
	gotoxy(x2 + 3, y2 - 4);
	dzwiek();
	cout << "*";

	Sleep(100);
	gotoxy(x2 + 2, y2 - 1);
	dzwiek();
	cout << "*";

	Sleep(100);
	gotoxy(x2 + 3, y2);
	dzwiek();
	cout << "*";			// koniec K
}
///////////////////////////////////////////
void c(int x2, int y2)
{
	int z24;						// góra c
	for (z24 = x2 + 3; z24 >= x2 + 1; z24--)
	{
		Sleep(100);
		gotoxy(z24, y2 - 4);
		dzwiek();
		cout << "*";
	}

	int z26;						// lewe c
	for (z26 = y2 - 3; z26 <= y2 - 1; z26++)
	{
		Sleep(100);
		gotoxy(x2, z26);
		dzwiek();
		cout << "*";
	}

	int z28;						// dó³ c
	for (z28 = x2 + 1; z28 <= x2 + 3; z28++)
	{
		Sleep(100);
		gotoxy(z28, y2);
		dzwiek();
		cout << "*";
	}
}
///////////////////////////////////////////
void h(int x2, int y2)
{
	int z29;						// lewe H
	for (z29 = y2; z29 >= y2 - 4; z29--)
	{
		Sleep(100);
		gotoxy(x2, z29);
		dzwiek();
		cout << "*";
	}

	int z30;						// srodek H
	for (z30 = x2 + 1; z30 <= x2 + 3; z30++)
	{
		Sleep(100);
		gotoxy(z30, y2 - 2);
		dzwiek();
		cout << "*";
	}

	int z31;						// prawe H
	for (z31 = y2; z31 >= y2 - 4; z31--)
	{
		Sleep(100);
		gotoxy(x2 + 3, z31);
		dzwiek();
		cout << "*";
	}
}
///////////////////////////////////////////
void a(int x2, int y2)
{
	int z32;						// lewe A
	for (z32 = y2; z32 >= y2 - 3; z32--)
	{
		Sleep(100);
		gotoxy(x2, z32);
		dzwiek();
		cout << "*";
	}

	int z33;						// srodek A
	for (z33 = x2 + 1; z33 <= x2 + 2; z33++)
	{
		Sleep(100);
		gotoxy(z33, y2 - 2);
		dzwiek();
		cout << "*";
	}

	int z34;						// prawe A
	for (z34 = y2; z34 >= y2 - 3; z34--)
	{
		Sleep(100);
		gotoxy(x2 + 3, z34);
		dzwiek();
		cout << "*";
	}

	int z35;						// góra A
	for (z35 = x2 + 1; z35 <= x2 + 2; z35++)
	{
		Sleep(100);
		gotoxy(z35, y2 - 4);
		dzwiek();
		cout << "*";
	}
}
///////////////////////////////////////////
void M(int x2, int y2)
{
	int z36;						// lewe M
	for (z36 = y2; z36 >= y2 - 5; z36--)
	{
		Sleep(100);
		gotoxy(x2, z36);
		dzwiek();
		cout << "*";
	}

	Sleep(100);
	gotoxy(x2 + 1, y2 - 4);
	dzwiek();
	cout << "*";

	Sleep(100);
	gotoxy(x2 + 2, y2 - 3);
	dzwiek();
	cout << "*";

	Sleep(100);
	gotoxy(x2 + 3, y2 - 2);
	dzwiek();
	cout << "*";

	Sleep(100);
	gotoxy(x2 + 4, y2 - 3);
	dzwiek();
	cout << "*";

	Sleep(100);
	gotoxy(x2 + 5, y2 - 4);
	dzwiek();
	cout << "*";

	int z37;						// prawe M
	for (z37 = y2 - 5; z37 <= y2; z37++)
	{
		Sleep(100);
		gotoxy(x2 + 6, z37);
		dzwiek();
		cout << "*";
	}
}
///////////////////////////////////////////
void r(int x2, int y2)
{
	int z42;						// srodek R
	for (z42 = x2 + 1; z42 <= x2 + 2; z42++)
	{
		Sleep(100);
		gotoxy(z42, y2 - 2);
		dzwiek();
		cout << "*";
	}

	int z43;						// prawe R
	for (z43 = y2 - 3; z43 >= y2 - 4; z43--)
	{
		Sleep(100);
		gotoxy(x2 + 3, z43);
		dzwiek();
		cout << "*";
	}

	int z44;						// góra R
	for (z44 = x2 + 3; z44 >= x2; z44--)
	{
		Sleep(100);
		gotoxy(z44, y2 - 4);
		dzwiek();
		cout << "*";
	}

	int z45;						// lewe R
	for (z45 = y2 - 4; z45 <= y2; z45++)
	{
		Sleep(100);
		gotoxy(x2, z45);
		dzwiek();
		cout << "*";
	}

	Sleep(100);
	gotoxy(x2 + 2, y2 - 1);
	dzwiek();
	cout << "*";

	Sleep(100);
	gotoxy(x2 + 3, y2);
	dzwiek();
	cout << "*";
}
///////////////////////////////////////////
void y(int x2, int y2)
{
	int z46;						// srodek Y
	for (z46 = y2; z46 >= y2 - 2; z46--)
	{
		Sleep(100);
		gotoxy(x2 + 2, z46);
		dzwiek();
		cout << "*";
	}

	Sleep(100);
	gotoxy(x2, y2 - 4);
	dzwiek();
	cout << "*";

	Sleep(100);
	gotoxy(x2 + 1, y2 - 3);
	dzwiek();
	cout << "*";

	Sleep(100);
	gotoxy(x2 + 3, y2 - 3);
	dzwiek();
	cout << "*";

	Sleep(100);
	gotoxy(x2 + 4, y2 - 4);
	dzwiek();
	cout << "*";				// koniec Y
}
///////////////////////////////////////////
void s(int x2, int y2)
{
	int z47;						// góra S
	for (z47 = x2 + 3; z47 >= x2 + 1; z47--)
	{
		Sleep(100);
		gotoxy(z47, y2 - 4);
		dzwiek();
		cout << "*";
	}

	Sleep(100);
	gotoxy(x2, y2 - 3);
	dzwiek();
	cout << "*";

	int z48;						// srodek S
	for (z48 = x2; z48 <= x2 + 3; z48++)
	{
		Sleep(100);
		gotoxy(z48, y2 - 2);
		dzwiek();
		cout << "*";
	}

	Sleep(100);
	gotoxy(x2 + 3, y2 - 1);
	dzwiek();
	cout << "*";

	int z49;						// dol S
	for (z49 = x2 + 2; z49 >= x2; z49--)
	{
		Sleep(100);
		gotoxy(z49, y2);
		dzwiek();
		cout << "*";
	}
}
///////////////////////////////////////////
void i(int x2, int y2)
{
	Sleep(100);
	gotoxy(x2, y2 - 4);
	dzwiek();
	cout << "*";

	int z50;						// i
	for (z50 = y2 - 2; z50 <= y2; z50++)
	{
		Sleep(100);
		gotoxy(x2, z50);
		dzwiek();
		cout << "*";
	}
}
///////////////////////////////////////////
int wygrana(int u1)
{
	switch (u1)
	{
	case 11:
		system("cls");
		cout << "Brawo, zwyciêstwo!";
		_getch();
		exit(0);
	}
}
///////////////////////////////////////////
void znaczniki(int x3, int y3)
{
	gotoxy(x3, y3);
	cout << ".";
}
///////////////////////////////////////////
void kolo_fortuny()
{
	znaczniki(27, 7);
	znaczniki(34, 7);
	znaczniki(41, 7);
	znaczniki(48, 7);
	znaczniki(54, 7);
	znaczniki(28, 14);
	znaczniki(34, 14);
	znaczniki(41, 14);
	znaczniki(47, 14);
	znaczniki(53, 14);
	znaczniki(21, 21);
	znaczniki(30, 21);
	znaczniki(36, 21);
	znaczniki(42, 21);
	znaczniki(48, 21);
	znaczniki(52, 21);
	znaczniki(56, 21);
	int pkt = 0;
	int u = 0;
	string litera;
	for (;;)
	{

		gotoxy(0, 0);
		cout << "Proszê wpisaæ literê i potwierdziæ klawiszem enter" << endl;
		litera = zmiana(litera);

		if (litera == "a")
		{
			u++;
			a(51, 14);
			a(28, 21);
			wygrana(u);
		}
		else
		if (litera == "t")
		{
			u++;
			T(24, 7);
			wygrana(u);
		}
		else
		if (litera == "o")
		{
			u++;
			o(32, 7);
			o(32, 14);
			wygrana(u);
		}
		else
		if (litera == "m")
		{
			u++;
			m(39, 7);
			M(19, 21);
			wygrana(u);
		}
		else
		if (litera == "e")
		{
			u++;
			e(46, 7);
			e(55, 21);
			wygrana(u);
		}
		else
		if (litera == "k")
		{
			u++;
			k(52, 7);
			k(26, 14);
			wygrana(u);
		}
		else
		if (litera == "c")
		{
			u++;
			c(39, 14);
			wygrana(u);
		}
		else
		if (litera == "h")
		{
			u++;
			h(45, 14);
			wygrana(u);
		}
		else
		if (litera == "r")
		{
			r(34, 21);
			wygrana(u);
		}
		else
		if (litera == "y")
		{
			u++;
			y(40, 21);
			wygrana(u);
		}
		else
		if (litera == "s")
		{
			u++;
			s(46, 21);
			wygrana(u);
		}
		else
		if (litera == "i")
		{
			u++;
			i(52, 21);
			wygrana(u);
		}
		else
		{
			pkt++;
			//cout << pkt;
			switch (pkt)
			{
			case 1:
			{
					  gotoxy(10, 10);
					  cout << "()";
					  break;
			}
			case 2:
			{
					  gotoxy(10, 11);
					  cout << "||";
					  break;
			}
			case 3:
			{
					  gotoxy(10, 12);
					  cout << "/";
					  break;
			}
			case 4:
			{
					  gotoxy(11, 12);
					  cout << "\\";
					  break;
			}
			case 5:
			{
					  gotoxy(9, 11);
					  cout << "/";
					  break;
			}
			case 6:
			{
					  gotoxy(12, 11);
					  cout << "\\";
					  break;
			}
			case 7:
			{
					  gotoxy(7, 9);
					  cout << "____";
					  break;
			}
			case 8:
			{
					  gotoxy(7, 10);
					  cout << "|";
					  gotoxy(7, 11);
					  cout << "|";
					  gotoxy(7, 12);
					  cout << "|";
					  break;
			}
			case 9:
			{
					  gotoxy(6, 13);
					  cout << "___";
					  gotoxy(6, 14);
					  cout << "Nie uda³o siê :(";
					  _getch();
					  exit(0);
					  break;

			}
			}
		}

	}
	_getch();
}