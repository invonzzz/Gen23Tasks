#include <stdio.h>
#include <locale.h>
#include "Header.h"
void DataEntry(int &BeginNumber, int &EndNumber, int &ChoiceActCount, int &ChoiceAction1, int &Int1, int &ChoiceAction2, int &Int2, int &ChoiceAction3, int &Int3, int &AvCheck, int& AvNumb1, int& AvNumb2, int&  AvNumb3, int& ReqCheck, int& ReqNumb1, int& ReqNumb2, int& ReqNumb3)
{
	int help;
	do
	{
		do
		{
			printf("Введите начальное число: "); scanf_s("%d", &BeginNumber);
			if (BeginNumber <= 0) printf("Ошибка! Начальное число должно быть натуральным\n");
		} while (BeginNumber <= 0);
		do
		{
			printf("Введите конечно число: "); scanf_s("%d", &EndNumber);
			if (EndNumber <= 0) printf("Ошибка! Конечное число должно быть натуральным\n");
		} while (EndNumber <= 0);
		if (EndNumber <= BeginNumber) printf("Ошибка! Конечное число меньше или равно начальному. Попробуйте еще раз.\n");
	} while (BeginNumber >= EndNumber);
	do
	{
		printf("Выберите количество действий (2 или 3): "); scanf_s("%d", &ChoiceActCount);
		if ((ChoiceActCount != 2) && (ChoiceActCount != 3)) printf("Ошибка! Количество действий может быть равно 2 или 3.\n");
	} while ((ChoiceActCount < 2) || (ChoiceActCount > 3));
	do
	{
		printf("Выберите первое действие (1 - прибавить, 2 - умножить): "); scanf_s("%d", &ChoiceAction1);
		if ((ChoiceAction1 != 1) && (ChoiceAction1 != 2)) printf("Ошибка! Доступны только два значения для ввода: 1 и 2.\n");
	} while ((ChoiceAction1 < 1) || (ChoiceAction1 > 2));
	if (ChoiceAction1 == 2)
	{
		do
		{
			printf("Введите цифру для первого действия: "); scanf_s("%d", &Int1);
			if (Int1 <= 1) printf("Ошибка! Умножение на это число не приведёт к конечному результату. Введите другое число\n");
		} while (Int1 <= 1);
	}
	else
	{
		do
		{
			printf("Введите цифру для первого действия: "); scanf_s("%d", &Int1);
			if (Int1 <= 0) printf("Ошибка! Прибавлять или умножать можно только натуральные числа для достижения конечного числа.\n");
		} while (Int1 <= 0);
	}
	do
	{
		printf("Выберите второе действие (1 - прибавить, 2 - умножить): "); scanf_s("%d", &ChoiceAction2);
		if ((ChoiceAction2 != 1) && (ChoiceAction2 != 2)) printf("Ошибка! Доступны только два значения для ввода: 1 и 2.\n");
	} while ((ChoiceAction2 < 1) || (ChoiceAction2 > 2));
	if (ChoiceAction2 == 2)
	{
		do
		{
			printf("Введите цифру для второго действия: "); scanf_s("%d", &Int2);
			if (Int2 <= 1) printf("Ошибка! Умножение на это число не приведёт к конечному результату. Введите другое число\n");
		} while (Int2 <= 1);
	}
	else
	{
		do
		{
			printf("Введите цифру для второго действия: "); scanf_s("%d", &Int2);
			if (Int2 <= 0) printf("Ошибка! Прибавлять или умножать можно только натуральные числа для достижения конечного числа.\n");
		} while (Int2 <= 0);
	}
	if (ChoiceActCount == 3)
	{
		do
		{
			printf("Выберите третье действие (1 - прибавить, 2 - умножить): "); scanf_s("%d", &ChoiceAction3);
			if ((ChoiceAction3 != 1) && (ChoiceAction3 != 2)) printf("Ошибка! Доступны только два значения для ввода: 1 и 2.\n");
		} while ((ChoiceAction3 < 1) || (ChoiceAction3 > 2));
		if (ChoiceAction3 == 2)
		{
			do
			{
				printf("Введите цифру для третьего действия: "); scanf_s("%d", &Int3);
				if (Int3 <= 1) printf("Ошибка! Умножение на это число не приведёт к конечному результату. Введите другое число\n");
			} while (Int3 <= 1);
		}
		else
		{
			do
			{
				printf("Введите цифру для третьего действия: "); scanf_s("%d", &Int3);
				if (Int3 <= 0) printf("Ошибка! Прибавлять или умножать можно только натуральные числа для достижения конечного числа.\n");
			} while (Int3 <= 0);
		}
	}
	do
	{
		printf("Сколько обязательных чисел будет содержать ваша программа? (0 - 3) - "); scanf_s("%d", &ReqCheck);
		if ((ReqCheck < 0) || (ReqCheck > 3)) printf("Ошибка! Обязательных чисел может быть 0, 1, 2 или 3.\n");
	} while ((ReqCheck < 0) || (ReqCheck > 3));
	if (ReqCheck != 0) printf("Вводите обязательные числа, через которые должна пройти траектория программы: ");
	switch (ReqCheck)
	{
	case 1: 
	{
		do
		{
			scanf_s("%d", &ReqNumb1);
			if ((ReqNumb1 < BeginNumber) || (ReqNumb1 > EndNumber)) printf("Обязательное прохождение этого числа невозможно, так как оно не попадает в траекторию работы программы. Введите число, больше %d, но меньше %d\n", BeginNumber, EndNumber);
		} while ((ReqNumb1 < BeginNumber) || (ReqNumb1 > EndNumber));
	}break;
	case 2: 
	{
		do
		{
			scanf_s("%d", &ReqNumb1);
			if ((ReqNumb1 < BeginNumber) || (ReqNumb1 > EndNumber)) printf("Обязательное прохождение этого числа невозможно, так как оно не попадает в траекторию работы программы. Введите число, больше %d, но меньше %d\n", BeginNumber, EndNumber);
		} while ((ReqNumb1 < BeginNumber) || (ReqNumb1 > EndNumber));
		do
		{
			scanf_s("%d", &ReqNumb2);
			if ((ReqNumb2 < BeginNumber) || (ReqNumb2 > EndNumber)) printf("Обязательное прохождение этого числа невозможно, так как оно не попадает в траекторию работы программы. Введите число, больше %d, но меньше %d\n", BeginNumber, EndNumber);
		} while ((ReqNumb2 < BeginNumber) || (ReqNumb2 > EndNumber));
		if (ReqNumb1 > ReqNumb2)
		{
			help = ReqNumb1; ReqNumb1 = ReqNumb2; ReqNumb2 = help;
		}
	}break;
	case 3: 
	{
		do
		{
			scanf_s("%d", &ReqNumb1);
			if ((ReqNumb1 < BeginNumber) || (ReqNumb1 > EndNumber)) printf("Обязательное прохождение этого числа невозможно, так как оно не попадает в траекторию работы программы. Введите число, больше %d, но меньше %d\n", BeginNumber, EndNumber);
		} while ((ReqNumb1 < BeginNumber) || (ReqNumb1 > EndNumber));
		do
		{
			scanf_s("%d", &ReqNumb2);
			if ((ReqNumb2 < BeginNumber) || (ReqNumb2 > EndNumber)) printf("Обязательное прохождение этого числа невозможно, так как оно не попадает в траекторию работы программы. Введите число, больше %d, но меньше %d\n", BeginNumber, EndNumber);
		} while ((ReqNumb2 < BeginNumber) || (ReqNumb2 > EndNumber));
		do
		{
			scanf_s("%d", &ReqNumb3);
			if ((ReqNumb3 < BeginNumber) || (ReqNumb3 > EndNumber)) printf("Обязательное прохождение этого числа невозможно, так как оно не попадает в траекторию работы программы. Введите число, больше %d, но меньше %d\n", BeginNumber, EndNumber);
		} while ((ReqNumb3 < BeginNumber) || (ReqNumb3 > EndNumber));
		sort3(ReqNumb1, ReqNumb2, ReqNumb3);
	}
	default:; break;
	}
	do
	{
		printf("Сколько избегаемых чисел будет содержать ваша программа? (0 - 3) - "); scanf_s("%d", &AvCheck);
		if ((AvCheck < 0) || (AvCheck > 3)) printf("Ошибка! Обязательных чисел может быть 0, 1, 2 или 3.\n");
	} while ((AvCheck < 0) || (AvCheck > 3));
	if (AvCheck == 0);
	else printf("Вводите избегаемые числа, через которые программа не может проходить на своей траектории: ");
	switch (AvCheck)
	{
	case 3: scanf_s("%d", &AvNumb1);
	case 2: scanf_s("%d", &AvNumb2); 
	case 1: scanf_s("%d", &AvNumb3); 
	default:; break;
	}
}
void DoubleDataOutput(int& BeginNumber, int& EndNumber, int& ChoiceAction1, int& Int1, int& ChoiceAction2, int& Int2, int &AvCheck, int &AvNumb1, int &AvNumb2, int &AvNumb3, int& ReqCheck, int& ReqNumb1, int& ReqNumb2, int& ReqNumb3)
{
	printf("У исполнителя две команды, которым присвоены номера:\n");
	if (ChoiceAction1 == 1) printf("1. Прибавь %d\n", Int1);
	else printf("1. Умножь на %d\n", Int1);
	if (ChoiceAction2 == 1) printf("2. Прибавь %d\n", Int2);
	else printf("2. Умножь на %d\n", Int2);
	if (ChoiceAction1 == 1 && ChoiceAction2 == 1) printf("Первая из них увеличивает число на экране на %d, вторая - увеличивает его на %d.\n", Int1, Int2);
	if (ChoiceAction1 == 1 && ChoiceAction2 == 2) printf("Первая из них увеличивает число на экране на %d, вторая - увеличивает его в %d раз(раза).\n", Int1, Int2);
	if (ChoiceAction1 == 2 && ChoiceAction2 == 1) printf("Первая из них увеличивает число на экране в %d раз(раза), вторая - увеличивает его на %d.\n", Int1, Int2);
	if (ChoiceAction1 == 2 && ChoiceAction2 == 2) printf("Первая из них увеличивает число на экране в %d раз(раза), вторая - увеличивает его в %d раз(раза).\n", Int1, Int2);
	printf("Программа для исполнителя - это последовательность команд.\n");
	switch (ReqCheck)
	{
	case 1: printf("Сколько существует программ, которые число %d преобразуют в %d, и при этом траектория вычислений содержит число %d\n", BeginNumber, EndNumber, ReqNumb1); break;
	case 2: printf("Сколько существует программ, которые число %d преобразуют в %d, и при этом траектория вычислений содержит числа %d и %d\n", BeginNumber, EndNumber, ReqNumb1, ReqNumb2); break;
	case 3: printf("Сколько существует программ, которые число %d преобразуют в %d, и при этом траектория вычислений содержит числа %d, %d и %d\n", BeginNumber, EndNumber, ReqNumb1, ReqNumb2, ReqNumb3); break;
	default: printf("Сколько существует программ, которые число %d преобразуют в %d?\n", BeginNumber, EndNumber);
	}
	switch (AvCheck)
	{
	case 1: 
	{
		if (ReqCheck == 0) printf("И при этом траектория вычислений не содержит числа %d?\n", AvNumb3);
		else printf("и не содержит число %d?\n", AvNumb3);
	}break;
	case 2: 
	{
		if (ReqCheck == 0) printf("И при этом траектория вычислений не содержит чисел %d и %d?\n", AvNumb2, AvNumb3);
		else printf("и не содержит чисел %d и %d?\n", AvNumb2, AvNumb3); 
	}break;
	case 3: 
	{
		if (ReqCheck == 0) printf("И при этом траектория вычислений не содержит чисел %d, %d и %d?\n", AvNumb1, AvNumb2, AvNumb3);
		else printf("и не содержит чисел %d, %d и %d?\n", AvNumb1, AvNumb2, AvNumb3);
	}break;
	default:;
	}
	if (ReqCheck == 0)
	{
		if (Counter2(BeginNumber, EndNumber, ChoiceAction1, ChoiceAction2, Int1, Int2, AvNumb1, AvNumb2, AvNumb3) == 0) printf("У данной задачи отсутствует решение\n\n");
		else printf("Ответ: %d\n\n", Counter2(BeginNumber, EndNumber, ChoiceAction1, ChoiceAction2, Int1, Int2, AvNumb1, AvNumb2, AvNumb3));
	}
	if (ReqCheck == 1)
	{
		if (Counter2(BeginNumber, ReqNumb1, ChoiceAction1, ChoiceAction2, Int1, Int2, AvNumb1, AvNumb2, AvNumb3) * Counter2(ReqNumb1, EndNumber, ChoiceAction1, ChoiceAction2, Int1, Int2, AvNumb1, AvNumb2, AvNumb3) == 0) printf("У данной задачи отсутствует решение\n\n");
		else printf("Ответ: %d\n\n", Counter2(BeginNumber, ReqNumb1, ChoiceAction1, ChoiceAction2, Int1, Int2, AvNumb1, AvNumb2, AvNumb3) * Counter2(ReqNumb1, EndNumber, ChoiceAction1, ChoiceAction2, Int1, Int2, AvNumb1, AvNumb2, AvNumb3));
	}
	if (ReqCheck == 2)
	{	
		if (Counter2(BeginNumber, ReqNumb1, ChoiceAction1, ChoiceAction2, Int1, Int2, AvNumb1, AvNumb2, AvNumb3) * Counter2(ReqNumb1, ReqNumb2, ChoiceAction1, ChoiceAction2, Int1, Int2, AvNumb1, AvNumb2, AvNumb3) * Counter2(ReqNumb2, EndNumber, ChoiceAction1, ChoiceAction2, Int1, Int2, AvNumb1, AvNumb2, AvNumb3) == 0) printf("У данной задачи отсутствует решение\n\n");
		else printf("Ответ: %d\n\n", Counter2(BeginNumber, ReqNumb1, ChoiceAction1, ChoiceAction2, Int1, Int2, AvNumb1, AvNumb2, AvNumb3) * Counter2(ReqNumb1, ReqNumb2, ChoiceAction1, ChoiceAction2, Int1, Int2, AvNumb1, AvNumb2, AvNumb3) * Counter2(ReqNumb2, EndNumber, ChoiceAction1, ChoiceAction2, Int1, Int2, AvNumb1, AvNumb2, AvNumb3));
	}
	if (ReqCheck == 3)
	{
		if (Counter2(BeginNumber, ReqNumb1, ChoiceAction1, ChoiceAction2, Int1, Int2, AvNumb1, AvNumb2, AvNumb3) * Counter2(ReqNumb1, ReqNumb2, ChoiceAction1, ChoiceAction2, Int1, Int2, AvNumb1, AvNumb2, AvNumb3) * Counter2(ReqNumb2, ReqNumb3, ChoiceAction1, ChoiceAction2, Int1, Int2, AvNumb1, AvNumb2, AvNumb3) * Counter2(ReqNumb3, EndNumber, ChoiceAction1, ChoiceAction2, Int1, Int2, AvNumb1, AvNumb2, AvNumb3) == 0) printf("У данной задачи отсутствует решение\n\n");
		else printf("Ответ: %d\n\n", Counter2(BeginNumber, ReqNumb1, ChoiceAction1, ChoiceAction2, Int1, Int2, AvNumb1, AvNumb2, AvNumb3) * Counter2(ReqNumb1, ReqNumb2, ChoiceAction1, ChoiceAction2, Int1, Int2, AvNumb1, AvNumb2, AvNumb3) * Counter2(ReqNumb2, ReqNumb3, ChoiceAction1, ChoiceAction2, Int1, Int2, AvNumb1, AvNumb2, AvNumb3) * Counter2(ReqNumb3, EndNumber, ChoiceAction1, ChoiceAction2, Int1, Int2, AvNumb1, AvNumb2, AvNumb3));
	}

}
void sort3(int& a, int& b, int& c)
{
	int t;
	if (a > b)
	{
		t = a;
		a = b;
		b = t;
	}
	if (a > c)
	{
		t = a;
		a = c;
		c = t;
	}
	if (b > c)
	{
		t = b;
		b = c;
		c = t;
	}
}
int Counter2(int BeginNumber, int EndNumber, int ChoiceAction1, int ChoiceAction2, int Int1, int Int2, int& AvNumb1, int& AvNumb2, int& AvNumb3)
{
	if (BeginNumber == EndNumber) return 1;
	if ((BeginNumber > EndNumber) || (BeginNumber == AvNumb1) || (BeginNumber == AvNumb2) || (BeginNumber == AvNumb3)) return 0;
	if (BeginNumber < EndNumber)
	{
		if ((ChoiceAction1 == 1) && (ChoiceAction2 == 1)) return Counter2(BeginNumber + Int1, EndNumber, ChoiceAction1, ChoiceAction2, Int1, Int2, AvNumb1, AvNumb2, AvNumb3) + Counter2(BeginNumber + Int2, EndNumber, ChoiceAction1, ChoiceAction2, Int1, Int2, AvNumb1, AvNumb2, AvNumb3);
		if ((ChoiceAction1 == 1) && (ChoiceAction2 == 2)) return Counter2(BeginNumber + Int1, EndNumber, ChoiceAction1, ChoiceAction2, Int1, Int2, AvNumb1, AvNumb2, AvNumb3) + Counter2(BeginNumber * Int2, EndNumber, ChoiceAction1, ChoiceAction2, Int1, Int2, AvNumb1, AvNumb2, AvNumb3);
		if ((ChoiceAction1 == 2) && (ChoiceAction2 == 1)) return Counter2(BeginNumber * Int1, EndNumber, ChoiceAction1, ChoiceAction2, Int1, Int2, AvNumb1, AvNumb2, AvNumb3) + Counter2(BeginNumber + Int2, EndNumber, ChoiceAction1, ChoiceAction2, Int1, Int2, AvNumb1, AvNumb2, AvNumb3);
		if ((ChoiceAction1 == 2) && (ChoiceAction2 == 2)) return Counter2(BeginNumber * Int1, EndNumber, ChoiceAction1, ChoiceAction2, Int1, Int2, AvNumb1, AvNumb2, AvNumb3) + Counter2(BeginNumber * Int2, EndNumber, ChoiceAction1, ChoiceAction2, Int1, Int2, AvNumb1, AvNumb2, AvNumb3);
	}
}
void TripleDataOutput(int& BeginNumber, int& EndNumber, int& ChoiceAction1, int& Int1, int& ChoiceAction2, int& Int2, int& ChoiceAction3, int& Int3, int& AvCheck, int& AvNumb1, int& AvNumb2, int& AvNumb3, int& ReqCheck, int& ReqNumb1, int& ReqNumb2, int& ReqNumb3)
{
	printf("У исполнителя три команды, которым присвоены номера:\n");
	if (ChoiceAction1 == 1) printf("1. Прибавь %d\n", Int1);
	else printf("1. Умножь на %d\n", Int1);
	if (ChoiceAction2 == 1) printf("2. Прибавь %d\n", Int2);
	else printf("2. Умножь на %d\n", Int2);
	if (ChoiceAction3 == 1) printf("3. Прибавь %d\n", Int3);
	else printf("3. Умножь на %d\n", Int3);
	if (ChoiceAction1 == 1 && ChoiceAction2 == 1 && ChoiceAction3 == 1) printf("Первая из них увеличивает число на экране на %d, вторая - увеличивает его на %d, третья увеличивает его на %d\n", Int1, Int2, Int3);
	if (ChoiceAction1 == 1 && ChoiceAction2 == 2 && ChoiceAction3 == 1) printf("Первая из них увеличивает число на экране на %d, вторая - увеличивает его в %d раз(раза), третья увеличивает его на %d\n", Int1, Int2, Int3);
	if (ChoiceAction1 == 1 && ChoiceAction2 == 1 && ChoiceAction3 == 2) printf("Первая из них увеличивает число на экране на %d, вторая - увеличивает его на %d, третья увеличивает его в %d раз(раза)\n", Int1, Int2, Int3);
	if (ChoiceAction1 == 1 && ChoiceAction2 == 2 && ChoiceAction3 == 2) printf("Первая из них увеличивает число на экране на %d, вторая - увеличивает его в %d раз(раза), третья увеличивает его в %d раз(раз)\n", Int1, Int2, Int3);
	if (ChoiceAction1 == 2 && ChoiceAction2 == 1 && ChoiceAction3 == 1) printf("Первая из них увеличивает число на экране в %d раз(раза), вторая - увеличивает его на %d, третья увеличивает его на %d\n", Int1, Int2, Int3);
	if (ChoiceAction1 == 2 && ChoiceAction2 == 2 && ChoiceAction3 == 1) printf("Первая из них увеличивает число на экране в %d раз(раза), вторая - увеличивает его в %d раз(раза), третья увеличивает его на %d\n", Int1, Int2, Int3);
	if (ChoiceAction1 == 2 && ChoiceAction2 == 1 && ChoiceAction3 == 2) printf("Первая из них увеличивает число на экране в %d раз(раза), вторая - увеличивает его на %d, третья увеличивает его в %d раз(раза)\n", Int1, Int2, Int3);
	if (ChoiceAction1 == 2 && ChoiceAction2 == 2 && ChoiceAction3 == 2) printf("Первая из них увеличивает число на экране в %d раз(раза), вторая - увеличивает его в %d раз(раза), третья увеличивает его в %d раз(раза)\n", Int1, Int2, Int3);
	printf("Программа для исполнителя - это последовательность команд.\n");
	switch (ReqCheck)
	{
	case 1: printf("Сколько существует программ, которые число %d преобразуют в %d, и при этом траектория вычислений содержит число %d\n", BeginNumber, EndNumber, ReqNumb1); break;
	case 2: printf("Сколько существует программ, которые число %d преобразуют в %d, и при этом траектория вычислений содержит числа %d и %d\n", BeginNumber, EndNumber, ReqNumb1, ReqNumb2); break;
	case 3: printf("Сколько существует программ, которые число %d преобразуют в %d, и при этом траектория вычислений содержит числа %d, %d и %d\n", BeginNumber, EndNumber, ReqNumb1, ReqNumb2, ReqNumb3); break;
	default: printf("Сколько существует программ, которые число %d преобразуют в %d?\n", BeginNumber, EndNumber);
	}
	switch (AvCheck)
	{
	case 1:
	{
		if (ReqCheck == 0) printf("И при этом траектория вычислений не содержит числа %d?\n", AvNumb3);
		else printf("и не содержит число %d?\n", AvNumb3);
	}break;
	case 2:
	{
		if (ReqCheck == 0) printf("И при этом траектория вычислений не содержит чисел %d и %d?\n", AvNumb2, AvNumb3);
		else printf("и не содержит чисел %d и %d?\n", AvNumb2, AvNumb3);
	}break;
	case 3:
	{
		if (ReqCheck == 0) printf("И при этом траектория вычислений не содержит чисел %d, %d и %d?\n", AvNumb1, AvNumb2, AvNumb3);
		else printf("и не содержит чисел %d, %d и %d?\n", AvNumb1, AvNumb2, AvNumb3);
	}break;
	default:;
	}
	if (ReqCheck == 0)
	{
		if (Counter3(BeginNumber, EndNumber, ChoiceAction1, ChoiceAction2, ChoiceAction3, Int1, Int2, Int3, AvNumb1, AvNumb2, AvNumb3) == 0) printf("У даной задачи отсутствует решение.\n\n");
		else printf("Ответ: %d\n\n", Counter3(BeginNumber, EndNumber, ChoiceAction1, ChoiceAction2, ChoiceAction3, Int1, Int2, Int3, AvNumb1, AvNumb2, AvNumb3));
	}
	if (ReqCheck == 1)
	{
		if (Counter3(BeginNumber, ReqNumb1, ChoiceAction1, ChoiceAction2, ChoiceAction3, Int1, Int2, Int3, AvNumb1, AvNumb2, AvNumb3) * Counter3(ReqNumb1, EndNumber, ChoiceAction1, ChoiceAction2, ChoiceAction3, Int1, Int2, Int3, AvNumb1, AvNumb2, AvNumb3) == 0) printf("У данной задачи отсутствует решение.\n\n");
		else printf("Ответ: %d\n\n", Counter3(BeginNumber, ReqNumb1, ChoiceAction1, ChoiceAction2, ChoiceAction3, Int1, Int2, Int3, AvNumb1, AvNumb2, AvNumb3) * Counter3(ReqNumb1, EndNumber, ChoiceAction1, ChoiceAction2, ChoiceAction3, Int1, Int2, Int3, AvNumb1, AvNumb2, AvNumb3));
	}
	if (ReqCheck == 2)
	{
		if (Counter3(BeginNumber, ReqNumb1, ChoiceAction1, ChoiceAction2, ChoiceAction3, Int1, Int2, Int3, AvNumb1, AvNumb2, AvNumb3) * Counter3(ReqNumb1, ReqNumb2, ChoiceAction1, ChoiceAction2, ChoiceAction3, Int1, Int2, Int3, AvNumb1, AvNumb2, AvNumb3) * Counter3(ReqNumb2, EndNumber, ChoiceAction1, ChoiceAction2, ChoiceAction3, Int1, Int2, Int3, AvNumb1, AvNumb2, AvNumb3) == 0) printf("У данной задачи отсутствует решение.\n\n");
		else printf("Ответ: %d\n\n", Counter3(BeginNumber, ReqNumb1, ChoiceAction1, ChoiceAction2, ChoiceAction3, Int1, Int2, Int3, AvNumb1, AvNumb2, AvNumb3) * Counter3(ReqNumb1, ReqNumb2, ChoiceAction1, ChoiceAction2, ChoiceAction3, Int1, Int2, Int3, AvNumb1, AvNumb2, AvNumb3) * Counter3(ReqNumb2, EndNumber, ChoiceAction1, ChoiceAction2, ChoiceAction3, Int1, Int2, Int3, AvNumb1, AvNumb2, AvNumb3));
	}
	if (ReqCheck == 3)
	{
		if (Counter3(BeginNumber, ReqNumb1, ChoiceAction1, ChoiceAction2, ChoiceAction3, Int1, Int2, Int3, AvNumb1, AvNumb2, AvNumb3) * Counter3(ReqNumb1, ReqNumb2, ChoiceAction1, ChoiceAction2, ChoiceAction3, Int1, Int2, Int3, AvNumb1, AvNumb2, AvNumb3) * Counter3(ReqNumb2, ReqNumb3, ChoiceAction1, ChoiceAction2, ChoiceAction3, Int1, Int2, Int3, AvNumb1, AvNumb2, AvNumb3) * Counter3(ReqNumb3, EndNumber, ChoiceAction1, ChoiceAction2, ChoiceAction3, Int1, Int2, Int3, AvNumb1, AvNumb2, AvNumb3) == 0) printf("У данной задачи отсутствует решение.\n\n");
		else printf("Ответ: %d\n\n", Counter3(BeginNumber, ReqNumb1, ChoiceAction1, ChoiceAction2, ChoiceAction3, Int1, Int2, Int3, AvNumb1, AvNumb2, AvNumb3) * Counter3(ReqNumb1, ReqNumb2, ChoiceAction1, ChoiceAction2, ChoiceAction3, Int1, Int2, Int3, AvNumb1, AvNumb2, AvNumb3) * Counter3(ReqNumb2, ReqNumb3, ChoiceAction1, ChoiceAction2, ChoiceAction3, Int1, Int2, Int3, AvNumb1, AvNumb2, AvNumb3) * Counter3(ReqNumb3, EndNumber, ChoiceAction1, ChoiceAction2, ChoiceAction3, Int1, Int2, Int3, AvNumb1, AvNumb2, AvNumb3));
	}
}
int Counter3(int BeginNumber, int EndNumber, int ChoiceAction1, int ChoiceAction2, int ChoiseAction3, int Int1, int Int2, int Int3, int& AvNumb1, int& AvNumb2, int& AvNumb3)
{
	if (BeginNumber == EndNumber) return 1;
	if ((BeginNumber > EndNumber) || (BeginNumber == AvNumb1) || (BeginNumber == AvNumb2) || (BeginNumber == AvNumb3)) return 0;
	if (BeginNumber < EndNumber)
	{
		if ((ChoiceAction1 == 1) && (ChoiceAction2 == 1) && (ChoiseAction3 == 1)) return Counter3(BeginNumber + Int1, EndNumber, ChoiceAction1, ChoiceAction2, ChoiseAction3, Int1, Int2, Int3, AvNumb1, AvNumb2, AvNumb3) + Counter3(BeginNumber + Int2, EndNumber, ChoiceAction1, ChoiceAction2, ChoiseAction3, Int1, Int2, Int3, AvNumb1, AvNumb2, AvNumb3) + Counter3(BeginNumber + Int3, EndNumber, ChoiceAction1, ChoiceAction2, ChoiseAction3, Int1, Int2, Int3, AvNumb1, AvNumb2, AvNumb3);
		if ((ChoiceAction1 == 1) && (ChoiceAction2 == 2) && (ChoiseAction3 == 1)) return Counter3(BeginNumber + Int1, EndNumber, ChoiceAction1, ChoiceAction2, ChoiseAction3, Int1, Int2, Int3, AvNumb1, AvNumb2, AvNumb3) + Counter3(BeginNumber * Int2, EndNumber, ChoiceAction1, ChoiceAction2, ChoiseAction3, Int1, Int2, Int3, AvNumb1, AvNumb2, AvNumb3) + Counter3(BeginNumber + Int3, EndNumber, ChoiceAction1, ChoiceAction2, ChoiseAction3, Int1, Int2, Int3, AvNumb1, AvNumb2, AvNumb3);
		if ((ChoiceAction1 == 1) && (ChoiceAction2 == 1) && (ChoiseAction3 == 2)) return Counter3(BeginNumber + Int1, EndNumber, ChoiceAction1, ChoiceAction2, ChoiseAction3, Int1, Int2, Int3, AvNumb1, AvNumb2, AvNumb3) + Counter3(BeginNumber + Int2, EndNumber, ChoiceAction1, ChoiceAction2, ChoiseAction3, Int1, Int2, Int3, AvNumb1, AvNumb2, AvNumb3) + Counter3(BeginNumber * Int3, EndNumber, ChoiceAction1, ChoiceAction2, ChoiseAction3, Int1, Int2, Int3, AvNumb1, AvNumb2, AvNumb3);
		if ((ChoiceAction1 == 1) && (ChoiceAction2 == 2) && (ChoiseAction3 == 2)) return Counter3(BeginNumber + Int1, EndNumber, ChoiceAction1, ChoiceAction2, ChoiseAction3, Int1, Int2, Int3, AvNumb1, AvNumb2, AvNumb3) + Counter3(BeginNumber * Int2, EndNumber, ChoiceAction1, ChoiceAction2, ChoiseAction3, Int1, Int2, Int3, AvNumb1, AvNumb2, AvNumb3) + Counter3(BeginNumber * Int3, EndNumber, ChoiceAction1, ChoiceAction2, ChoiseAction3, Int1, Int2, Int3, AvNumb1, AvNumb2, AvNumb3);
		if ((ChoiceAction1 == 2) && (ChoiceAction2 == 1) && (ChoiseAction3 == 1)) return Counter3(BeginNumber * Int1, EndNumber, ChoiceAction1, ChoiceAction2, ChoiseAction3, Int1, Int2, Int3, AvNumb1, AvNumb2, AvNumb3) + Counter3(BeginNumber + Int2, EndNumber, ChoiceAction1, ChoiceAction2, ChoiseAction3, Int1, Int2, Int3, AvNumb1, AvNumb2, AvNumb3) + Counter3(BeginNumber + Int3, EndNumber, ChoiceAction1, ChoiceAction2, ChoiseAction3, Int1, Int2, Int3, AvNumb1, AvNumb2, AvNumb3);
		if ((ChoiceAction1 == 2) && (ChoiceAction2 == 2) && (ChoiseAction3 == 1)) return Counter3(BeginNumber * Int1, EndNumber, ChoiceAction1, ChoiceAction2, ChoiseAction3, Int1, Int2, Int3, AvNumb1, AvNumb2, AvNumb3) + Counter3(BeginNumber * Int2, EndNumber, ChoiceAction1, ChoiceAction2, ChoiseAction3, Int1, Int2, Int3, AvNumb1, AvNumb2, AvNumb3) + Counter3(BeginNumber + Int3, EndNumber, ChoiceAction1, ChoiceAction2, ChoiseAction3, Int1, Int2, Int3, AvNumb1, AvNumb2, AvNumb3);
		if ((ChoiceAction1 == 2) && (ChoiceAction2 == 1) && (ChoiseAction3 == 2)) return Counter3(BeginNumber * Int1, EndNumber, ChoiceAction1, ChoiceAction2, ChoiseAction3, Int1, Int2, Int3, AvNumb1, AvNumb2, AvNumb3) + Counter3(BeginNumber + Int2, EndNumber, ChoiceAction1, ChoiceAction2, ChoiseAction3, Int1, Int2, Int3, AvNumb1, AvNumb2, AvNumb3) + Counter3(BeginNumber * Int3, EndNumber, ChoiceAction1, ChoiceAction2, ChoiseAction3, Int1, Int2, Int3, AvNumb1, AvNumb2, AvNumb3);
		if ((ChoiceAction1 == 2) && (ChoiceAction2 == 2) && (ChoiseAction3 == 2)) return Counter3(BeginNumber * Int1, EndNumber, ChoiceAction1, ChoiceAction2, ChoiseAction3, Int1, Int2, Int3, AvNumb1, AvNumb2, AvNumb3) + Counter3(BeginNumber * Int2, EndNumber, ChoiceAction1, ChoiceAction2, ChoiseAction3, Int1, Int2, Int3, AvNumb1, AvNumb2, AvNumb3) + Counter3(BeginNumber * Int3, EndNumber, ChoiceAction1, ChoiceAction2, ChoiseAction3, Int1, Int2, Int3, AvNumb1, AvNumb2, AvNumb3);
	}
}
void example(int& BeginNumber, int& EndNumber, int& ChoiceActCount, int& ChoiceAction1, int& Int1, int& ChoiceAction2, int& Int2, int& AvCheck, int& AvNumb1, int& AvNumb2, int& AvNumb3, int& ReqCheck, int& ReqNumb1, int& ReqNumb2, int& ReqNumb3)
{
	printf("\nПример  задачи, генерируемой данным приложением:\n");
	BeginNumber = 1; EndNumber = 25;
	ChoiceActCount = 2; ChoiceAction1 = 1; ChoiceAction2 = 2;
	Int1 = 1; Int2 = 2;
	AvCheck = 3; AvNumb1 = 16; AvNumb2 = 19, AvNumb3 = 20;
	ReqCheck = 3; ReqNumb1 = 3; ReqNumb2 = 4; ReqNumb3 = 5;
	DoubleDataOutput(BeginNumber, EndNumber, ChoiceAction1, Int1, ChoiceAction2, Int2, AvCheck, AvNumb1, AvNumb2, AvNumb3, ReqCheck, ReqNumb1, ReqNumb2, ReqNumb3);
}