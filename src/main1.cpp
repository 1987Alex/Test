#include "task1.h"
//������ ������ ���� ��-�� ����, ��� ���� scanf? ������� �����������, � ������ ������������� ���� ������� � stdio.h//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	puts("What is your age?");
	int age = 0;
	scanf("%d", &age);
	int result = ageCheck(age);
	if (1==result) //��� ����� ��� �������� ���������
		//���� ���������� 1==result, ��� ��� ����� ��������� ���� = � ����� �������� �����������
		puts("Access granted");
	//����� ������������ printf ������ puts. �� puts ������ �� ��������, � printf ��������� ������� ��� ������
	else
		puts("Access denied");
	return 0;


}