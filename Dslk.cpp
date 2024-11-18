#include "Dslk.h"
#include "iostream"
#include <stdio.h>



void Khoitao(DSLK& l)
{
	l.phead = NULL;
	l.ptail = NULL;
}

bool KiemTraRong(DSLK l)
{
	return l.phead == NULL;
}

Node* Taonode(int n)
{
	Node* x = new Node;
	x->n = n;
	x->pnext = nullptr;
	return x;
}
void XuatDanhSach(DSLK l)
{
	Node* x = l.phead;
	while (x != NULL)
	{
		printf( " %5d \t", x->n);
		x = x->pnext;
	}
	printf("\n");
}

void ThemVaoDauDS(DSLK& l, Node* node)
{
	if (l.phead == NULL)
	{
		l.phead = node;
		l.ptail = node;

	}
	else
	{
		node->pnext = l.phead;
		l.phead = node;
	}
}

