#pragma once
#include <list>
using namespace std;
class hashTable
{
private:
	int size;
	list<int>* chain;
public:
	void addvalue(int);
	hashTable(int);
	int	Hash(int) const;
	void deletevalue(int);
	void printHash() const;
	bool Search(int x);



};

