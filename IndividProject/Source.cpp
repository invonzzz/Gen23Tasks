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
			printf("������� ��������� �����: "); scanf_s("%d", &BeginNumber);
			if (BeginNumber <= 0) printf("������! ��������� ����� ������ ���� �����������\n");
		} while (BeginNumber <= 0);
		do
		{
			printf("������� ������� �����: "); scanf_s("%d", &EndNumber);
			if (EndNumber <= 0) printf("������! �������� ����� ������ ���� �����������\n");
		} while (EndNumber <= 0);
		if (EndNumber <= BeginNumber) printf("������! �������� ����� ������ ��� ����� ����������. ���������� ��� ���.\n");
	} while (BeginNumber >= EndNumber);
	do
	{
		printf("�������� ���������� �������� (2 ��� 3): "); scanf_s("%d", &ChoiceActCount);
		if ((ChoiceActCount != 2) && (ChoiceActCount != 3)) printf("������! ���������� �������� ����� ���� ����� 2 ��� 3.\n");
	} while ((ChoiceActCount < 2) || (ChoiceActCount > 3));
	do
	{
		printf("�������� ������ �������� (1 - ���������, 2 - ��������): "); scanf_s("%d", &ChoiceAction1);
		if ((ChoiceAction1 != 1) && (ChoiceAction1 != 2)) printf("������! �������� ������ ��� �������� ��� �����: 1 � 2.\n");
	} while ((ChoiceAction1 < 1) || (ChoiceAction1 > 2));
	if (ChoiceAction1 == 2)
	{
		do
		{
			printf("������� ����� ��� ������� ��������: "); scanf_s("%d", &Int1);
			if (Int1 <= 1) printf("������! ��������� �� ��� ����� �� ������� � ��������� ����������. ������� ������ �����\n");
		} while (Int1 <= 1);
	}
	else
	{
		do
		{
			printf("������� ����� ��� ������� ��������: "); scanf_s("%d", &Int1);
			if (Int1 <= 0) printf("������! ���������� ��� �������� ����� ������ ����������� ����� ��� ���������� ��������� �����.\n");
		} while (Int1 <= 0);
	}
	do
	{
		printf("�������� ������ �������� (1 - ���������, 2 - ��������): "); scanf_s("%d", &ChoiceAction2);
		if ((ChoiceAction2 != 1) && (ChoiceAction2 != 2)) printf("������! �������� ������ ��� �������� ��� �����: 1 � 2.\n");
	} while ((ChoiceAction2 < 1) || (ChoiceAction2 > 2));
	if (ChoiceAction2 == 2)
	{
		do
		{
			printf("������� ����� ��� ������� ��������: "); scanf_s("%d", &Int2);
			if (Int2 <= 1) printf("������! ��������� �� ��� ����� �� ������� � ��������� ����������. ������� ������ �����\n");
		} while (Int2 <= 1);
	}
	else
	{
		do
		{
			printf("������� ����� ��� ������� ��������: "); scanf_s("%d", &Int2);
			if (Int2 <= 0) printf("������! ���������� ��� �������� ����� ������ ����������� ����� ��� ���������� ��������� �����.\n");
		} while (Int2 <= 0);
	}
	if (ChoiceActCount == 3)
	{
		do
		{
			printf("�������� ������ �������� (1 - ���������, 2 - ��������): "); scanf_s("%d", &ChoiceAction3);
			if ((ChoiceAction3 != 1) && (ChoiceAction3 != 2)) printf("������! �������� ������ ��� �������� ��� �����: 1 � 2.\n");
		} while ((ChoiceAction3 < 1) || (ChoiceAction3 > 2));
		if (ChoiceAction3 == 2)
		{
			do
			{
				printf("������� ����� ��� �������� ��������: "); scanf_s("%d", &Int3);
				if (Int3 <= 1) printf("������! ��������� �� ��� ����� �� ������� � ��������� ����������. ������� ������ �����\n");
			} while (Int3 <= 1);
		}
		else
		{
			do
			{
				printf("������� ����� ��� �������� ��������: "); scanf_s("%d", &Int3);
				if (Int3 <= 0) printf("������! ���������� ��� �������� ����� ������ ����������� ����� ��� ���������� ��������� �����.\n");
			} while (Int3 <= 0);
		}
	}
	do
	{
		printf("������� ������������ ����� ����� ��������� ���� ���������? (0 - 3) - "); scanf_s("%d", &ReqCheck);
		if ((ReqCheck < 0) || (ReqCheck > 3)) printf("������! ������������ ����� ����� ���� 0, 1, 2 ��� 3.\n");
	} while ((ReqCheck < 0) || (ReqCheck > 3));
	if (ReqCheck != 0) printf("������� ������������ �����, ����� ������� ������ ������ ���������� ���������: ");
	switch (ReqCheck)
	{
	case 1: 
	{
		do
		{
			scanf_s("%d", &ReqNumb1);
			if ((ReqNumb1 < BeginNumber) || (ReqNumb1 > EndNumber)) printf("������������ ����������� ����� ����� ����������, ��� ��� ��� �� �������� � ���������� ������ ���������. ������� �����, ������ %d, �� ������ %d\n", BeginNumber, EndNumber);
		} while ((ReqNumb1 < BeginNumber) || (ReqNumb1 > EndNumber));
	}break;
	case 2: 
	{
		do
		{
			scanf_s("%d", &ReqNumb1);
			if ((ReqNumb1 < BeginNumber) || (ReqNumb1 > EndNumber)) printf("������������ ����������� ����� ����� ����������, ��� ��� ��� �� �������� � ���������� ������ ���������. ������� �����, ������ %d, �� ������ %d\n", BeginNumber, EndNumber);
		} while ((ReqNumb1 < BeginNumber) || (ReqNumb1 > EndNumber));
		do
		{
			scanf_s("%d", &ReqNumb2);
			if ((ReqNumb2 < BeginNumber) || (ReqNumb2 > EndNumber)) printf("������������ ����������� ����� ����� ����������, ��� ��� ��� �� �������� � ���������� ������ ���������. ������� �����, ������ %d, �� ������ %d\n", BeginNumber, EndNumber);
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
			if ((ReqNumb1 < BeginNumber) || (ReqNumb1 > EndNumber)) printf("������������ ����������� ����� ����� ����������, ��� ��� ��� �� �������� � ���������� ������ ���������. ������� �����, ������ %d, �� ������ %d\n", BeginNumber, EndNumber);
		} while ((ReqNumb1 < BeginNumber) || (ReqNumb1 > EndNumber));
		do
		{
			scanf_s("%d", &ReqNumb2);
			if ((ReqNumb2 < BeginNumber) || (ReqNumb2 > EndNumber)) printf("������������ ����������� ����� ����� ����������, ��� ��� ��� �� �������� � ���������� ������ ���������. ������� �����, ������ %d, �� ������ %d\n", BeginNumber, EndNumber);
		} while ((ReqNumb2 < BeginNumber) || (ReqNumb2 > EndNumber));
		do
		{
			scanf_s("%d", &ReqNumb3);
			if ((ReqNumb3 < BeginNumber) || (ReqNumb3 > EndNumber)) printf("������������ ����������� ����� ����� ����������, ��� ��� ��� �� �������� � ���������� ������ ���������. ������� �����, ������ %d, �� ������ %d\n", BeginNumber, EndNumber);
		} while ((ReqNumb3 < BeginNumber) || (ReqNumb3 > EndNumber));
		sort3(ReqNumb1, ReqNumb2, ReqNumb3);
	}
	default:; break;
	}
	do
	{
		printf("������� ���������� ����� ����� ��������� ���� ���������? (0 - 3) - "); scanf_s("%d", &AvCheck);
		if ((AvCheck < 0) || (AvCheck > 3)) printf("������! ������������ ����� ����� ���� 0, 1, 2 ��� 3.\n");
	} while ((AvCheck < 0) || (AvCheck > 3));
	if (AvCheck == 0);
	else printf("������� ���������� �����, ����� ������� ��������� �� ����� ��������� �� ����� ����������: ");
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
	printf("� ����������� ��� �������, ������� ��������� ������:\n");
	if (ChoiceAction1 == 1) printf("1. ������� %d\n", Int1);
	else printf("1. ������ �� %d\n", Int1);
	if (ChoiceAction2 == 1) printf("2. ������� %d\n", Int2);
	else printf("2. ������ �� %d\n", Int2);
	if (ChoiceAction1 == 1 && ChoiceAction2 == 1) printf("������ �� ��� ����������� ����� �� ������ �� %d, ������ - ����������� ��� �� %d.\n", Int1, Int2);
	if (ChoiceAction1 == 1 && ChoiceAction2 == 2) printf("������ �� ��� ����������� ����� �� ������ �� %d, ������ - ����������� ��� � %d ���(����).\n", Int1, Int2);
	if (ChoiceAction1 == 2 && ChoiceAction2 == 1) printf("������ �� ��� ����������� ����� �� ������ � %d ���(����), ������ - ����������� ��� �� %d.\n", Int1, Int2);
	if (ChoiceAction1 == 2 && ChoiceAction2 == 2) printf("������ �� ��� ����������� ����� �� ������ � %d ���(����), ������ - ����������� ��� � %d ���(����).\n", Int1, Int2);
	printf("��������� ��� ����������� - ��� ������������������ ������.\n");
	switch (ReqCheck)
	{
	case 1: printf("������� ���������� ��������, ������� ����� %d ����������� � %d, � ��� ���� ���������� ���������� �������� ����� %d\n", BeginNumber, EndNumber, ReqNumb1); break;
	case 2: printf("������� ���������� ��������, ������� ����� %d ����������� � %d, � ��� ���� ���������� ���������� �������� ����� %d � %d\n", BeginNumber, EndNumber, ReqNumb1, ReqNumb2); break;
	case 3: printf("������� ���������� ��������, ������� ����� %d ����������� � %d, � ��� ���� ���������� ���������� �������� ����� %d, %d � %d\n", BeginNumber, EndNumber, ReqNumb1, ReqNumb2, ReqNumb3); break;
	default: printf("������� ���������� ��������, ������� ����� %d ����������� � %d?\n", BeginNumber, EndNumber);
	}
	switch (AvCheck)
	{
	case 1: 
	{
		if (ReqCheck == 0) printf("� ��� ���� ���������� ���������� �� �������� ����� %d?\n", AvNumb3);
		else printf("� �� �������� ����� %d?\n", AvNumb3);
	}break;
	case 2: 
	{
		if (ReqCheck == 0) printf("� ��� ���� ���������� ���������� �� �������� ����� %d � %d?\n", AvNumb2, AvNumb3);
		else printf("� �� �������� ����� %d � %d?\n", AvNumb2, AvNumb3); 
	}break;
	case 3: 
	{
		if (ReqCheck == 0) printf("� ��� ���� ���������� ���������� �� �������� ����� %d, %d � %d?\n", AvNumb1, AvNumb2, AvNumb3);
		else printf("� �� �������� ����� %d, %d � %d?\n", AvNumb1, AvNumb2, AvNumb3);
	}break;
	default:;
	}
	if (ReqCheck == 0)
	{
		if (Counter2(BeginNumber, EndNumber, ChoiceAction1, ChoiceAction2, Int1, Int2, AvNumb1, AvNumb2, AvNumb3) == 0) printf("� ������ ������ ����������� �������\n\n");
		else printf("�����: %d\n\n", Counter2(BeginNumber, EndNumber, ChoiceAction1, ChoiceAction2, Int1, Int2, AvNumb1, AvNumb2, AvNumb3));
	}
	if (ReqCheck == 1)
	{
		if (Counter2(BeginNumber, ReqNumb1, ChoiceAction1, ChoiceAction2, Int1, Int2, AvNumb1, AvNumb2, AvNumb3) * Counter2(ReqNumb1, EndNumber, ChoiceAction1, ChoiceAction2, Int1, Int2, AvNumb1, AvNumb2, AvNumb3) == 0) printf("� ������ ������ ����������� �������\n\n");
		else printf("�����: %d\n\n", Counter2(BeginNumber, ReqNumb1, ChoiceAction1, ChoiceAction2, Int1, Int2, AvNumb1, AvNumb2, AvNumb3) * Counter2(ReqNumb1, EndNumber, ChoiceAction1, ChoiceAction2, Int1, Int2, AvNumb1, AvNumb2, AvNumb3));
	}
	if (ReqCheck == 2)
	{	
		if (Counter2(BeginNumber, ReqNumb1, ChoiceAction1, ChoiceAction2, Int1, Int2, AvNumb1, AvNumb2, AvNumb3) * Counter2(ReqNumb1, ReqNumb2, ChoiceAction1, ChoiceAction2, Int1, Int2, AvNumb1, AvNumb2, AvNumb3) * Counter2(ReqNumb2, EndNumber, ChoiceAction1, ChoiceAction2, Int1, Int2, AvNumb1, AvNumb2, AvNumb3) == 0) printf("� ������ ������ ����������� �������\n\n");
		else printf("�����: %d\n\n", Counter2(BeginNumber, ReqNumb1, ChoiceAction1, ChoiceAction2, Int1, Int2, AvNumb1, AvNumb2, AvNumb3) * Counter2(ReqNumb1, ReqNumb2, ChoiceAction1, ChoiceAction2, Int1, Int2, AvNumb1, AvNumb2, AvNumb3) * Counter2(ReqNumb2, EndNumber, ChoiceAction1, ChoiceAction2, Int1, Int2, AvNumb1, AvNumb2, AvNumb3));
	}
	if (ReqCheck == 3)
	{
		if (Counter2(BeginNumber, ReqNumb1, ChoiceAction1, ChoiceAction2, Int1, Int2, AvNumb1, AvNumb2, AvNumb3) * Counter2(ReqNumb1, ReqNumb2, ChoiceAction1, ChoiceAction2, Int1, Int2, AvNumb1, AvNumb2, AvNumb3) * Counter2(ReqNumb2, ReqNumb3, ChoiceAction1, ChoiceAction2, Int1, Int2, AvNumb1, AvNumb2, AvNumb3) * Counter2(ReqNumb3, EndNumber, ChoiceAction1, ChoiceAction2, Int1, Int2, AvNumb1, AvNumb2, AvNumb3) == 0) printf("� ������ ������ ����������� �������\n\n");
		else printf("�����: %d\n\n", Counter2(BeginNumber, ReqNumb1, ChoiceAction1, ChoiceAction2, Int1, Int2, AvNumb1, AvNumb2, AvNumb3) * Counter2(ReqNumb1, ReqNumb2, ChoiceAction1, ChoiceAction2, Int1, Int2, AvNumb1, AvNumb2, AvNumb3) * Counter2(ReqNumb2, ReqNumb3, ChoiceAction1, ChoiceAction2, Int1, Int2, AvNumb1, AvNumb2, AvNumb3) * Counter2(ReqNumb3, EndNumber, ChoiceAction1, ChoiceAction2, Int1, Int2, AvNumb1, AvNumb2, AvNumb3));
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
	printf("� ����������� ��� �������, ������� ��������� ������:\n");
	if (ChoiceAction1 == 1) printf("1. ������� %d\n", Int1);
	else printf("1. ������ �� %d\n", Int1);
	if (ChoiceAction2 == 1) printf("2. ������� %d\n", Int2);
	else printf("2. ������ �� %d\n", Int2);
	if (ChoiceAction3 == 1) printf("3. ������� %d\n", Int3);
	else printf("3. ������ �� %d\n", Int3);
	if (ChoiceAction1 == 1 && ChoiceAction2 == 1 && ChoiceAction3 == 1) printf("������ �� ��� ����������� ����� �� ������ �� %d, ������ - ����������� ��� �� %d, ������ ����������� ��� �� %d\n", Int1, Int2, Int3);
	if (ChoiceAction1 == 1 && ChoiceAction2 == 2 && ChoiceAction3 == 1) printf("������ �� ��� ����������� ����� �� ������ �� %d, ������ - ����������� ��� � %d ���(����), ������ ����������� ��� �� %d\n", Int1, Int2, Int3);
	if (ChoiceAction1 == 1 && ChoiceAction2 == 1 && ChoiceAction3 == 2) printf("������ �� ��� ����������� ����� �� ������ �� %d, ������ - ����������� ��� �� %d, ������ ����������� ��� � %d ���(����)\n", Int1, Int2, Int3);
	if (ChoiceAction1 == 1 && ChoiceAction2 == 2 && ChoiceAction3 == 2) printf("������ �� ��� ����������� ����� �� ������ �� %d, ������ - ����������� ��� � %d ���(����), ������ ����������� ��� � %d ���(���)\n", Int1, Int2, Int3);
	if (ChoiceAction1 == 2 && ChoiceAction2 == 1 && ChoiceAction3 == 1) printf("������ �� ��� ����������� ����� �� ������ � %d ���(����), ������ - ����������� ��� �� %d, ������ ����������� ��� �� %d\n", Int1, Int2, Int3);
	if (ChoiceAction1 == 2 && ChoiceAction2 == 2 && ChoiceAction3 == 1) printf("������ �� ��� ����������� ����� �� ������ � %d ���(����), ������ - ����������� ��� � %d ���(����), ������ ����������� ��� �� %d\n", Int1, Int2, Int3);
	if (ChoiceAction1 == 2 && ChoiceAction2 == 1 && ChoiceAction3 == 2) printf("������ �� ��� ����������� ����� �� ������ � %d ���(����), ������ - ����������� ��� �� %d, ������ ����������� ��� � %d ���(����)\n", Int1, Int2, Int3);
	if (ChoiceAction1 == 2 && ChoiceAction2 == 2 && ChoiceAction3 == 2) printf("������ �� ��� ����������� ����� �� ������ � %d ���(����), ������ - ����������� ��� � %d ���(����), ������ ����������� ��� � %d ���(����)\n", Int1, Int2, Int3);
	printf("��������� ��� ����������� - ��� ������������������ ������.\n");
	switch (ReqCheck)
	{
	case 1: printf("������� ���������� ��������, ������� ����� %d ����������� � %d, � ��� ���� ���������� ���������� �������� ����� %d\n", BeginNumber, EndNumber, ReqNumb1); break;
	case 2: printf("������� ���������� ��������, ������� ����� %d ����������� � %d, � ��� ���� ���������� ���������� �������� ����� %d � %d\n", BeginNumber, EndNumber, ReqNumb1, ReqNumb2); break;
	case 3: printf("������� ���������� ��������, ������� ����� %d ����������� � %d, � ��� ���� ���������� ���������� �������� ����� %d, %d � %d\n", BeginNumber, EndNumber, ReqNumb1, ReqNumb2, ReqNumb3); break;
	default: printf("������� ���������� ��������, ������� ����� %d ����������� � %d?\n", BeginNumber, EndNumber);
	}
	switch (AvCheck)
	{
	case 1:
	{
		if (ReqCheck == 0) printf("� ��� ���� ���������� ���������� �� �������� ����� %d?\n", AvNumb3);
		else printf("� �� �������� ����� %d?\n", AvNumb3);
	}break;
	case 2:
	{
		if (ReqCheck == 0) printf("� ��� ���� ���������� ���������� �� �������� ����� %d � %d?\n", AvNumb2, AvNumb3);
		else printf("� �� �������� ����� %d � %d?\n", AvNumb2, AvNumb3);
	}break;
	case 3:
	{
		if (ReqCheck == 0) printf("� ��� ���� ���������� ���������� �� �������� ����� %d, %d � %d?\n", AvNumb1, AvNumb2, AvNumb3);
		else printf("� �� �������� ����� %d, %d � %d?\n", AvNumb1, AvNumb2, AvNumb3);
	}break;
	default:;
	}
	if (ReqCheck == 0)
	{
		if (Counter3(BeginNumber, EndNumber, ChoiceAction1, ChoiceAction2, ChoiceAction3, Int1, Int2, Int3, AvNumb1, AvNumb2, AvNumb3) == 0) printf("� ����� ������ ����������� �������.\n\n");
		else printf("�����: %d\n\n", Counter3(BeginNumber, EndNumber, ChoiceAction1, ChoiceAction2, ChoiceAction3, Int1, Int2, Int3, AvNumb1, AvNumb2, AvNumb3));
	}
	if (ReqCheck == 1)
	{
		if (Counter3(BeginNumber, ReqNumb1, ChoiceAction1, ChoiceAction2, ChoiceAction3, Int1, Int2, Int3, AvNumb1, AvNumb2, AvNumb3) * Counter3(ReqNumb1, EndNumber, ChoiceAction1, ChoiceAction2, ChoiceAction3, Int1, Int2, Int3, AvNumb1, AvNumb2, AvNumb3) == 0) printf("� ������ ������ ����������� �������.\n\n");
		else printf("�����: %d\n\n", Counter3(BeginNumber, ReqNumb1, ChoiceAction1, ChoiceAction2, ChoiceAction3, Int1, Int2, Int3, AvNumb1, AvNumb2, AvNumb3) * Counter3(ReqNumb1, EndNumber, ChoiceAction1, ChoiceAction2, ChoiceAction3, Int1, Int2, Int3, AvNumb1, AvNumb2, AvNumb3));
	}
	if (ReqCheck == 2)
	{
		if (Counter3(BeginNumber, ReqNumb1, ChoiceAction1, ChoiceAction2, ChoiceAction3, Int1, Int2, Int3, AvNumb1, AvNumb2, AvNumb3) * Counter3(ReqNumb1, ReqNumb2, ChoiceAction1, ChoiceAction2, ChoiceAction3, Int1, Int2, Int3, AvNumb1, AvNumb2, AvNumb3) * Counter3(ReqNumb2, EndNumber, ChoiceAction1, ChoiceAction2, ChoiceAction3, Int1, Int2, Int3, AvNumb1, AvNumb2, AvNumb3) == 0) printf("� ������ ������ ����������� �������.\n\n");
		else printf("�����: %d\n\n", Counter3(BeginNumber, ReqNumb1, ChoiceAction1, ChoiceAction2, ChoiceAction3, Int1, Int2, Int3, AvNumb1, AvNumb2, AvNumb3) * Counter3(ReqNumb1, ReqNumb2, ChoiceAction1, ChoiceAction2, ChoiceAction3, Int1, Int2, Int3, AvNumb1, AvNumb2, AvNumb3) * Counter3(ReqNumb2, EndNumber, ChoiceAction1, ChoiceAction2, ChoiceAction3, Int1, Int2, Int3, AvNumb1, AvNumb2, AvNumb3));
	}
	if (ReqCheck == 3)
	{
		if (Counter3(BeginNumber, ReqNumb1, ChoiceAction1, ChoiceAction2, ChoiceAction3, Int1, Int2, Int3, AvNumb1, AvNumb2, AvNumb3) * Counter3(ReqNumb1, ReqNumb2, ChoiceAction1, ChoiceAction2, ChoiceAction3, Int1, Int2, Int3, AvNumb1, AvNumb2, AvNumb3) * Counter3(ReqNumb2, ReqNumb3, ChoiceAction1, ChoiceAction2, ChoiceAction3, Int1, Int2, Int3, AvNumb1, AvNumb2, AvNumb3) * Counter3(ReqNumb3, EndNumber, ChoiceAction1, ChoiceAction2, ChoiceAction3, Int1, Int2, Int3, AvNumb1, AvNumb2, AvNumb3) == 0) printf("� ������ ������ ����������� �������.\n\n");
		else printf("�����: %d\n\n", Counter3(BeginNumber, ReqNumb1, ChoiceAction1, ChoiceAction2, ChoiceAction3, Int1, Int2, Int3, AvNumb1, AvNumb2, AvNumb3) * Counter3(ReqNumb1, ReqNumb2, ChoiceAction1, ChoiceAction2, ChoiceAction3, Int1, Int2, Int3, AvNumb1, AvNumb2, AvNumb3) * Counter3(ReqNumb2, ReqNumb3, ChoiceAction1, ChoiceAction2, ChoiceAction3, Int1, Int2, Int3, AvNumb1, AvNumb2, AvNumb3) * Counter3(ReqNumb3, EndNumber, ChoiceAction1, ChoiceAction2, ChoiceAction3, Int1, Int2, Int3, AvNumb1, AvNumb2, AvNumb3));
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
	printf("\n������  ������, ������������ ������ �����������:\n");
	BeginNumber = 1; EndNumber = 25;
	ChoiceActCount = 2; ChoiceAction1 = 1; ChoiceAction2 = 2;
	Int1 = 1; Int2 = 2;
	AvCheck = 3; AvNumb1 = 16; AvNumb2 = 19, AvNumb3 = 20;
	ReqCheck = 3; ReqNumb1 = 3; ReqNumb2 = 4; ReqNumb3 = 5;
	DoubleDataOutput(BeginNumber, EndNumber, ChoiceAction1, Int1, ChoiceAction2, Int2, AvCheck, AvNumb1, AvNumb2, AvNumb3, ReqCheck, ReqNumb1, ReqNumb2, ReqNumb3);
}