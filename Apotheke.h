#pragma once

#include <vector>
#include "Apotheke.h"
#include "Medicament.h"

using namespace std;

class Apotheke
{
private:
	
	vector<Medicament> apotheke;

public:
	
	// Constructor farmacie care creeaza un vector vid
	explicit Apotheke();


	//Verifica daca elememtul cu numele "name" dat ca parametru exista in repository	
	bool exist_med(string name);

	
	//Adauga un element de tip Medicament in vector 
	void add_medicament(string name, double concentration, double preis, int anz);

	//Elimina din repository medicamentul cu numele "name" dat ca paramteru
	void remove_medicament(string name);

	//Returneaza numarul de elemente
	int size();

	//Returneaza toate elementele din repository
	vector<Medicament> getApotheke();
};