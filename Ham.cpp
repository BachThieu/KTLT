#include <iostream>
#include "Ham.h"


void NhapMang(int*& a, int& n)
{
	printf("Nhap gia tri n:");
	scanf_s("%d", &n);
	a = new int[n];
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", a + i);
	}

}
void Xuatmang(int* p, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("gia tri cua a[%d] la %d \n", i, *(p + i));

	}
}
float Bai122(float* arr, int n)
{
	float a = *arr;
	for (int i = 0; i < n; i++)
	{
		if (*(arr + i) > a)
		{
			a = *(arr + i);
		}

	}
	printf("Gia tri lon nhat la: %f", a);
	return a;
}
void NhapMangSoThuc(float* &b, int& n)
{
	printf("Nhap vao gia tri n:");
	scanf_s("%d", &n);
	b = new float[n];
	for (int i = 0; i < n; i++)
	{
		scanf_s("%f", b + i);
	}
	
}

void Bai124(int* p, int n)
{
	bool a = false;
	for (int i = 0; i < n; i++)
	{
		if (*(p + i) < 2004 && *(p + i) % 2 == 0)
		{
			a = true;
		}
	}
	if (a)
	{
		printf("Co gia tri");
	}
	else
	{
		printf("Khong co gia tri");
	}
}
bool Bai125(int* p)
{
	if (*p == 1) return false;
	for (int i = 2; i < (*p); i++)
	{
		if (*p % i == 0)
		{
			return false;
		}
	}
	return true;
}
float Bai221(int* a,int n)
{
	float sum = 0;
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (Bai125(a + i))
		{
			sum += *(a + i);
			count++;
		}
	}
	return  sum/count;
}
void Bai127(int*& a, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (*(a + i) > *(a + j))
			{
				SwapNumber(*(a+i), *(a+j));
			}
		}
	}
}
void SwapNumber(int & m, int& n)
{
	int temp;
	temp = m;
	m = n;
	n = temp;
}

void Bai266(int*& a, int &n, int m, int k)
{
	int* newarr = new int[n + 1];

	for (int i = 0; i < m; i++)
	{
		*(newarr + i) = *(a + i);
	}
	*(newarr + m) = k;
	for (int i = m + 1; i <= n; i++)
	{
		*(newarr + i) = *(a + i - 1);
	}

	delete[]a;
	a = newarr;
	n++;
	
}
void Bai271(int*& a, int& n, int k)
{
	if (k < 0 || k >= n) return;
	int* newarr = new int[n - 1];
	for (int i = 0; i < k; i++)
	{
		*(newarr + i) = *(a + i);
	}
	for (int i = k; i < n - 1; i++)
	{
		*(newarr + i) = *(a + i + 1);
	}
	delete[]a;
	a = newarr;
	n--;

}
void CapPhat(int** p, int n)
{
	*p = new int[n];

}

void NhapMaTranCap2(int**& a, int& m, int* &b)
{
	printf("Nhap vao so dong\n");
	scanf_s("%d", &m);
	a = new int* [m];
	b = new int[m];
	for (int i = 0l;i < m;i++)
	{
		int n = 0;
		printf("Nhap vao so cot cho dong a[%d]", i);
		scanf_s("%d", &n);
		b[i] = n;
		a[i] = new int[n];
		for (int j = 0; j < n; j++)
		{
			printf("Nhap gia tri cho a[%d][%d] \n", i, j);
			scanf_s("%d", &a[i][j]);
		}

	}

}

void XuatMaTranCap2(int** a, int m, int* b)
{
	for (int i = 0; i < m; i++)
	{
		for(int j = 0;j < b[i]; j++)
		{
			printf("%d ", a[i][j]);

		}
		printf("\n");
		
	}
}

void HuyMaTranCap2(int** a, int m)
{
	for (int i = 0; i < m; i++)
	{
		delete[] a[i];
	}
	delete[] a;
}

float Bai317(int** a, int m, int* b)
{
	float Sum = 0;
	int count = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < b[i]; j++)
		{
			if (KiemtraSoNguyenTo(a[i][j]))
			{
				Sum += a[i][j];
				count++;
			}
		}
	}
	return Sum/count;
}

bool KiemtraSoNguyenTo(int a)
{
	if (a == 2) return true;
	if (a <= 1) return false;

	for (int i = 2; i < a; i++)
	{
		if (a % i == 0) return false;
	}
	return true;
}

void XoaDong(int** &a, int &m, int*& b,int k)
{
	int* newb = new int[m-1];
	int** newa = new int* [m-1];
	for (int i = 0; i < k; i++)
	{
		newb[i] = b[i];
		newa[i] = a[i];

	}
	for (int j = k + 1; j < m; j++)
	{
		newb[j-1] = b[j];
		newa[j-1] = a[j];

	}
	delete[] a[k];
	delete[] a;
	delete[] b;
	a = newa;
	b = newb;
	m--;
}
void ThemDong(int**& a, int*& b, int& m, int k)
{
	int** newa = new int* [m + 1];
	int* newb = new int[m + 1];
	for (int i = 0; i < k; i++)
	{
		newa[i] = a[i];
		newb[i] = b[i];
	}
	printf("Nhap vao so luong cot o dong %d", k);
	int n;
	scanf_s("%d", &n);
	newb[k] = n;
	newa[k] = new int[n];
	for (int i = 0; i < n; i++)
	{
		printf("Nhap vao gia tri a[%d][%d]", k, i);
		scanf_s("%d", &newa[k][i]);
	}
	for (int i = k; i < m; i++)
	{
		newa[i + 1] = a[i];
		newb[i + 1] = b[i];
	}
	delete[] a;
	delete[] b;
	a = newa;
	b = newb;
	m++;
}