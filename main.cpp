#include<iostream>
#include<string>
#include "suicide.h"

using namespace std;

int main(){
	int i = 2, j[666] = {0,1};
	print(begin(j),end(j));
	cout << endl;
	print2(j,end(j)-begin(j));
	print3(j);
	return 0;
}