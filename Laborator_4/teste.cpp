#include "teste.h"
#include "NumarComplex.h"
#include <cassert>
#include <iostream>

void teste_clasa()
{
	NumarComplex nr1(5, 2);
	NumarComplex nr2(3);
	NumarComplex nr3;
	NumarComplex nr4 = nr1;
	assert(nr1.getParteReala() == 5);
	assert(nr2.getParteReala() == 3);
	assert(nr3.getParteReala() == 0);
	assert(nr4.getParteReala() == 5);
	assert(nr1.getParteImaginara() == 2);
	assert(nr2.getParteImaginara() == 0);
	assert(nr3.getParteImaginara() == 0);
	assert(nr4.getParteImaginara() == 2);
}

void test_plus() {
	NumarComplex nr1(5, 2);
	NumarComplex nr2(3);
	NumarComplex nr5;
	nr5 = nr1 + nr2;
	assert(nr5.getParteReala() == 8);
	assert(nr5.getParteImaginara() == 2);
}

void test_minus() {
	NumarComplex nr1(5, 2);
	NumarComplex nr2(3,5);
	NumarComplex nr5;
	nr5 = nr1 - nr2;
	assert(nr5.getParteReala() == 2);
	assert(nr5.getParteImaginara() == -3);
}

void test_inmultire() {
	NumarComplex nr1(5, 2);
	NumarComplex nr2(2 ,3);
	NumarComplex nr5;
	nr5 = nr1 * nr2;
	assert(nr5.getParteReala() == 10-6);
	assert(nr5.getParteImaginara() == 15+4);
}

void test_impartire()
{
	NumarComplex nr1(20, -4);
	NumarComplex nr2(3, 2);
	NumarComplex nr3;
	nr3 = nr1 / nr2;
	assert(nr3.getParteReala() == 4);
	assert(nr3.getParteImaginara() == -4);

	NumarComplex nr4 = NumarComplex(2, 3);
	NumarComplex nr5 = NumarComplex(4,0);
	NumarComplex nr6;
	nr6 = nr4 / nr5;
	assert(nr6.getParteReala() == 0.5);
	assert(nr6.getParteImaginara() == 0.75);
}

void test_egalitate() {
	NumarComplex nr1(20, -4);
	NumarComplex nr2(3, 2);
	assert(!(nr1 == nr2));
	
	NumarComplex nr3(2, 2);
	NumarComplex nr4(2, 2);
	assert(nr3 == nr4);
}

void test_modul() {
	NumarComplex nr1(3, -4);
	assert(nr1.Modul() == 5);

	NumarComplex nr2(12, 5);
	assert(nr2.Modul() == 13);

	NumarComplex nr3(12, 1);
	assert(nr3.Modul() * nr3.Modul() == 145.0);
}

void test_toString() {
	NumarComplex nr1(3, -4);
	std::cout << nr1.toString();
}

void test_plus_egal() {
	NumarComplex nr1(20, -4);
	NumarComplex nr2(3, 2);
	nr1 += nr2;
	assert(nr1.getParteReala() == 23);
	assert(nr1.getParteImaginara() == -2);
}

void test_minus_egal() {
	NumarComplex nr1(20, -4);
	NumarComplex nr2(3, 2);
	nr1 -= nr2;
	assert(nr1.getParteReala() == 17);
	assert(nr1.getParteImaginara() == -6);
}

void test_inmultire_egal() {
	NumarComplex nr1(20, -4);
	NumarComplex nr2(3, 2);
	nr1 *= nr2;
	assert(nr1.getParteReala() == 60+8);
	assert(nr1.getParteImaginara() == -12+40);
}

void test_impartire_egal() {
	NumarComplex nr1(20, -4);
	NumarComplex nr2(3, 2);
	nr1 /= nr2;
	assert(nr1.getParteReala() == 4);
	assert(nr1.getParteImaginara() == -4);
}

void all_tests()
{
	teste_clasa();
	test_plus();
	test_minus();
	test_inmultire();
	test_impartire();
	test_egalitate();
	test_modul();
	//test_toString();
	test_plus_egal();
	test_minus_egal();
	test_inmultire_egal();
}