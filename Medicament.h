#pragma once

#include <string>;
using namespace std;

class Medicament
{
private:
	
	string name; //numele
	double concentration, preis; //concentratie si pret
	int anz; //cantitate

public:
	
	// Constructor medicament
	Medicament(string name, double concentration, double preis, int anz);

	// Functie care returneaza numele
	string getName();

	// Procedura care seteaza numele
	void setName(string name);

	//Functie care returneaza concentratia
	double getConcentration();

	//Procedura care seteaza concentratia
	void setConcentration(double concentration);
	
	//Functie care returneaza pretul
	double getPreis();

	//Procedura care seteaza pretul
	void setPreis(double preis);

	//Functie care returneaza cantitatea
	int getAnz();

	//Procedura care seteaza cantitatea
	void setAnz(int anz);
};

