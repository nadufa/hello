#include <iostream>

int main()
{

	setlocale(LC_ALL, "Russian");
	double x;
	int n, y, t, z, m;
	std::cout << "Введите натуральное число: ";
	std::cin >> x;

	y = x;
	m = x;
	n = 1;

	//std::cout << "x = " << y << "\n";

	while (x >= 10)
	{
		x = x / 10;
		n = n + 1;
	}
	//std::cout << "n = " << n << "\n";
	//std::cout << "y = " << y << "\n";
	z = 0;

	while (y > 0)
	{
		t = y % 10; //последняя цифра
		y = (y - t) / 10; //число без последней цифры
		z = z * 10;
		z = z + t;
	}

	//std::cout << "z = " << z << "\n";
	if (m == z)
	{
		std::cout << "Заданное натуральное число является симметричным\n";
	}
	else std::cout << "Заданное натуральное число НЕ является симметричным\n";

	system("pause");
	return 0;

}