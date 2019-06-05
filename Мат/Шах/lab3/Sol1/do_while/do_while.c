// do_while.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include "pch.h"
#include <math.h>
#include <stdio.h>
#include "Header.h"
int main()
{
	int f = 1;	int i = 0;
	do
	{

		++f;
		printf(" 1. task1\n 2. task2\n 3. task3\n 4. task4\n 5. task5\n 6. end\n ");
		switch (_getch())
		{
		case '1':
			system("cls");
			printf("task1:\n");
			double y;
			int n;
			printf("Enter n: ");
			scanf_s("%i", &n);
			y = summ(n);
			printf("%lf", y);
			_getch();
			system("cls");
			continue;
		case '2':
			system("cls");
			printf("task2:\n");
			double eps;
			double yy;
			printf("Enter eps: ");
			scanf_s("%lf", &eps);
			yy = summ2(eps);
			printf("%lf", yy);
			_getch();
			system("cls");
			continue;
		case '3':
			system("cls");
			printf("task3:\n");
			int k;
			printf("Enter n: ");
			scanf_s("%i", &n);
			printf("Enter k: ");
			scanf_s("%i", &k);
			print(n, k);
			_getch();
			system("cls");
			continue;
		case '4':
			system("cls");
			printf("task4:\n");
			int y1;
			printf("Enter eps: ");
			scanf_s("%lf", &eps);
			y1 = findFirstElement(eps);
			printf("%i", y1);
			_getch();
			system("cls");
			continue;
		case '5':
			system("cls");
			printf("task5:\n");
			printf("Enter eps: ");
			scanf_s("%lf", &eps);
			y1 = findFirstNegativeElement(eps);
			printf("%i", y1);
			_getch();
			system("cls");
			continue;
		case '6':
			system("cls");
			printf("end\n");
			f = f - 1;
			break;
		default:
			system("cls");
			printf("error");
			_getch();
			system("cls");
			continue;

		}
		++i;
	} while (i < f-1);
	_getch();
	return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
