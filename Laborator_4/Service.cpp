#include "Service.h"
#include <utility>
#include <stack>
#include <iostream>

Service::Service(Repository repo) {
	Repo = repo;
}

NumarComplex Service::deter_maxim() {
	NumarComplex maxim = NumarComplex(0, 0);
	for (int i = 0; i < Repo.size(); i++)
	{
		if (maxim.Modul() < Repo.getFrom(i).Modul())
			maxim = Repo.getFrom(i);
	}
	return maxim;
}


std::pair <int, int> Service::secv_egale() {
	int lung = 0, poz = -1, max_lung = 0, max_poz = -1;
	for (int i = 1; i < Repo.size(); i++) {
		if (Repo.getFrom(i - 1) == Repo.getFrom(i))
		{
			if (lung == 0)
			{

				lung = 2, poz = i - 1;
			}
			else
				lung++;
		}
		else {
			if (lung != 0) {
				if (lung > max_lung) {
					max_poz = poz;
					max_lung = lung;
				}
				lung = 0;
				poz = -1;
			}
		}
	}
	std::pair <int, int> result;
	result.first=max_poz;
	result.second=max_lung;
	return result;
}

std::stack <int> Service::apartine_cerc_geometric() {
	std::stack <int> result = {};
	for (int i = 1; i < Repo.size(); i++) {
		if (Repo.getFrom(i).getParteReala() / Repo.getFrom(i).Modul() >= 0 and
			Repo.getFrom(i).getParteImaginara() / Repo.getFrom(i).Modul() >= 0)
			result.push(i);
	}
	return result;
}