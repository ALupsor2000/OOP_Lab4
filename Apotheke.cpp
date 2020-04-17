#include "Apotheke.h"

Apotheke::Apotheke()
{
	apotheke = {};

}

bool Apotheke::exist_med(string name) 
{
	int size = apotheke.size();
	int i = 0;
	while (i < size)
	{
		if (apotheke[i].getName() == name)
		{
			return true;
		}
		else i++;
	}
	return false;
}

void Apotheke::add_medicament(string name, double concentration, double preis, int anz)
{
	apotheke.push_back(Medicament(name, concentration, preis, anz));
}

void Apotheke::remove_medicament(string name)
{
	int size = apotheke.size();
	int i = 0;
	while (i < size)
	{
		if (apotheke[i].getName() == name)
		{
			apotheke.erase(apotheke.begin() + i - 1);
		}
		i++;
	}
}

int Apotheke::size()
{
	return apotheke.size();
}

vector<Medicament> Apotheke::getApotheke()
{
	return apotheke;
}
