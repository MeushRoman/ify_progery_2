#include <stdlib.h>	
#include <stdio.h>
#include <locale.h>	


void main() {
	setlocale(LC_ALL, "rus");

	int n=1;
	do
	{

	printf("Зачем вы хотите изучать программирование?\n1 - Заработать!\n2 - Для детей\n3 - Я не знаю выберите за меня\n4 - Поразвлечься\n5 - Интересно\n6 - Саморазвитие\n");
	scanf("%d", &n);
	if (n == 2) printf("Начните со Scratch, затем..\nPYTHON\n");
	else if (n == 3) printf("PYTHON\n");
	else if (n == 1)
	{
		printf("1 - Найти работу\n2 - У меня есть идея для стартапа!\n");
		scanf("%d", &n);
		if (n == 1)	{

			printf("Какая платформа/сфера?\n1 - 3D игры\n2 - Мобильная\n3 - Корп.софт\n4 - Веб\n5 - Я хочу работать в коупной IT комании\n6 - Я просто хочу $$$\n");
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

				printf("Какая ОС?\n1 - Android\n2 - IOS\n");
				scanf("%d", &n);

				(n == 1) ? printf("JAVA\n") : printf("OBJECTIVE-C\n");

			}
			else if (n == 3) {
			micro:
				printf("Что скажете о Microsoft?\n1 - Люблю его\n2 - Не плохо\n3 - Фууу\n");
				scanf("%d", &n);
				if (n == 1) printf("C#\n"); else if (n == 2) printf("JAVA\n"); else printf("JAVA\n");
			}
			else if (n == 4) {
			printf("1 - Фронтенд (веб-интерфейс)\n2 - Бэкенд (то что за веб сайтом)\n");
			scanf("%d", &n);

			if (n == 1) printf("JAVASCRIPT\n");
			else {
				printf("Хочу работать на..\n1 - Корпорацию\n2 - Стартап\n");
				scanf("%d", &n);

				if (n == 1) goto micro; else {
					news:
					printf("Хотите попробовать что то новое, но не очень трудоемкое?\n1 - Да\n2 - Нет\n3 - не знаю\n");
					scanf("%d", &n);

					if (n == 1) printf("JAVASCRIPT\n"); 
					else {
						printf("Какая у вас любимая игрушка?\n1 - Пластилин\n2 - Lego\n3 - Старенький но любимый мишка\n");
						scanf("%d", &n);
						if (n == 1) printf("RUBY\n"); else if (n == 2) printf("PYTHON\n"); else printf("PHP\n");
					}
				}
			}
			
		}
		}
		else {
			ps:
			printf("Какая платформа/сфера?\n1 - 3D игры\n2 - Мобильная\n3 - Корп.софт\n4 - Веб\n");
			scanf("%d", &n);

			if (n == 1) printf("C++\n"); else if (n == 2) goto mobile; else if (n == 3) goto micro; 
			else {
				printf("Ваш сервис будет работать в режиме реального времени, как Twitter?\n1 - Да\n2 - Нет\n");
				scanf("%d", &n);
				if (n == 1)  printf("JAVASCRIPT\n"); else goto news;
			}
		}
	}
	else {
		printf("Уже есть идея на миллион?\n1 - Да\n2 - Нет, просто хочу начать\n");
		scanf("%d", &n);
		if (n == 1) goto ps; else {
			printf("Мне нравится учиться..\n1 - Простым способом\n2 - Лучшим способом\n3 - Трудненьким способом\n4 - Очень сложный путь (но потом будет легче)\n");
			scanf("%d", &n);
			if (n == 1 || n == 2) printf("PYTHON\n"); else if (n == 4) printf("C++\n"); else if (n == 3) {
				printf("Какая коробка передач?\n1 - Ручная\n2 - Автомат\n");
				scanf("%d", &n);
				if (n == 1) printf("C\n"); else printf("JAVA\n");
			}
		}
	}

	printf("\n");
	
	} while (n >= 0 && n < 7);
}