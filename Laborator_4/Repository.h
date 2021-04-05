#pragma once
#include<stack>
#include "NumarComplex.h"

class Repository {
private:
	std::stack<NumarComplex> elem;

public:

	void add(NumarComplex& nr);

	void update(int poz, float parteReala, float parteImaginara);

	void remove(int poz);

	int find(NumarComplex& nr);

	std::stack<NumarComplex> getAll();

	int size();

	NumarComplex getFrom(int);

	~Repository();
};