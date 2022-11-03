#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int modul(int a);
int comparison(int z, int x);

int main()
{
	bool work = true, _work = true;
	int a = 0, b = 0, c = 0, d = 0;
	float resaut = 0, p = 0;

	cout << "1-9 = 1,2,3,4,5...8,9; ESC-exit" << endl;
	do
	{
		switch (_getch())
		{
		case (49):
			system("cls");
			cout << "GIVE BUTTON" << endl;
			cin >> a;
			cout << modul(a) << endl;
			break;
		case (50):
			system("cls");
			cout << "GIVE TWO BUTTON" << endl;
			cin >> a >> b;
			if (a == b)
				cout << "a=b" << endl;
			else
				cout << "most biggest numbers " << comparison(a, b) << endl;
			break;
		case (51):
			system("cls");
			cout << "GIVE THREE BUTTON" << endl;
			cin >> a >> b >> c;
			if (a == b && b == c && c == a)
				cout << "a=b=c" << endl;
			if (a > b && a > c)
				cout << a << endl;
			if (a < b && b>c)
				cout << b << endl;
			if (c > b && c > a)
				cout << c << endl;

			break;
		case (52):
			system("cls");
			cout << "Give pls two numbers" << endl;
			cin >> a >> b;
			c = modul(a);
			d = modul(b);
			if (c == d)
				cout << "modul numbers same" << endl;
			else
				cout << "modul most biggest numbers " << comparison(c, d) << endl;
			break;
		case (53):
			system("cls");		//очистка консоли
			cout << "When pressing Q we find the area of triangle behind the height " << endl << "Pressed W we find the area pf the triangle behinf the three sides " << endl;
			do
			{
				switch (_getch())
				{
				case(113):
					system("cls");
					cout << "Type hight and foundation" << endl;
					cin >> a >> b;
					if (a <= 0 || b <= 0)
					{
						cout << "ERRRRRRRRROR!" << endl;
						break;

					}
					else
					{
						c = (a * b) / 2;
						cout << "S=" << c << endl;
					}
					break;
				case(119):
					system("cls");
					cout << "Give three side " << endl;
					cin >> a >> b >> c;
					p = (a + b + c) / 2;
					resaut = p * (p - a) * (p - b) * (p - c);
					p = sqrt(resaut);
					cout << "S=" << p << endl;
					break;
				}
			} while (_work);
			break;
		case (54):
			system("cls");
			cout << " {ax-by=0" << endl;
			cout << "{" << endl;
			cout << " {ax+by=c" << endl << "ENTER a b c" << endl;
			cin >> a >> b >> c;
			double x = (c - b * (c / (2 * b))) / a;
			double y = c / (2 * b);
			cout << "y=" << y << "x=" << x << endl;
			break;
		case (55):
			system("cls");
			break;
		case (56):
			system("cls");
			break;
		case (57):
		{
		}

		break;

		}
	} while (work);
	return work;
}

int modul(int a)
{
	int resut = 0;
	if (a < 0)
	{
		resut = a * (-1);
		return resut;
	}
	else
		return a;
}

int comparison(int z, int x)
{
	if (z > x)
		return z;
	else
		return x;
}