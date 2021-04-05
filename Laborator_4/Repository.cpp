#include "Repository.h"

Repository::Repository() {
	dimensiune = 0;
}

Repository::Repository(int lungime) {
	dimensiune = lungime;
}

void Repository::add(NumarComplex& nr) {
	elem[dimensiune++] = nr;
	
}

int Repository::find(NumarComplex& nr) {
	for (int i = 0; i < dimensiune; i++)
		if (elem[i] == nr)
			return i;
	return -1;
}

int Repository::size() {
	return dimensiune;
}

NumarComplex Repository::getFrom(int poz) {
	return elem[poz];
}

NumarComplex* Repository::getAll() {
	return elem;
}

Repository::~Repository() {
	dimensiune = 0;
}

void Repository::update(int poz, float parteReala, float parteImaginara) {
	if (poz >= 0 and poz < dimensiune) {
		elem[poz].setParteReala(parteReala);
		elem[poz].setParteImaginara(parteImaginara);
	}
}

void Repository::remove(int poz) {
	if (poz >= 0 and poz < dimensiune) {
		for (int i = poz + 1; i < dimensiune; i++)
			elem[i - 1] = elem[i];
		dimensiune--;
	}
}