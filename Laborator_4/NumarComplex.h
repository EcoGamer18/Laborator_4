#pragma once
#pragma warning(disable : 4996)
/*
Să se defineasca, 
implementeze 
si testeze una din clasele de mai jos.  
Constructor cu parametri, 
set-eri, get-eri, destructor – LIVE (6 puncte) 
Restul metodelor – TEMA (4 puncte)
*/

class NumarComplex {
private:
	float parteReala, parteImaginara;

public:
	NumarComplex();
	NumarComplex(float);
	NumarComplex(float, float);
	NumarComplex(const NumarComplex&);
	~NumarComplex();

	float getParteReala();
	float getParteImaginara();
	void setParteReala(float);
	void setParteImaginara(float);

	NumarComplex& operator=(const NumarComplex&);
	NumarComplex operator+(const NumarComplex&);
	NumarComplex operator-(const NumarComplex&);
	NumarComplex operator*(const NumarComplex&);
	NumarComplex operator/(const NumarComplex&);
	bool operator==(const NumarComplex&);

	float Modul();

	char* toString();
};