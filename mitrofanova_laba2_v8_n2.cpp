#include <iostream>
#include <math.h>


int main()
{
	setlocale(LC_ALL, "Russian");
	int m, y, y1, y2, y3;
	std::cout << "Введите год: \n";
	std::cin >> y;

	std::cout << "Введите порядковый номер месяца: \n";
	std::cin >> m;

	y1 = y % 4;
	//std::cout << "y1 = " << y1 << "\n";
	y2 = y % 100;
	//std::cout << "y2 = " << y2 << "\n";
	y3 = y % 400;
	//std::cout << "y3 = " << y3 << "\n";

	switch (m)
	{
	case 1: case 3: case 5: case 7: case 8: case 10: case 12: std::cout << "В месяце 31 день \n"; break;
	case 4: case 6: case 9: case 11: std::cout << "В  месяце 30 дней \n"; break;
	case 2:
		switch (y1)
		{
		case 0: std::cout << "В месяце 29 дней \n"; break;
			switch (y2)
			{
			case 0: std::cout << "В месяце 29 дней \n"; break;
				switch (y3)
				{
				case 0: std::cout << "В месяце 29 дней \n"; break;
				default: std::cout << "В месяце 28 дней \n"; break;
				}
			default: std::cout << "В месяце 29 дней \n"; break;
			}
		default: std::cout << "В месяце 28 дней \n"; break;
		}
	}
	system("pause");

	return 0;

}