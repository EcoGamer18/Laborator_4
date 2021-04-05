#include "teste.h"
#include "teste_repo.h"
#include "teste_service.h"
#include "NumarComplex.h"
#include "UI.h"
#include "Repository.h"
#include "Service.h"
#include <iostream>
#include <utility>

int main()
{
	all_tests();//numarcomplex
	test_repo_all();//repo
	run_all();//service
	int varianta = 0;
	Repository repo(0);
	do {
		
		print_menu();
		std::cin >> varianta;
		switch (varianta) {
		case 1:
		{
			float r, i;
			std::cin >> r >> i;
			NumarComplex nr(r, i);
			repo.add(nr);
		}
			break;
		case 2:
		{
			for (int i = 0; i < repo.size(); i++)
				std::cout << repo.getFrom(i).toString() << "\n";
		}
			break;
		case 3:
		{
			Service service(repo);
			float result = service.deter_maxim().Modul();
			if (result == 0)
				std::cout << "Nu sunt entitati.\n";
			else
				std::cout << service.deter_maxim().toString();
		}
			break;
		case 4:
		{
			Service service(repo);
			std::pair <int, int> result = service.secv_egale();
			if (result.first == -1)
				std::cout << "Nu este o astfel de secventa";
			else
				std::cout << "Este o secventa de acest fel de lungime "<<result.second<<" cu numerele "<<repo.getFrom(result.first).toString();
		}
			break;
		case 5:
		{
			Service service(repo);
			std::cout << "Urmatoarele numere apatin primului cadran:\n";
			std::stack <int> result = service.apartine_cerc_geometric();
			while (!(result.empty())) {
				int t = result.top();
				std::cout << repo.getFrom(t).toString() << "\n";
				result.pop();
			}
		}
			break;
		case 0:
			break;
		default:
			std::cout << "Optiunea data nu e valida.\n";
		}
	}while (varianta != 0);
	return 0;
}