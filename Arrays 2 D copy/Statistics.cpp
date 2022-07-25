#include"constants.h"
double Sum(int arr[STROKA][STOLB], const int STROKA, const int STOLB)
{
	int SUM = 0;
	for (int i = 0; i < STROKA; i++)
	{
		for (int j = 0; j < STOLB; j++)
		{
			SUM += arr[i][j];
		}
	}
	return (double)SUM;
}
double Sum(double arr[STROKA][STOLB], const int STROKA, const int STOLB)
{
	double SUM = 0;
	for (int i = 0; i < STROKA; i++)
	{
		for (int j = 0; j < STOLB; j++)
		{
			SUM += arr[i][j];
		}
	}
	return SUM;
}
char Sum(char arr[STROKA][STOLB], const int STROKA, const int STOLB)
{
	char SUM = 0;
	for (int i = 0; i < STROKA; i++)
	{
		for (int j = 0; j < STOLB; j++)
		{
			SUM += arr[i][j];
		}
	}
	return SUM;
}
float Sum(float arr[STROKA][STOLB], const int STROKA, const int STOLB)
{
	float SUM = 0;
	for (int i = 0; i < STROKA; i++)
	{
		for (int j = 0; j < STOLB; j++)
		{
			SUM += arr[i][j];
		}
	}
	return SUM;
}

double Avg(int arr[STROKA][STOLB], const int STROKA, const int STOLB)
{
	return Sum(arr, STROKA, STOLB) / (STROKA * STOLB);
}
double Avg(double brr[STROKA][STOLB], const int STROKA, const int STOLB)
{
	return Sum(brr, STROKA, STOLB) / (STROKA * STOLB);
}
char Avg(char crr[STROKA][STOLB], const int STROKA, const int STOLB)
{
	return Sum(crr, STROKA, STOLB) / (STROKA * STOLB);
}
float Avg(float drr[STROKA][STOLB], const int STROKA, const int STOLB)
{
	return Sum(drr, STROKA, STOLB) / (STROKA * STOLB);
}

int minValueIn(int arr[STROKA][STOLB], const int STROKA, const int STOLB)
{
	int x = 0;
	for (int i = 0; i < STROKA; i++)
	{
		for (int j = 0; j < STOLB; j++)
		{
			for (int c = 0; c < STROKA; c++)
			{
				for (int d = 0; d < STOLB; d++)
				{
					if (arr[i][j] > arr[c][d])
					{
						++x;
					}

				}
			}
			if (x == 0)
			{
				return arr[i][j];
			}
			x = 0;
		}
	}
}
double minValueIn(double brr[STROKA][STOLB], const int STROKA, const int STOLB)
{
	int x = 0;
	for (int i = 0; i < STROKA; i++)
	{
		for (int j = 0; j < STOLB; j++)
		{

			for (int c = 0; c < STROKA; c++)
			{
				for (int d = 0; d < STOLB; d++)
				{
					if (brr[i][j] >= brr[c][d])
					{
						++x;
					}
				}
			}
			if (x == 0)
			{
				return brr[i][j];

			}
			x = 0;
		}
	}
}
char minValueIn(char crr[STROKA][STOLB], const int STROKA, const int STOLB)
{
	int x = 0;
	for (int i = 0; i < STROKA; i++)
	{
		for (int j = 0; j < STOLB; j++)
		{
			for (int c = 0; c < STROKA; c++)
			{
				for (int d = 0; d < STOLB; d++)
				{
					if (crr[i][j] >= crr[c][d])
					{
						++x;
					}
				}
			}
			if (x == 0)
			{
				return crr[i][j];

			}
			x = 0;
		}
	}
}
float minValueIn(float drr[STROKA][STOLB], const int STROKA, const int STOLB)
{
	int x = 0;
	for (int i = 0; i < STROKA; i++)
	{
		for (int j = 0; j < STOLB; j++)
		{
			for (int c = 0; c < STROKA; c++)
			{
				for (int d = 0; d < STOLB; d++)
				{
					if (drr[i][j] > drr[c][d])
					{
						++x;
					}
				}
			}
			if (x == 0)
			{
				return drr[i][j];

			}
			x = 0;
		}
	}
}
int maxValueIn(int arr[STROKA][STOLB], const int STROKA, const int STOLB)
{
	int x = 0;
	for (int i = 0; i < STROKA; i++)
	{
		for (int j = 0; j < STOLB; j++)
		{
			for (int c = 0; c < STROKA; c++)
			{
				for (int d = 0; d < STOLB; d++)
				{
					if (arr[i][j] < arr[c][d])
					{
						++x;
					}

				}
			}
			if (x == 0)
			{
				return arr[i][j];
			}
			x = 0;
		}
	}
}
double maxValueIn(double brr[STROKA][STOLB], const int STROKA, const int STOLB)
{

	int x = 0;
	for (int i = 0; i < STROKA; i++)
	{
		for (int j = 0; j < STOLB; j++)
		{

			for (int c = 0; c < STROKA; c++)
			{
				for (int d = 0; d < STOLB; d++)
				{
					if (brr[i][j] < brr[c][d])
					{
						++x;

					}
				}
			}
			if (x == 0)
			{
				return brr[i][j];

			}
			x = 0;
		}
	}
}
char maxValueIn(char crr[STROKA][STOLB], const int STROKA, const int STOLB)
{

	int x = 0;
	for (int i = 0; i < STROKA; i++)
	{
		for (int j = 0; j < STOLB; j++)
		{
			for (int c = 0; c < STROKA; c++)
			{
				for (int d = 0; d < STOLB; d++)
				{
					if (crr[i][j] < crr[c][d])
					{
						++x;
					}
				}
			}
			if (x == 0)
			{
				return crr[i][j];

			}
			x = 0;
		}
	}
}
float maxValueIn(float drr[STROKA][STOLB], const int STROKA, const int STOLB)
{

	int x = 0;
	for (int i = 0; i < STROKA; i++)
	{
		for (int j = 0; j < STOLB; j++)
		{
			for (int c = 0; c < STROKA; c++)
			{
				for (int d = 0; d < STOLB; d++)
				{
					if (drr[i][j] < drr[c][d])
					{
						++x;
					}
				}
			}
			if (x == 0)
			{
				return drr[i][j];

			}
			x = 0;
		}
	}
}
