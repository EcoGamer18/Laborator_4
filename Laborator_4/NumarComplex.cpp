#include "NumarComplex.h"
#include<cmath>
#include<cstring>
#include <stdio.h>

NumarComplex::NumarComplex() {
	parteReala = 0;
	parteImaginara = 0;
}

NumarComplex::NumarComplex(float real) {
	parteReala = real;
	parteImaginara = 0;
}

NumarComplex::NumarComplex(float real, float imag) {
	parteReala = real;
	parteImaginara = imag;
}

NumarComplex::NumarComplex(const NumarComplex& nr) {
	parteReala = nr.parteReala;
	parteImaginara = nr.parteImaginara;
}

float NumarComplex::getParteReala()
{
	return parteReala;
}

float NumarComplex::getParteImaginara()
{
	return parteImaginara;
}

void NumarComplex::setParteReala(float nr) {
	parteReala = nr;
}

void NumarComplex::setParteImaginara(float nr) {
	parteImaginara = nr;
}

NumarComplex::~NumarComplex()
{
	parteReala = 0;
	parteImaginara = 0;
}

NumarComplex& NumarComplex::operator=(const NumarComplex& nr) {
	parteReala = nr.parteReala;
	parteImaginara = nr.parteImaginara;
	return *this;
}

NumarComplex NumarComplex::operator+(const NumarComplex& nr) {
	float auxR= parteReala +nr.parteReala;
	float auxI= parteImaginara + nr.parteImaginara;
	return NumarComplex(auxR, auxI);
}

NumarComplex NumarComplex::operator-(const NumarComplex& nr) {
	float auxR = parteReala - nr.parteReala;
	float auxI = parteImaginara - nr.parteImaginara;
	return NumarComplex(auxR, auxI);
}

NumarComplex NumarComplex::operator*(const NumarComplex& nr) {
	float auxR = parteReala * nr.parteReala - parteImaginara * nr.parteImaginara;
	float auxI = parteImaginara * nr.parteReala + nr.parteImaginara * parteReala;
	return NumarComplex(auxR, auxI);
}

NumarComplex NumarComplex::operator/(const NumarComplex& nr) {
	if (nr.parteImaginara != 0)
	{
		NumarComplex numitor;
		NumarComplex aux = NumarComplex(nr.parteReala, -nr.parteImaginara);
		numitor = (*this) * aux;
		float numarator = nr.parteReala * nr.parteReala + nr.parteImaginara * nr.parteImaginara;
		return NumarComplex(numitor.parteReala / numarator, numitor.parteImaginara / numarator);
	}
	else
	{
		float numarator = nr.parteReala;
		return NumarComplex(parteReala / numarator, parteImaginara / numarator);
	}
}

bool NumarComplex::operator==(const NumarComplex& nr) {
	return parteReala == nr.parteReala && parteImaginara == nr.parteImaginara;
}

float NumarComplex::Modul() {
	return sqrt(parteImaginara * parteImaginara + parteReala * parteReala);
}

char* NumarComplex::toString() {
	//in constructie
	char *aux = new char[100];
	sprintf( aux, "%f",parteReala);
	if(parteImaginara >0)
		strcat(aux, "+");
	char *img = new char[10];
	sprintf(img, "%f", parteImaginara);
	strcat(aux, img);
	strcat(aux, "*i");
	return aux;
}