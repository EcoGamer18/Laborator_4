#include "Repository.h"
#include "teste_repo.h"
#include<assert.h>
#include<iostream>

void test_repo_adaugare() {
	NumarComplex nr1(5, 1);
	NumarComplex nr2(6);
	NumarComplex nr3;
	NumarComplex nr4(1, 2);
	NumarComplex nr5(4, 3);

	Repository repo;
	repo.add(nr1);
	repo.add(nr2);
	repo.add(nr3);
	assert(repo.size() == 3);
	assert(repo.find(nr1) == 1);
	assert(repo.find(nr2) == 1);
	assert(repo.find(nr3) == 1);
	repo.add(nr4);
	repo.add(nr5);
	assert(repo.size() == 5);
}


void test_repo_all() {
	test_repo_adaugare();
}