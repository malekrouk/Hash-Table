#include "hashTable.h"
#include<iostream>
using namespace std;
void hashTable :: addvalue(int x)
{
	chain[Hash(x)].push_back(x); 
}

hashTable::hashTable(int x) 
{
	size=x;
	chain = new list<int>[size]; 
}

int hashTable::Hash(int x) const
{
	return (x % size); 
}
void hashTable::printHash() const
{
	for (int i = 0; i < size; i++)
	{
		for (auto& u : chain[i]) cout << u << ' ';
		cout << endl;
	}
}
	void hashTable:: deletevalue(int x)
{

	list<int>::iterator counter;
	for (counter = chain[Hash(x)].begin(); counter != chain[Hash(x)].end(); counter++)	
	{
		if (*counter == x) 
			chain[Hash(x)].erase(counter);	
		
	}
}
	bool hashTable::Search(int x)
	{
		for (auto u : chain[x % size]) if (u == x) return 1;
		return 0;
	}
