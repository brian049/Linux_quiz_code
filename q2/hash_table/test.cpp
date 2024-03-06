#include<iostream>
using namespace std;
struct S { unsigned b1 : 5; unsigned :0; unsigned b2 : 6; unsigned b3 : 15; };

int main() {
	cout << sizeof(struct S);
}

