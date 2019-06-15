#ifndef SINGLETON_H
#define SINGLETON_H
#include <iostream>

class Singleton
{
public:
	
	static Singleton* getInstance();
	void print();
	~Singleton();

private:

	Singleton();
	static Singleton* instance;
};

#endif // !SINGLETON_H
