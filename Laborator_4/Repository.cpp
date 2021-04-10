#include "Repository.h"


void Repository::add(NumarComplex& nr) {
	elem.push(nr);	
}

int Repository::find(NumarComplex& nr) {
	std::stack<NumarComplex> aux = elem;
	while (!(aux.empty()))
	{
		if (aux.top() == nr)
			return 1;
		aux.pop();
	}
	return 0;
}

int Repository::size() {
	return elem.size();
}

NumarComplex Repository::getFrom(int poz) {
	if (poz >= 0 and poz < elem.size()){
		std::stack<NumarComplex> aux = elem;
		for (int i = elem.size() - 1; i > poz; i--)
			aux.pop();
		return aux.top();
	}
	return -1;
}

std::stack<NumarComplex> Repository::getAll() {
	return elem;
}

Repository::~Repository() {
	while (!(elem.empty()))
		elem.pop();
}

void Repository::update(int poz, float parteReala, float parteImaginara) {
	if (poz >= 0 and poz < elem.size()) {
		std::stack<NumarComplex> aux;
		for (int i = elem.size() - 1; i >= poz; i--)
		{
			aux.push(elem.top());
			elem.pop();
		}
		elem.push(NumarComplex(parteReala, parteImaginara));
		while (!(aux.empty()))
		{
			elem.push(aux.top());
			aux.pop();
		}
	}
}

void Repository::remove(int poz) {
	if (poz >= 0 and poz < elem.size()) {
		std::stack<NumarComplex> aux;
		for (int i = elem.size() - 1; i >= poz; i--)
		{
			aux.push(elem.top());
			elem.pop();
		}
		while (!(aux.empty()))
		{
			elem.push(aux.top());
			aux.pop();
		}
	}
}