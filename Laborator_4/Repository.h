#pragma once

#include "NumarComplex.h"

class Repository {
private:
	int dimensiune;
	NumarComplex elem[100];
public:

	Repository();
	
	Repository(int lungime);

	void add(NumarComplex& nr);

	void update(int poz, float parteReala, float parteImaginara);

	void remove(int poz);

	int find(NumarComplex& nr);

	NumarComplex* getAll();

	int size();

	NumarComplex getFrom(int);

	~Repository();
};