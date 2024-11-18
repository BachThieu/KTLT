#include "iostream"
#include "Ham.h"
#include <string.h>
#include "DSLK.h"

using namespace std;

int Cong(int x, int y)
{
	return x + y;
}
int Tru(int x, int y)
{
	return x - y;
}
int Tinhtoan(int x, int y, int (*cth)(int a,int b))
{
	int kq = cth(x, y);
	return kq;
}

int main()
{
	//int** a;
	//int m;
	//int n;
	//int* b;
	//NhapMaTranCap2(a, m, b);
	//ThemDong(a, b, m, 2);
	//XuatMaTranCap2(a, m, b);

	//HuyMaTranCap2(a, m);
	//delete[] b;
	//char monhoc[50];
	//cout << "Nhap vao chuoi";
	//fgets(monhoc, sizeof(monhoc),stdin);
	//cout << "Gia tri sau khi nhap la: " << monhoc;
	//int* a;
	//int f ;
	//NhapMangmotchieu(a, f);
	//cout << "Gia tri lon nhat la:" << Timgiatri(a, 4, TimMax);
	//cout << "Gia tri nho nhat la:" << Timgiatri(a, 4, TimMin);
	//cout << "So am lon nhat:"<<TimViTriLonNhat(a, f, SoAm);
	//cout << "So nguyen to lon nhat:" << TimViTriLonNhat(a, f, SoNguyenTo);
	
	DSLK l;
	Khoitao(l);
	Node* p1 = Taonode(1);
	Node* p2 = Taonode(2);
	Node* p3 = Taonode(3);
	Node* p4 = Taonode(40);
	Node* p10 = Taonode(100);
	ThemVaoDauDS(l,p1);
	ThemVaoDauDS(l, p2);
	ThemVaoDauDS(l, p3);
	ThemVaoDauDS(l, p4);
	ThemVaoGiuaDSDau(l, p3, p10);
	Node* p11 = Taonode(111);
	ThemVaoGiuaDSDau(l, p4, p11);
	HuyDauDanhSach(l);
	HuyDauDanhSach(l);
	HuySau(l, p2);
	HuySau(l, p3);
	XuatDanhSach(l);
	cout << "ket qua cua de quy 10 = " << Dequy(10) << endl;
	


	
	for (int i = 0; i < 20; i++)
	{
		cout << DaySoFi(i) << "\t";
	}

}
