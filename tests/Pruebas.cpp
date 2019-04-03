// Pruebas.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
int suma(int x, int y)
{
	int _res;
	_res = x + y;
	return _res;
}


int prod(int x, int y)
{
	int _res;
	_res = x * y;
	return _res;
}

float sum_float(float x, float y)
{
	int _res;
	_res = x + y;
	return _res;
}

int main()
{
	//int c1,c2;
			//c1 = suma(6, 8);
			//printf("%d\n  ANA\n",c1);
			//c2= prod(3, 5);
			//printf("%d\n%d\n",c1, c2);
			//exit(0);
	/*char c1, c2;
			c1 = 72;
			c2 = 104;
			printf("ejemplo char: %c\n", c1);
			printf("ejemplo char: %c\n", c2);
			//return 0;

			float f1, f2;
			int i1;
			f1 = 32/10.0;
			i1 = 32/10.0;
			f2 = 2.5e-3;
			printf("ejemplo float: %f\n", f1);
			printf("ejemplo float e: %f\n", f2);
			printf("ejemplo: %d\n", i1);

			float r;
			r = sum_float(3.5, 8.2);
			printf("ejemplo float: %f\n", r);
			return 0;
			*/
	/*
								int ch,ch1;
								printf("Escribe un caracter\n");
								ch = getc(stdin);
								ch1 = getchar();
								printf("El caracter escrito es %c el segundo es %c\n", ch,ch1);
								return 0;

								//int ch;
								//ch = getchar();
								//putchar(ch);
								*/
	/*
																int ch, ch1;
																ch = 65;
																//printf("caracter 65 es:\n");
																//putc(ch, stdout);
																putchar(65);
																	putchar(10);
																		putchar(66);
																			putchar(10);
																		putchar(67);
																	putchar(10);
																return 0;
																*/
	/*
																												float c;
																												c = 0.000234;
																												printf("numero %e\n",c);
																												printf("numero %E\n", c);
																												printf("numero %g\n", c);
																												return 0;
																												*/
	/*
																																													printf("%X, %d\n %X, %d\n %X, %d\n %X, %d\n %X, %d\n %X, %d\n ", 0, 0, 1,1,2,2,3,3,4,4,5,5);
																																													printf("%x, %d\n %x, %d\n %x, %d\n %x, %d\n %x, %d\n %x, %d\n ", 6, 6, 7, 7, 8, 8, 9, 9, 10, 10, 11, 11);
																																													printf("%X, %d\n %X, %d\n %X, %d\n", 12, 12, 13, 13, 14, 14, 15, 15);
																																													printf("%X, %x, %x\n", 15,150,1500);
																																													printf("%-10d\n",123);
																																													printf("%-6.3f\n",123.456);
																																													return 0;
																																													*/
	/*
																																																																				int x1=2,x2=2,x3=2,x4 = 2, y1,y2,y3,y4;
																																																																				y1 = ++x1;
																																																																				y2 = --x2;
																																																																				y3 = x3++;
																																																																				y4 = x4--;
																																																																				printf("y1=%d   x1=%d\n", y1, x1);
																																																																				printf("y2=%d   x2=%d\n", y2, x2);
																																																																				printf("y3=%d   x3=%d\n", y3, x3);
																																																																				printf("y4=%d   x4=%d\n", y4, x4);
																																																																				return 0;
																																																																			*/
	/*
																																																																																															// ejercicio 9.1
																																																																																															int x;
																																																																																															unsigned int y;
																																																																																															int z;
																																																																																															x = 0xAB78;
																																																																																															y = 0xAB78;
																																																																																															z = 43896;
																																																																																															printf("%d, %u\n",x,y);
																																																																																															printf("0x%X\n", z);
																																																																																														*/
	/*
																																																																																															int x = 4;
																																																																																															int y = 2;
																																																																																															int op;
																																																																																															printf("ingrese un num\n");
																																																																																															op = getchar();
																																																																																															switch (op)	{
																																																																																															case '1': x += y;
																																																																																																printf("x=%d\n", x);
																																																																																															case '2': x -= y;
																																																																																																printf("x=%d\n", x);
																																																																																															case '3': x *= y;
																																																																																																printf("x=%d\n", x);

																																																																																															default: break;
																																																																																																printf("nothing\n");
																																																																																															}
																																																																																															return 0;
																																																																																															*/
	/*
																																																																																															//APUNTADORES
																																																																																															int x=4;
																																																																																															int *ptr_x;

																																																																																															ptr_x = &x;

																																																																																															printf("x=%d\n",x);
																																																																																															printf("ptr_x=%p\n", ptr_x);
																																																																																															printf("&x=%p\n", &x);
																																																																																															printf("&ptr_x=%p\n", &ptr_x);
																																																																																															printf("*ptr_x=%d\n", *ptr_x);
																																																																																															return 0;
																																																																																															*/

	int x = 5, y = 6;
	int *ptr_x = &x, *ptr_y = &y;

	*ptr_x *= *ptr_y;

	printf("x = %d\n", x);
	return 0;
}