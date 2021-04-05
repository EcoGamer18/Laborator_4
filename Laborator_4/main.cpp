#include "teste.h"
#include "teste_repo.h"
#include "teste_service.h"
#include "NumarComplex.h"
#include "UI.h"
#include "Repository.h"
#include <iostream>

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
		case 0:
			break;
		default:
			std::cout << "Optiunea data nu e valida.\n";
		}
	}while (varianta != 0);
	return 0;
}