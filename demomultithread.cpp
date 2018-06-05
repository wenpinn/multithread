// demomultithread.cpp: 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include <thread>
#include <iostream>
#include <chrono>
using namespace std;
void test(char c)
{
	int i;
	for (i = 0;i < 100;i++)
	{
		cout << c << i << endl;
		this_thread::sleep_for(chrono::seconds(1));
	}
	
}
int main()
{
	thread t1(test,'a');	
	thread t2(test,'b');
	cout << "the end" << endl;
	t1.join();
	t2.join();
    return 0;
}

