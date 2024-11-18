#include "iostream"
#include "Ham.h"
#include "Dslk.h"

using namespace std;

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
	
	DSLK list;
	Khoitao(list);
	Node* p1 = Taonode(10);
	Node* p2 = Taonode(20);
	Node* p3 = Taonode(30);
	Node* p4 = Taonode(40);

	ThemVaoDauDS(list, p1);
	ThemVaoDauDS(list, p2);
	ThemVaoDauDS(list, p3);
	ThemVaoDauDS(list, p4);


	
	XuatDanhSach(list);


	
}
