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
		printf(" %5d \t", x->n);
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

void ThemVaoCuoiDs(DSLK& l, Node* node)
{
	if (l.phead == NULL)
	{
		l.phead = node;
		l.ptail = node;

	}
	else
	{
		l.ptail->pnext = node;
		l.ptail = node;
	}
}
void ThemVaoGiuaDS(DSLK& l, Node* giua, Node* Add)
{
	if (giua == NULL)
	{
		ThemVaoDauDS(l, Add);
	}
	else
	{
		
		Add->pnext = giua->pnext;
		giua->pnext = Add;
		if (l.ptail == giua)
		{
			l.ptail = Add;
		}
	

	}
}

void ThemVaoGiuaDSDau(DSLK& l, Node* giua, Node* Add)
{
	if (giua == NULL)
	{
		ThemVaoDauDS(l, Add);
	}
	else
	{
		if (l.phead == giua)
		{
			Add->pnext = giua;
			l.phead = Add;
		}
		else
		{
			Node* i = l.phead;
			while ( i != NULL && i->pnext != giua)
			{
				i = i->pnext;
			}
			i->pnext = Add;
			Add->pnext = giua;
		}
		
		
	}
}

void HuyDauDanhSach(DSLK &l)
{
	if (l.phead != NULL)
	{
		Node* p = l.phead;
		l.phead= l.phead->pnext;
		if (l.phead == NULL)
		{
			l.ptail = NULL;
		}
		delete p;
		
	}
	
	
}

void HuySau(DSLK& l, Node* p)
{
	if (p == NULL || p->pnext == NULL)
	{
		HuyDauDanhSach(l);

	}
	{
		Node *q = p->pnext;
		p->pnext = q->pnext;
		if (q == l.ptail)
		{
			l.ptail = p;
		}
		delete q;
	}
}
