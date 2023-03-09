#include <iostream>
#include "rational.h"

using namespace std;

int main()
{	
	setlocale(LC_ALL, "Russian");

	int size;
	cout << "Введите количество дробей -> "; cin >> size;
	cout << "\n";
	rational* arr = new rational[size];
	int a, b;

	cout << "Введите числа через пробел\n";
	for (int i = 0; i < size; i++)
	{
		cout << "Введите числитель и знаменатель дроби " << i + 1 << " : "; cin >> a >> b;
		(arr[i]).set(a, b);
	}
	cout << "\n";
	for (int i = 0; i < size; i++)
	{
		cout << "\n Дробь номер " << i + 1 << " : ";
		(arr[i]).show();
	}
	cout << "\n";

	int i1, i2;

	cout << "\nУкажите две дроби, которые хотите сложить: "; cin >> i1 >> i2; i1 = i1 - 1; i2 = i2 - 1;
	cout << "\n"; (arr[i1]).show(); cout << " + "; (arr[i2]).show(); cout << " = ";
	((arr[i1]) + (arr[i2])).show();
	cout << "\n";

	cout << "\n Укажите две дроби одну из которых вы хотите вычесть из другой: "; cin >> i1 >> i2; i1 = i1 - 1; i2 = i2 - 1;
	cout << "\n"; (arr[i1]).show(); cout << " - "; (arr[i2]).show(); cout << " = ";
	((arr[i1]) - (arr[i2])).show();
	cout << "\n";

	cout << "\nУкажите дробь к числителю которой вы хотите прибавить единицу: "; cin >> i1; i1 = i1 - 1;
	cout << "\n"; (arr[i1]).show(); cout << "++";cout << " = ";
	rational xr = arr[i1];
	(++xr).show();
	cout << "\n";

	cout << "\n Укажите две дроби которые вы хотите проверить на равенство: "; cin >> i1 >> i2; i1 = i1 - 1; i2 = i2 - 1;
	cout << "\n"; (arr[i1]).show(); cout << " == "; (arr[i2]).show();
	if (arr[i1] == arr[i2]) cout << "\nÄðîáè ðàâíû";
	else cout << "\nÄðîáè íå ðàâíû";
	cout << "\n";

	cout << "\nукажите две дроби которые вы хотите сравнить: "; cin >> i1 >> i2; i1 = i1 - 1; i2 = i2 - 1;
	cout << "\n"; (arr[i1]).show(); cout << " > "; (arr[i2]).show();
	if (arr[i1] > arr[i2]) cout << "\n Первая дробь больше";
	else cout << "\n Вторая дробь больше";
	cout << "\n";

	delete[] arr;

	return 0;
}
