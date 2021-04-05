#include "teste.h"
#include "teste_repo.h"
#include "NumarComplex.h"
#include "operations.h"
#include "Repository.h"
#include <iostream>
int main()
{
	all_tests();
	test_repo_all();
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
		case 2:
		{
			for (int i = 0; i < repo.size(); i++)
				std::cout << repo.getFrom(i).toString() << " ";
		}
		case 0:
			break;
		}
	}while (varianta != 0);
	return 0;
}