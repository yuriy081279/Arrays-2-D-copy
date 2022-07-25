#include"FillRand.h"
#include"stdafx.h"
#include"Shift.h"
void shiftLeft(int arr[STROKA][STOLB], const int STROKA, const int STOLB)
{
	int y = 4;
	for (int i = 0; i < y; i++)
	{
		int x = arr[0][0];
		for (int i = 0; i < STROKA; i++)
		{
			for (int j = 0; j < STOLB; j++)
			{
				arr[i][j] = arr[i][j + 1];
			}
		}
		arr[STROKA - 1][STOLB - 1] = x;
	}
}
void shiftRight(int arr[STROKA][STOLB], const int STROKA, const int STOLB)
{
	int y = 4;

	for (int i = 0; i < y; i++)
	{
		int x = arr[STROKA - 1][STOLB - 1];
		for (int i = STROKA - 1; i >= 0; i--)
		{
			for (int j = STOLB - 1; j >= 0; j--)
			{
				arr[i][j] = arr[i][j - 1];
			}
		}
		arr[0][0] = x;
	}
	cout << endl;
}

void shiftLeft(double brr[STROKA][STOLB], const int STROKA, const int STOLB)
{
	int y = 4;
	for (int i = 0; i < y; i++)
	{
		double x = brr[0][0];
		for (int i = 0; i < STROKA; i++)
		{
			for (int j = 0; j < STOLB; j++)
			{
				brr[i][j] = brr[i][j + 1];
			}
		}
		brr[STROKA - 1][STOLB - 1] = x;
	}
}
void shiftRight(double brr[STROKA][STOLB], const int STROKA, const int STOLB)
{
	int y = 4;
	for (int i = 0; i < y; i++)
	{
		double x = brr[STROKA - 1][STOLB - 1];
		for (int i = STROKA - 1; i >= 0; i--)
		{
			for (int j = STOLB - 1; j >= 0; j--)
			{
				brr[i][j] = brr[i][j - 1];
			}
		}
		brr[0][0] = x;
	}
	cout << endl;
}
void shiftLeft(char crr[STROKA][STOLB], const int STROKA, const int STOLB)
{
	int y = 4;
	for (int i = 0; i < y; i++)
	{
		char x = crr[0][0];
		for (int i = 0; i < STROKA; i++)
		{
			for (int j = 0; j < STOLB; j++)
			{
				crr[i][j] = crr[i][j + 1];
			}
		}
		crr[STROKA - 1][STOLB - 1] = x;
	}
}
void shiftRight(char crr[STROKA][STOLB], const int STROKA, const int STOLB)
{
	int y = 4;
	for (int i = 0; i < y; i++)
	{
		char x = crr[STROKA - 1][STOLB - 1];
		for (int i = STROKA - 1; i >= 0; i--)
		{
			for (int j = STOLB - 1; j >= 0; j--)
			{
				crr[i][j] = crr[i][j - 1];
			}
		}
		crr[0][0] = x;
	}
	cout << endl;
}
void shiftLeft(float drr[STROKA][STOLB], const int STROKA, const int STOLB)
{
	int y = 4;
	for (int i = 0; i < y; i++)
	{
		float x = drr[0][0];
		for (int i = 0; i < STROKA; i++)
		{
			for (int j = 0; j < STOLB; j++)
			{
				drr[i][j] = drr[i][j + 1];
			}
		}
		drr[STROKA - 1][STOLB - 1] = x;
	}
}
void shiftRight(float drr[STROKA][STOLB], const int STROKA, const int STOLB)
{
	int y = 4;
	for (int i = 0; i < y; i++)
	{
		float x = drr[STROKA - 1][STOLB - 1];
		for (int i = STROKA - 1; i >= 0; i--)
		{
			for (int j = STOLB - 1; j >= 0; j--)
			{
				drr[i][j] = drr[i][j - 1];
			}
		}
		drr[0][0] = x;
	}
	cout << endl;
}