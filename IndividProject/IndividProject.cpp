#include <stdio.h>
#include <locale.h>
#include "Header.h"
int main()
{
	setlocale(LC_ALL, "Russian");
	printf("Приложение: 'Генератор 23 задач ЕГЭ по информатике'\n");
	int BeginNumber, EndNumber, Int1, Int2, Int3, ChoiceAction1, ChoiceAction2, ChoiceAction3, ChoiceActCount, AvCheck, AvNumb1, AvNumb2, AvNumb3, ReqCheck, ReqNumb1, ReqNumb2, ReqNumb3;
	int Menu;
	do
	{ 
		printf("Главное меню\n1. Генератор \n2. Пример задачи\n3. Выход \n"); scanf_s("%d", &Menu);
		switch (Menu)
		{
		case 1: 
		{
			DataEntry(BeginNumber, EndNumber, ChoiceActCount, ChoiceAction1, Int1, ChoiceAction2, Int2, ChoiceAction3, Int3, AvCheck, AvNumb1, AvNumb2, AvNumb3, ReqCheck, ReqNumb1, ReqNumb2, ReqNumb3);
			if (ChoiceActCount == 2)
			{
				printf("\nЗадача, сгенерированная на основе введённых вами значений:\n");
				DoubleDataOutput(BeginNumber, EndNumber, ChoiceAction1, Int1, ChoiceAction2, Int2, AvCheck, AvNumb1, AvNumb2, AvNumb3, ReqCheck, ReqNumb1, ReqNumb2, ReqNumb3);
			}
			if (ChoiceActCount == 3)
			{
				printf("\nЗадача, сгенерированная на основе введённых вами значений:\n");
				TripleDataOutput(BeginNumber, EndNumber, ChoiceAction1, Int1, ChoiceAction2, Int2, ChoiceAction3, Int3, AvCheck, AvNumb1, AvNumb2, AvNumb3, ReqCheck, ReqNumb1, ReqNumb2, ReqNumb3);
			}
			AvNumb1 = 0; AvNumb2 = 0; AvNumb3 = 0;
		}break;
		case 2: 
		{	
			example(BeginNumber, EndNumber, ChoiceActCount, ChoiceAction1, Int1, ChoiceAction2, Int2, AvCheck, AvNumb1, AvNumb2, AvNumb3, ReqCheck, ReqNumb1, ReqNumb2, ReqNumb3);
			AvNumb1 = 0; AvNumb2 = 0; AvNumb3 = 0;
		}; break;
		case 3: printf("Программа завершена.\n"); break;
		default: printf("Ошибка! Неверно введён пункт меню\n");
		}
	} while (Menu != 3);
}