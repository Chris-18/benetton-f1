#ifndef TestingCenter_h
#define TestingCenter_h

#include "../Parts/include/Part.h"
#include "WindTunnelCounter.h"
#include "Memento.h"
#include <vector>
#include <iostream>

using namespace std;

class Memento;
class WindTunnelCounter;

class TestingCenter
{
protected:
	vector<Part*> PartList;
	WindTunnelCounter* WTCounter;
	vector<Memento*> MementoList;

public:
	TestingCenter(WindTunnelCounter* WTCounter);
	void addToTestQueue(Part* part);
	Memento* createMemento();
	void setMemento(Memento* m);
	virtual void TestParts(bool, string TestName)=0;
	virtual void printTestReport(Part*, double, string TestName) = 0;
};
#endif // !TestingCenter_h