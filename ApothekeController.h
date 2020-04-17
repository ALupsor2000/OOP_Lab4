#pragma once

#include <iostream>
#include "Apotheke.h"
#include <algorithm>
#include "Medicament.h"

using namespace std;

class ApothekeController
{
	friend class Apotheke;

private:
	Apotheke repository;

public:

	// Constructor pentru controller
	explicit ApothekeController();

	/*
	 *Adauga element nou in repository(Apotheke)
	 *name - numele medicamentului
	 *concentration - concentratia medicamentului
	*/
	void add_medicament(string name, double concentration, double preis, int anz);

	/*
	 *Sterege un medicament dupa nume, daca acesta exista
	 *Salveaza in vectorul auxiliar fiecare element
	 *care are numele diferit de cel dat ca parametru
	 *Apoi copiaza inpoi in repository fiecare element din vecotrul auxiliar
	 *string name = numele care urmeaza sa fie sters
	*/
	void remove_medicament(string name);

	/*
	 *Schimba pretul unui medicament dat ca parametru, daca acesta exista
	 *string name - numele medicamentului a carui pret urmeaza sa fie actualizat
	 *string preis - pretul cu care se actualizeaza
	*/
	void change_med(string name, double preis);

	/*
	 *Returneaza toate medicamentele care contin un substring dat ca parametru
	 *In cazul in care subtr este gol, returneaza taote medicamentele cu anz > 0 sortate dupa nume 
	 *string substr - Substringul care trebuie cautat in fiecare nume de medicament
	*/
	void search_str(string substr);

	/*
	 *Afiseaza numele si cantitate medicamentelor care au cantitatea mai mica decat "x"
	 *int x - Cantitea maxima pentru fiecare medicament
	*/
	void less_med(int x);

	/*
	 *Afiseaza medicamentele grupate dupa pret pe o linie
	*/
	void preis_group();
};

