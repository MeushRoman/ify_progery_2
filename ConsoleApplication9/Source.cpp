#include <stdlib.h>	
#include <stdio.h>
#include <locale.h>	


void main() {
	setlocale(LC_ALL, "rus");

	int n=1;
	do
	{

	printf("����� �� ������ ������� ����������������?\n1 - ����������!\n2 - ��� �����\n3 - � �� ���� �������� �� ����\n4 - ������������\n5 - ���������\n6 - ������������\n");
	scanf("%d", &n);
	if (n == 2) printf("������� �� Scratch, �����..\nPYTHON\n");
	else if (n == 3) printf("PYTHON\n");
	else if (n == 1)
	{
		printf("1 - ����� ������\n2 - � ���� ���� ���� ��� ��������!\n");
		scanf("%d", &n);
		if (n == 1)	{

			printf("����� ���������/�����?\n1 - 3D ����\n2 - ���������\n3 - ����.����\n4 - ���\n5 - � ���� �������� � ������� IT �������\n6 - � ������ ���� $$$\n");
			scanf("%d", &n);

			if (n == 6) printf("JAVA\n");
			else if (n == 5) {
				printf("1 - Facebook\n2 - Microsoft\n3 - Google\n4 - Apple\n");
				scanf("%d", &n);
				if (n == 1) printf("PYTHON\n"); else if (n == 2) printf("C#\n"); else if (n == 3) printf("PYTHON\n"); else printf("OBJECTIVE-C\n");
			}
			else if (n == 1) printf("C++\n");
			else if (n == 2) {	
			mobile:

				printf("����� ��?\n1 - Android\n2 - IOS\n");
				scanf("%d", &n);

				(n == 1) ? printf("JAVA\n") : printf("OBJECTIVE-C\n");

			}
			else if (n == 3) {
			micro:
				printf("��� ������� � Microsoft?\n1 - ����� ���\n2 - �� �����\n3 - ����\n");
				scanf("%d", &n);
				if (n == 1) printf("C#\n"); else if (n == 2) printf("JAVA\n"); else printf("JAVA\n");
			}
			else if (n == 4) {
			printf("1 - �������� (���-���������)\n2 - ������ (�� ��� �� ��� ������)\n");
			scanf("%d", &n);

			if (n == 1) printf("JAVASCRIPT\n");
			else {
				printf("���� �������� ��..\n1 - ����������\n2 - �������\n");
				scanf("%d", &n);

				if (n == 1) goto micro; else {
					news:
					printf("������ ����������� ��� �� �����, �� �� ����� ����������?\n1 - ��\n2 - ���\n3 - �� ����\n");
					scanf("%d", &n);

					if (n == 1) printf("JAVASCRIPT\n"); 
					else {
						printf("����� � ��� ������� �������?\n1 - ���������\n2 - Lego\n3 - ���������� �� ������� �����\n");
						scanf("%d", &n);
						if (n == 1) printf("RUBY\n"); else if (n == 2) printf("PYTHON\n"); else printf("PHP\n");
					}
				}
			}
			
		}
		}
		else {
			ps:
			printf("����� ���������/�����?\n1 - 3D ����\n2 - ���������\n3 - ����.����\n4 - ���\n");
			scanf("%d", &n);

			if (n == 1) printf("C++\n"); else if (n == 2) goto mobile; else if (n == 3) goto micro; 
			else {
				printf("��� ������ ����� �������� � ������ ��������� �������, ��� Twitter?\n1 - ��\n2 - ���\n");
				scanf("%d", &n);
				if (n == 1)  printf("JAVASCRIPT\n"); else goto news;
			}
		}
	}
	else {
		printf("��� ���� ���� �� �������?\n1 - ��\n2 - ���, ������ ���� ������\n");
		scanf("%d", &n);
		if (n == 1) goto ps; else {
			printf("��� �������� �������..\n1 - ������� ��������\n2 - ������ ��������\n3 - ����������� ��������\n4 - ����� ������� ���� (�� ����� ����� �����)\n");
			scanf("%d", &n);
			if (n == 1 || n == 2) printf("PYTHON\n"); else if (n == 4) printf("C++\n"); else if (n == 3) {
				printf("����� ������� �������?\n1 - ������\n2 - �������\n");
				scanf("%d", &n);
				if (n == 1) printf("C\n"); else printf("JAVA\n");
			}
		}
	}

	printf("\n");
	
	} while (n >= 0 && n < 7);
}