// Trianglesandfigures.cpp: Definiuje punkt wejœcia dla aplikacji konsolowej.
//

#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

//variables
int input;
int triangle_height = 0;
int stars = 1;
int width = 0;
int height = 0;
string back;

//functions
void show_triangle(int n)			//print a triangle built of stars of height defined by user
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < stars; j++)
		{
			cout << "*";
		}
		stars++;
		cout << endl;
	}
	stars = 1;
}

void triangle_reflection(int n)			//print a triangle built of stars of height defined by user (vertical reflection of triangle 1)
{
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < (n - stars); j++)
		{
			cout << " ";
		}
		for(int k = 0; k < stars; k++)
		{
			cout << "*";
		}
		stars++;
		cout << endl;
	}
	stars = 1;
}

void clear()			//clearing the console
{
	system("cls");
}

void show_rectangle(int x, int y)			//print a rectangle built of stars of width and height defined by user
{
	for(int i = 0; i < x; i++)
	{
		cout << " * ";
	}
	for(int j = 0; j < (y - 2); j++)
	{
		cout << endl << " * ";
		for(int k = 0; k < (x - 2); k++)
		{
			cout << "   ";
		}
		cout << " * ";
	}
	cout << endl;
		for(int l = 0; l < x; l++)
	{
		cout << " * ";
	}
}

void show_isosceles_triangle(int n)			//print an isosceles triangle built of stars of height defined by user
{
		for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < ((n + i) - stars); j++)
		{
			cout << " ";
		}
		for(int k = 0; k < stars; k++)
		{
			cout << "*";
		}
		stars += 2;
		cout << endl;
	}
	stars = 1;	
}

//function main
int main()
{
	//Main Menu in function main
	system("cls");
	cout << "WYBIERZ FIGURE\n\n";
	
	cout << "1.\n";
	show_triangle(4);
	
	cout << endl;
	
	cout << "2.\n";
	triangle_reflection(4);
	
	cout << endl;
	
	cout << "3.\n";
	show_rectangle(5, 3);
	
	cout << endl << endl;
	
	cout << "4.\n";
	show_isosceles_triangle(5);
	
	cout << endl << "\nKtora wybierasz? (0 - zamyka aplikacje): ";
	cin >> input;
	
	if(input > 4 || input < 0)
	{main();}

	switch (input)
	{
	case 0:
		exit(0);
		break;
	case 1:
		clear();
		cout << "Wybierz wielkosc trojkata [ilosc wierszy]: \n";
		cin >> triangle_height;
		show_triangle(triangle_height);
		cout << "\nb. Powrot do menu\n";
		cin >> back;
		if(back == "b")
		{
			main();
		}
		break;
	case 2:
		clear();
		cout << "Wybierz wielkosc trojkata [ilosc wierszy]: \n";
		cin >> triangle_height;
		triangle_reflection(triangle_height);
		cout << "\nb. Powrot do menu\n";
		cin >> back;
		if(back == "b")
		{
			main();
		}
		break;
	case 3:
		clear();
		cout << "Podaj wymiary [szerokosc, wysokosc] prostokata: \n";
		cin >> width; cin >> height;
		show_rectangle(width, height);
		cout << "\nb. Powrot do menu\n";
		cin >> back;
		if(back == "b")
		{
			main();
		}
		break;
	case 4:
		clear();
		cout << "Podaj wielkosc trojkata rownoramiennego [ilosc wierszy]: \n";
		cin >> triangle_height;
		show_isosceles_triangle(triangle_height);
		cout << "\nb. Powrot do menu\n";
		cin >> back;
		if(back == "b")
		{
			main();
		}
	}

	system("pause");
    return 0;
}


