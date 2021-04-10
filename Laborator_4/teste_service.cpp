#include "teste_service.h"
#include "Repository.h"
#include "Service.h"
#include <assert.h>
#include <utility>
#include <iostream>
#include <stack>
#include <vector>

Repository prep() {
	NumarComplex nr1(5, 1);
	NumarComplex nr2(6);
	NumarComplex nr3;
	NumarComplex nr4(1, 2);
	NumarComplex nr5(1, 2);
	NumarComplex nr6(1, 2);
	NumarComplex nr7(4, 3);
	NumarComplex nr8(-1, 2);
	NumarComplex nr9(4, -3);

	Repository repo;
	repo.add(nr1);
	repo.add(nr2);
	repo.add(nr3);
	repo.add(nr4);
	repo.add(nr5);
	repo.add(nr6);
	repo.add(nr7);
	repo.add(nr8);
	repo.add(nr9);

	return repo;
}

void test_deter_maxim() {
	Repository repo=prep();
	Service service(repo);

	assert(service.deter_maxim() == 6);
}

void test_secv_egale() {
	Repository repo = prep();
	Service service(repo);

	std::pair <int, int> result1(3, 3);
	std::pair <int, int> result2 = service.secv_egale();

	assert(result1 == result2);
}


void test_apartine_cerc_geometric()
{	
	Repository repo = prep();
	Service service(repo);

	std::stack <int> re;
	int aux[] = { 0,1,3,4,5,6 };
	for (int i = 0; i < 6; i++)
		re.push(aux[i]);
	std::stack <int> result =service.apartine_cerc_geometric();
	
	assert(service.CompareStack(re, result) == 0);
}

void run_all() {
	test_deter_maxim();
	test_secv_egale();
	test_apartine_cerc_geometric();
}