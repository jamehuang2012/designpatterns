#include "AbstractFactory.h"
#include <iostream>
using namespace std;
#define PRODUCTION_ONE
int main(int argc,char* argv[])
{
#ifdef PRODUCTION_ONE
	AbstractFactory* cf1 = new ConcreteFactory1();
	cf1->CreateProductA();
	cf1->CreateProductB();
#else
	AbstractFactory* cf2 = new ConcreteFactory2();
	cf2->CreateProductA();
	cf2->CreateProductB();
#endif
	return 0;
}
