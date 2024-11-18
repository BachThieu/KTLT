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