#include "Medicament.h"

Medicament::Medicament(string name, double concentration, double preis, int anz)
{
	this->name = name;
	this->concentration = concentration;
	this->preis = preis;
	this->anz = anz;
}

string Medicament::getName()
{
	return name;
}

void Medicament::setName(string name)
{
	this->name = name;
}


double Medicament::getConcentration()
{
	return concentration;
}

void Medicament::setConcentration(double concentration)
{
	this->concentration = concentration;
}

double Medicament::getPreis()
{
	return preis;
}

void Medicament::setPreis(double preis)
{
	this->preis = preis;
}

int Medicament::getAnz()
{
	return anz;
}

void Medicament::setAnz(int anz)
{
	this->anz = anz;
}
