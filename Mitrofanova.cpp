﻿// ConsoleApplication222.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>


int main()
{
	setlocale(LC_ALL, "Russian");
	float x1, y1, x2, y2, x3, y3, a1, a2, a3, b1, b2, b3, c1, c2, c3, s1, s2, s3;

	std::cout << "Введите : x1 \n";
	std::cin >> x1;

	std::cout << "Введите : y1 \n";
	std::cin >> y1;

	std::cout << "Введите : x2 \n";
	std::cin >> x2;

	std::cout << "Введите : y2 \n";
	std::cin >> y2;

	std::cout << "Введите : x3 \n";
	std::cin >> x3;

	std::cout << "Введите : y3 \n";
	std::cin >> y3;

	if
		(
		((x1 != x2) || (x2 != x3) || (x1 != x3)) && ((y1 != y2) || (y2 != y3) || (y1 != y3))
		)
			
	{
		a1 = pow((x2 - x1), 2) + pow((y2 - y1), 2);
		a2 = pow((x3 - x2), 2) + pow((y3 - y2), 2);
		a3 = pow((x1 - x3), 2) + pow((y1 - y3), 2);
		b1 = pow((x3 - x2), 2) + pow((y3 - y2), 2);
		b2 = pow((x1 - x3), 2) + pow((y1 - y3), 2);
		b3 = pow((x2 - x1), 2) + pow((y2 - y1), 2);
		c1 = pow((x3 - x1), 2) + pow((y3 - y1), 2);
		c2 = pow((x1 - x2), 2) + pow((y1 - y2), 2);
		c3 = pow((x2 - x3), 2) + pow((y2 - y3), 2);

		s1 = a1 + b1;
		s2 = a2 + b2;
		s3 = a3 + b3;

		if ( c1 == s1 || c2 == s2 || c3 == s3 )
		{
			std::cout << "Координаты трёх введённых вами точек могут являться вершинами прямоугольника";
		}
		else
			std::cout << "Координаты трёх введённых вами точек НЕ могут являться вершинами прямоугольника";

	}
	else
		std::cout << "Координаты трёх введённых вами точек НЕ могут являться вершинами прямоугольника";


	return 0;

}