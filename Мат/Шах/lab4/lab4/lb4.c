// lb4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <stdio.h>
#include <math.h>
void ff(double *x, double *y, double *result)
{
	*result = pow(cos(*x) - cos(*y), 2.0) - pow(sin(*x) - sin(*y), 2.0);
}
void writeArray(int *arr, int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}
void readArray(int *arr, int n)
{
	int i;

	for (i = 0; i < n; ++i)
		scanf_s("%d", arr + i);
}
void sort(int *arr, int n) //puzirkovaya sortirovka
{
	int i;
	int buff;
	_Bool unsorted;
	do
	{
		unsorted = 0;
		for (i = 0; i < n - 1; ++i)
			if (arr[i] > arr[i + 1])
			{
				unsorted = 1;
				break;
			}
		if (unsorted)
		{
			for (i = 0; i < n - 1; ++i)
				if (arr[i] > arr[i + 1])
				{
					buff = arr[i];
					arr[i] = arr[i + 1];
					arr[i + 1] = buff;
				}
		}
		else
			break;

	} while (unsorted);
}
void sortStackArray(int *arr, int n)
{
	printf("\n");
	printf("\n");
	readArray(arr, n);
	printf("\n");
	printf("%d\n", n);
	writeArray(arr, n);
	sort(arr, n);
	writeArray(arr, n);
}
void main()
{
	double x, y, result;
	int N = 5;
	int mas[5];
	int f = 1;
	for (int i = 0; i < f; ++i)
	{
		++f;
		printf("\n Viberi task nomer (1/5) or 0 to end : ");
		switch (_getch())
		{
		case '1':			
			sortStackArray(mas, N);
			_getch();			
			continue;
		 case '5':
			printf("\n");
			printf("X : ");
			scanf_s("%lf\n", &x);
			printf("Y : ");
			scanf_s("%lf\n", &y);
			ff(&x, &y, &result);
			printf("Function returned %.4lf\n\n", result);
			_getch();
			continue;
		 case '0' :
			printf("end\n");
			f = f - 1;
			break;
		 default:
			_getch();
			system("cls");
			continue;
		}
	}
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
