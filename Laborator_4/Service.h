#pragma once
#include "Repository.h"
#include "NumarComplex.h"
#include <iostream>
#include <utility>
#include <stack>  


class Service
{
	private:
		Repository Repo;
	public:
		Service(Repository repo);
		NumarComplex deter_maxim();
		std::pair <int, int> secv_egale();
		std::stack <int> apartine_cerc_geometric();
		void PrintStack(std::stack<int> s);
		int CompareStack(std::stack<int> s1, std::stack<int> s2);
};

