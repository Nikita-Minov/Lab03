#include <stdio.h>
#include <locale.h>
#define D_ENG 2.54
#define D_SPAIN 2,32166
#define D_STAROLIT 2,7076

#define MILE_NAUTICLE 1.852
#define MILE_LAND 1.609
#define MILE_ROME 1.475
#define MILE_OLD_RUS 7.468
#define MILE_GEOGRAPH 7412.6

int main()
{
	setlocale(LC_ALL, "RUS");
	
	// 1
	int num1, num2;
	puts("Введите первое число:");
	scanf("%d", &num1);
	printf("Введено число %d\n", num1);
	puts("Введите второе число:");
	scanf("%d", &num2);
	printf("Введено число %d\n", num2);

	printf("%d + %d = %d\n", num1, num2, num1 + num2);
	printf("%d - %d = %d\n", num1, num2, num1 - num2);
	printf("%d * %d = %d\n", num1, num2, num1 * num2);
	printf("%d / %d = %d\n", num1, num2, num1 / num2);
	printf("Остаток от деления %d на %d = %d\n", num1, num2, num1 % num2);

	// 2
	int dym;
	float result_en, result_sp, result_st;
	puts("Введите кол-во дюймов:");
	scanf("%d", &dym);
	result_en = D_ENG * dym;
	result_sp = D_SPAIN * dym;
	result_st = D_STAROLIT * dym;
	printf("%d английских дюймов(а) – это %.2f см\n", dym, result_en);
	printf("%d испанских дюймов(а) – это %.2f см\n", dym, result_sp);
	printf("%d старолитовских дюймов(а) – это %.2f см\n", dym, result_st);

	// 2A
	int mile;
	float result_nauticle, result_land, result_rome, result_old_russian, result_geograph;
	puts("Введите кол-во миль:");
	scanf("%d", &mile);

	result_nauticle = MILE_NAUTICLE * mile;
	result_land = MILE_LAND * mile;
	result_rome = MILE_ROME * mile;
	result_old_russian = MILE_OLD_RUS * mile;
	result_geograph = MILE_GEOGRAPH * mile;

	printf("%d морских миль(и) – это %.2f см\n", mile, result_nauticle);
	printf("%d сухопутных миль(и) – это %.2f см\n", mile, result_land);
	printf("%d римская миль(и) – это %.2f см\n", mile, result_rome);
	printf("%d старорусская миль(и) – это %.2f см\n", mile, result_old_russian);
	printf("%d географическая миль(и) – это %.2f см\n", mile, result_geograph);

	// 3
	int a, b;

	puts("Введите первое число:");
	scanf("%d", &a);
	printf("Введено число %d\n", a);
	puts("Введите второе число:");
	scanf("%d", &b);
	printf("Введено число %d\n", b);
	printf("________________________\n");
	printf("| a * b | a + b | a - b|\n");
	printf("------------------------\n");
	printf("| %d * %d | %d + %d | %d - %d|\n", a, b, a, b, a, b);
	printf("------------------------\n");
	printf("|   %d   |   %d   |  %d   |\n", a *b, a + b, a - b);
}