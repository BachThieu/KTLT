#pragma once
struct Node
{
	int n;
	Node* pnext;
};
struct DSLK
{
	Node* phead;
	Node* ptail;
};
void Khoitao(DSLK& l);
bool KiemTraRong(DSLK l);
Node* Taonode(int n);
void XuatDanhSach(DSLK l);
void ThemVaoDauDS(DSLK& l, Node* node);
void ThemVaoCuoiDs(DSLK& l, Node* node);
void ThemVaoGiuaDS(DSLK& l, Node* giua, Node* Add);
void ThemVaoGiuaDSDau(DSLK& l, Node* giua, Node* Add);
void HuyDauDanhSach(DSLK &l);
void HuySau(DSLK& l, Node* p);