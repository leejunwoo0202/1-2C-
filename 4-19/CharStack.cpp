#include <iostream>
#include "CharStack.h"
using namespace std;

bool CharStack::push(char ch)
{
	if (chkFull()) {
		cout << "������ ���� �� �ֽ��ϴ�." << endl;
		return false;
	}
	buf[--top] = ch;
	return true;
}

char CharStack::pop()
{
	if (chkEmpty()) {
		cout << "���ÿ� �����Ͱ� �����ϴ�." << endl;
		return 0;
	}
	return buf[top++]; 
}