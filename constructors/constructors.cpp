// constructors.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class CKOBE
{
private:
	int x;
	int y;
public:
	CKOBE()
	{
		int x = 536785201;
		int y = 175351730;
	}
	void init(int xx = 5555, int yy = 6666)
	{
		x = xx;
		y = yy;
		cout << x << endl << y << endl;
	}
	void valvex(int val)
	{
		x = val;
		cout << x << endl << y << endl;
	}
	int valve()
	{
		return x;
		cout << x << endl << y << endl;
	}
	void display()
	{
		cout << x << endl << y << endl;
	}
};
int main()
{
	int x, y;
	cin >> x >> y;
	CKOBE MAMBA;
	MAMBA.init();
	MAMBA.valvex(123);
	MAMBA.valvex(5);
	MAMBA.display();
	return 0;
}
