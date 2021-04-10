#pragma once
#pragma warning(disable : 4996)

/*
Lab 4

Să se defineasca, 
implementeze 
si testeze una din clasele de mai jos.  
Constructor cu parametri, 
set-eri, get-eri, destructor – LIVE (6 puncte) 
Restul metodelor – TEMA (4 puncte)

-------------------------------------------------------
Lab 5

Folosind entitatea definita la laboratorul 4 
(NumarComplex, Patrat, Triunghi, etc.), 
denumita acum ENTITATE, 
sa se creeze o aplicatie 
care sa permita gestionarea mai multor astfel de ENTITATI: 
	-Introducerea informatiilor despre mai multe ENTITATI 
		si salvarea lor intr-un sir – LIVE (2p) 
	-Afisarea informatiilor despre toate entitatile – LIVE (2p) 
	-Determinarea celei mai mari entitati 
		– TEMA (implementare - 1p, testare – 1p) 
	-Identificarea entitatilor situate [complet] 
		in cadranul 1 de pe cercul geometric 
		TEMA (implementare - 0.75p, testare – 0.75p) 
	-Identificarea celei mai lungi secvente de entitati egale 
		TEMA (implementare - 0.75p, testare – 0.75p) 
	-Inchiderea aplciatiei – LIVE (1p) 

Pentru definirea unui container cu obiecte se pot folosesi: 
	-fie siruri alocate static (punctaj standard) 
	-fie siruri alocatedinamic(1p bonus)

-----------------------------------------------------------
Lab 6


Sa se modifice problema de la laboratorul 5 
prin folosirea containerilor predefiniti din stl.  
	-Introducerea informatiilor despre mai multe ENTITATI 
		si salvarea lor intr-un sir – LIVE (2p) 
	-Afisarea informatiilor despre toate entitatile – LIVE (2p) 
	-Determinarea celei mai mari entitati 
		– TEMA (implementare - 1p, testare – 1p) 
	-Identificarea  entitatilor  situate  [complet]  
		in  cadranul  1  de  pe  cercul  geometric  
		TEMA (implementare - 0.75p, testare – 0.75p) 
	-Identificarea celei mai lungi secvente de entitati egale 
		TEMA (implementare - 0.75p, testare – 0.75p) 
	-Inchiderea aplciatiei – LIVE (1p) 
In ceea ce priveste containeri din stl se pot folosi: 
	-Vectori sau liste (punctaj obisnuit) 
	-Stive,cozi, containere associative(bonus 1p)
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
	NumarComplex& operator+=(const NumarComplex&);

	NumarComplex operator-(const NumarComplex&);
	NumarComplex& operator-=(const NumarComplex&);

	NumarComplex operator*(const NumarComplex&);
	NumarComplex& operator*=(const NumarComplex&);

	NumarComplex operator/(const NumarComplex&);
	NumarComplex& operator/=(const NumarComplex&);

	bool operator==(const NumarComplex&);

	float Modul();

	char* toString();
};