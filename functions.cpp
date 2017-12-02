#include<iostream>
#include<string>
#include "suicide.h"

using namespace std;

int reset(int &i){
	i = 0;
	return i;
}
void print(const int *beg, const int *end){
	while(beg!=end)
		cout << *beg++ << endl;	
}
void print1(const int* cp){
	if(cp)
		while(*cp)
			cout << *cp++;	
}
void print2(const int* ia, size_t size){
	for(size_t i = 0; i != size; ++i){
		cout << ia[i] << endl;
	}
}
void print3(int(&arr)[10]){
	for(auto elem : arr)
		cout << elem << endl;
}

