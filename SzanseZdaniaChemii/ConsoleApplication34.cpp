// ConsoleApplication15.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <string>
#include <windows.h>
#include <cstdlib>
#include <time.h>
#include <stdlib.h>
#include <algorithm>
#include "ConsoleApplication34.h"

using namespace std;

string imie, imie1, nazwisko, nazwisko1;
int liczba, wybor;
int kierunek;


void gotoxy(int x, int y)
{
	COORD c;
	c.X = x;
	c.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
///////////////////////////////////////////
void dzwiek()
{
	Beep(600, 50);
}
///////////////////////////////////////////
void dzwiek2()
{
	Beep(700, 100);
}
///////////////////////////////////////////
struct letter
{
private:

public:
	void letter1(int &g, int x3, int y3, int &gotox, int gotoy)
	{
		for (g = x3; g <= y3; g++)
		{
			Sleep(100);
			gotoxy(gotox, gotoy);
			dzwiek();
			cout << "*";
		}
	}

	void letter2(int &g, int x3, int y3, int gotox, int &gotoy)
	{
		for (g = x3; g <= y3; g++)
		{
			Sleep(100);
			gotoxy(gotox, gotoy);
			dzwiek();
			cout << "*";
		}
	}

	void letter3(int x3, int y3)
	{
		Sleep(100);
		gotoxy(x3, y3);
		dzwiek();;
		cout << "*";
	}

};
///////////////////////////////////////////
int losowanie(int cyfra)
{
	srand(time(NULL));
	return cyfra = rand() % 100 + 1;
}
///////////////////////////////////////////

void letter1(int &g, int x3, int y3, int &gotox, int gotoy)
{
	for (g = x3; g <= y3; g++)
	{
		Sleep(100);
		gotoxy(gotox, gotoy);
		dzwiek();
		cout << "*";
	}
}
///////////////////////////////////////////
void letter2(int &g, int x3, int y3, int gotox, int &gotoy)
{
	for (g = x3; g <= y3; g++)
	{
		Sleep(100);
		gotoxy(gotox, gotoy);
		dzwiek();
		cout << "*";
	}
}
///////////////////////////////////////////
void letter3(int x3, int y3)
{
	Sleep(100);
	gotoxy(x3, y3);
	dzwiek();;
	cout << "*";
}
///////////////////////////////////////////
void T(int x2, int y2)
{
	int z1=0;						

	letter1(z1, x2, x2 + 6, z1, y2 - 5);	// daszek T

	letter2(z1, y2-4, y2, x2+3, z1);		// laseczka T
}
///////////////////////////////////////////
void o(int x2, int y2)
{
	int z1 = 0;

	letter2(z1, y2-3, y2-1, x2, z1);

	letter1(z1, x2+1, x2+3, z1, y2);

	letter2(z1, y2 - 3, y2-1, x2+4, z1);

	letter1(z1, x2 + 1, x2 + 3, z1, y2-4);
}
///////////////////////////////////////////
void m(int x2, int y2)
{
	int z1;

	letter2(z1, y2-4, y2, x2, z1);

	letter3(x2 + 1, y2 - 3);

	letter3(x2 + 2, y2 - 2);

	letter3(x2 + 3, y2 - 3);

	letter2(z1, y2 - 4, y2, x2+4, z1);
}
///////////////////////////////////////////
void e(int x2, int y2)
{
	int z1;

	letter1(z1, x2+1, x2 + 3, z1, y2 - 2);		// srodek e

	letter2(z1, y2-4, y2-3, x2 + 3, z1);		// prawe e

	letter1(z1, x2 , x2+2, z1, y2 - 4);			// góra e

	letter2(z1, y2 - 3, y2, x2, z1);			// lewe e

	letter1(z1, x2+1, x2 + 3, z1, y2 );			// dó³ e
}
///////////////////////////////////////////
void k(int x2, int y2)
{
	int z1;

	letter2(z1, y2 - 4, y2, x2, z1);	// laseczka K

	letter3(x2 + 1, y2 - 2);

	letter3(x2 + 2, y2 - 3);

	letter3(x2 + 3, y2 - 4);

	letter3(x2 + 2, y2 - 1);

	letter3(x2 + 3, y2);
}
///////////////////////////////////////////
void K(int x2, int y2)
{
	int z1;

	letter2(z1, y2 - 4, y2, x2, z1);	// laseczka K

	letter3(x2 + 1, y2 - 2);

	letter3(x2 + 2, y2 - 3);

	letter3(x2 + 3, y2 - 4);

	letter3(x2 + 2, y2 - 1);

	letter3(x2 + 3, y2);
}
///////////////////////////////////////////
//void c(int x2, int y2)
//{
//	int z1;
//
//	letter2(z1, y2 - 3, y2 - 1, x2, z1);
//
//	letter1(z1, x2 + 1, x2 + 3, z1, y2);
//
//	letter1(z1, x2 + 1, x2 + 3, z1, y2 - 4);
//	
//}
///////////////////////////////////////////
void h(int x2, int y2)
{
	int z1;					

	letter2(z1, y2-4, y2, x2, z1);	// lewe H

	letter1(z1, x2 + 1, x2 + 3, z1, y2-2);	// srodek H

	letter2(z1, y2 - 4, y2, x2+3, z1);	// prawe H
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
void text(int x3,int y3,string txt)
{
	gotoxy(x3, y3);
	cout << txt<<"\n";
}
///////////////////////////////////////////
void menu_glowne()
{
	
	text(25, 6, "MENU GLOWNE");
	
	text(25, 7, "----------");
	
	text(10, 8, "1. Program oblicza szansê na zdanie egzaminu z biochemii");

	text(10, 9, "2. Program oblicza jednoœæ dusz");

	text(10, 10, "3. Autorzy");

	text(10, 11, "4. Szubienica");

	text(10, 12, "5. Wyjscie");

	cin >> wybor;
	system("cls");
}
///////////////////////////////////////////
void polskie_litery()
{
	locale locpl("Polish_Poland");	//tworzy obiekt z lokalizacja
	locale::global(locpl);			//lokalizacja globalnie
	cout.imbue(locpl);				// lokalizacja strumienia cout
	cin.imbue(locpl);				// lokalizacja strumienia cin
}
///////////////////////////////////////////
void autor()
{
	cout << "Autorzy programu:\n";
	cout << "1. Tomasz Wójcik";
	_getch();
	system("cls");
}
///////////////////////////////////////////
string zmiana(string nazwa)
{
	cin >> nazwa;
	transform(nazwa.begin(), nazwa.end(), nazwa.begin(), ::tolower);
	return nazwa;
}
///////////////////////////////////////////
void wyjscie()
{
	exit(0);
}
///////////////////////////////////////////
void egzamin(string imie, string nazwisko)
{

	cout << "Program liczy szansê na zaliczenie egzaminu z biochemii";
	cout << "\nna podstawie danych u¿ytkownika i zaawansowanych algorytmów matematycznych.\n";
	cout << "\nProszê podaæ swoje imie: ";
	imie = zmiana(imie);
	cout << "\nProszê podaæ swoje nazwisko: ";
	nazwisko = zmiana(nazwisko);
	if
		((imie == "marysia"
		|| imie == "mary"
		|| imie == "maria"
		|| imie == "m")
		&&
		(nazwisko == "harasimiuk"
		|| nazwisko == "h"
		|| nazwisko == "h."))
	{
		cout << "\nTwoje szanse na zdanie wynosza: \n100%";
	}

	else
	{
		cout << "\nTwoje szanse na zdanie wynosza: \n" << losowanie(liczba) << "%";
	}
	_getch();
	system("cls");
}
///////////////////////////////////////////
void jednosc_dusz(string imie, string imie1, string nazwisko, string nazwisko1)
{

	cout << "Program oblicza jednoœæ dusz\n";
	cout << "\nna podstawie danych u¿ytkownika i zaawansowanych algorytmów matematycznych.\n";
	cout << "\nProszê podaæ imie pierwszej osoby: ";
	imie = zmiana(imie);
	cout << "\nProszê podaæ nazwisko pierwszej osoby: ";
	nazwisko = zmiana(nazwisko);
	cout << "\nProszê podaæ imie drugiej osoby: ";
	imie1 = zmiana(imie1);
	cout << "\nProszê podaæ nazwisko drugiej osoby: ";
	nazwisko1 = zmiana(nazwisko1);
	if
		(((imie == "marysia"
		|| imie == "mary"
		|| imie == "maria"
		|| imie == "m")
		&&
		(nazwisko == "harasimiuk"
		|| nazwisko == "h"
		|| nazwisko == "h.")
		&&
		(imie1 == "tomek"
		|| imie1 == "tomasz"
		|| imie1 == "t"
		|| imie1 == "t.")
		&&
		(nazwisko1 == "wojcik"
		|| nazwisko1 == "w\242jcik"
		|| nazwisko1 == "w"
		|| nazwisko1 == "w."))
		||
		(((imie1 == "marysia"
		|| imie1 == "mary"
		|| imie1 == "maria"
		|| imie1 == "m")
		&&
		(nazwisko1 == "harasimiuk"
		|| nazwisko1 == "h"
		|| nazwisko1 == "h.")
		&&
		(imie == "tomek"
		|| imie == "tomasz"
		|| imie == "t"
		|| imie == "t.")
		&&
		(nazwisko == "wojcik"
		|| nazwisko == "w"
		|| nazwisko == "w\242jcik"
		|| nazwisko == "w."))))
	{
		cout << "\njednoœæ dusz wynosi: \n100%";
	}
	else if
		(imie == "aps"
		|| imie == "apsik"
		|| imie1 == "apsik"
		|| imie1 == "aps"
		|| nazwisko1 == "apsik"
		|| nazwisko1 == "aps"
		|| nazwisko == "apsik"
		|| nazwisko == "aps")
	{
		cout << "\njednoœæ dusz wynosi: \n" << liczba << "%";
		cout << "\nAps jest bezduszn¹ besti¹\n";
	}
	else
	{
		cout << "\njednoœæ dusz wynosi: \n" << losowanie(liczba) << "%";
	}
	_getch();
	system("cls");
}
///////////////////////////////////////////
int wygrana(int u1)
{
	if (u1==11)
	{
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
	int z1;
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
			wygrana(u);
			
			letter *c = new letter;
			c->letter2(z1, 14 - 3, 14 - 1, 39, z1);
			c->letter1(z1, 39 + 1, 39 + 3, z1, 14);
			c->letter1(z1, 39 + 1, 39 + 3, z1, 14-4);
			delete c;

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
///////////////////////////////////////////
int opcja(int opcja)
{
	switch (opcja)
	{

	case 1:
	{
			  dzwiek2();
			  egzamin(imie, nazwisko);
	}
		break;

	case 2:
	{
			  dzwiek2();
			  jednosc_dusz(imie, imie1, nazwisko, nazwisko1);
	}
		break;

	case 3:
	{
			  dzwiek2();
			  autor();
	}
		break;

	case 4:
	{
			  dzwiek2();
			  kolo_fortuny();
	}
		break;

	case 5:
	{
			  dzwiek2();
			  wyjscie();

	}
		break;

	}
	return opcja;
}

///////////////////////////////////////////
int _tmain(int argc, _TCHAR* argv[])
{

	for (;;)
	{
		polskie_litery();
		menu_glowne();
		opcja(wybor);
	}
	return 0;
}

