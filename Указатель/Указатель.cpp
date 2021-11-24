#include <stdio.h>
#include <conio.h>
//#include <iostream>
#define N 100000000
double a[N];


//
//int main(void)
//{ //Задание 1
//	/*int i = 10;
//	int* p = &i;
//	*p = *p + 10;
//	printf("%d %d", i, *p);*/
//	
//	/*int n = 256;
//	unsigned char* p1 = &n;
//	printf("%d %d %d %d", n, *p1, &n, p1);*/
// //Задание 2
//    /*system("chcp 1251>nul");
//	for (int i = 0; i < N; i++)
//	{
//		a[i] = i;
//	}
//	printf("создал статический массив");
//	system("pause>nul");
//	double* p = malloc(N * sizeof(double));
//	printf("выделил память под указатель");
//	system("pause>nul");
//	free(p);
//	printf("очистил память под указатель");
//	system("pause>nul");*/
//
//
//	
//
//
//	return 0;
//}

////Задание 3
//void foo(size_t n) {
//	int* arr = (int*)_alloca(n * sizeof(int));
//	size_t i;
//
//	for (i = 0; i < n; i++) {
//		arr[i] = rand();
//	}
//	for (i = 0; i < n; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void main() {
//	foo(10);
//	_getch();
//}
////Задание 4
//int main(void)
//{
//	system("chcp 1251>nul");
//	printf("Введите размерность массива: ");
//	int n;
//	scanf_s("%d", &n);
//	int** pp = malloc(n * sizeof(int));
//	for (int i = 0; i < n; i++)
//	{
//		pp[i] = malloc((i + 1) * sizeof(int));
//		for (int j = 0; j <= i; j++)
//		{
//			/*pp[i][j] = j;*/
//			if (j < i)
//				break;
//			
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j <= i; j++)
//		{
//			/*printf("%d ", pp[i][j]);*/
//			printf("%d ", j+i);
//		}
//		printf("\n");
//	}
//	/*for (int i = 0; i < n; i++)
//	{
//		free(pp[i]);
//	}
//	free(pp);*/
//	return 0;
//}
 //Задание 5
int kv(int x)
{
	return x * x;
}
int kub(int x)
{
	return x * x * x;
}
int cho_to(int (*f)(int), int i)
{
	return f(i);
}



int main(void)
{
	system("chcp 1251>nul");
	printf("Куб %d \n", cho_to(kub, 4));
	printf("Куб %d \n", cho_to(kub, 5));
	printf("Квадрат %d\n", cho_to(kv, 5));
	printf("Квадрат %d\n", cho_to(kv, 6));
	return 0;
}