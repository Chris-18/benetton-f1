#include <exception>
#include <string>
#include <set>
#include <vector>
using namespace std;

#include "HighPriority.h"

void HighPriority::shipSomething(Destination* aDest, ContainerSet* aContainers, string aName) {
	
	ContainerRoute * a = new ContainerRoute(aContainers) ; 
	vector<Destination*> v ; 
	v.push_back(aDest) ;
	a->setStops(&v) ;
	// if name already exist ?
	_routes.insert(std::pair<string,ContainerRoute*>(aName,a)) ;

	try{
		_routes.at(aName)->transportCargo() ;
	}
	catch(const std::out_of_range& e){
		//tried shipping something but didn't work

	}

}

HighPriority::~HighPriority(){
	//iterate through map to delete
	_routes.clear();
}

ContainerSet* HighPriority::get(string aName) {
	// throw "Not yet implemented";
	ContainerRoute* r = _routes.at(aName) ;
	if (r == NULL) return NULL ; 

	TransportMode* t = r->getTransportMode() ; 
	if (t != NULL){
		if (t->getOnRoute() == false){
			return r->getContainers() ; 
		}
	} 

	return NULL ; 
}

void HighPriority::remove(string aName) {
	// throw "Not yet implemented";
	
	ContainerRoute* r = _routes.at(aName) ;
	if (r  == NULL) {
		cout<<"404 Item not found. \n" ; 
	} 
	_routes.erase(aName) ;
}

