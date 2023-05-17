#include<iostream>
#include "hashTable.h"
using namespace std;
int main()
{
	cout << "Please enter size" << endl;

	int num,x;
	cin >> num;

	hashTable hash(num);
	
	cout << "Please fill the hash table ";

	for (int i = 0; i < num; i++) 
	{
		cin >> x;
		hash.addvalue(x);
	}
	cout << endl;

	for (int q = 0; q < 5; q++) {
		int x; cin >> x;
		if (hash.Search(x)) cout << "FOUND\n";
		else cout << "NOt FOUND\n";
	}
	hash.printHash();


}