#include "ApothekeController.h"

ApothekeController::ApothekeController()
{
	this->repository = Apotheke();
}


void ApothekeController::add_medicament(string name, double concentration, double preis, int anz)
{
	for (Medicament medicament : repository.getApotheke())
	{
		//daca medicamentul exista deja, atunci creste doar cantitatea
		if (medicament.getName() == name)
		{
			int aux = medicament.getAnz();
			aux = aux + 1;
			medicament.setAnz(aux);
		}
		else repository.add_medicament(name, concentration, preis, anz);
	}
}

void ApothekeController::remove_medicament(string name)
{
	//Caut medicamentul in repository
	if (repository.exist_med(name))
	{
		repository.remove_medicament(name);
	}
	else
	{
		cout << "Medicamentul introdus ca parametru nu se afla in repository sau a fost deja sters" << endl;
	}
}

void ApothekeController::change_med(string name, double preis)
{
	//Verific daca medicamentul exista
	if (repository.exist_med(name))
	{
		//Caut medicamentul in repository
		//Il salvez in aux si modific pretul
		for (Medicament medicament : repository.getApotheke())
		{
			if (medicament.getName() == name)
			{
				double aux = medicament.getPreis();
				aux = preis;
				medicament.setPreis(preis);
			}
		}
	}
}

void ApothekeController::search_str(string substr)
{
	string aux;
	int i, j, c;
	if (1 == 2) //substr != "")
	{
		//Pentru fiecare medicament, verific daca "substr" se afla in nume si il afisez
		for (Medicament medicament : repository.getApotheke())
		{
			aux = medicament.getName();
			if (aux.find(substr))
			{
				cout << aux << endl;
			}
		}
	}
	else
	{
		//Creez vector "name" de tip string care retine numele medicamentelor care au anz > 0, daca substr este gol
		vector<string> nume;
		c = 0;
		for (Medicament medicament : repository.getApotheke())
		{
			if (medicament.getAnz() > 0)
			{
				nume.push_back(medicament.getName());
				c++;
			}
		}
		
		//Sortez vectorul "name" crescator
		for (i = 0; i < c - 1; i++)
		{
			for (j = i; j < c; j++)
			{
				if (nume[i] < nume[j])
				{
					aux = nume[i];
					nume[i] = nume[j];
					nume[j] = aux;
				}
			}
		}
		
		//Afisez numele sortate
		for (i = 0; i < c; i++)
		{
			cout << nume[i] << endl;
		}
	}
}

void ApothekeController::less_med(int x)
{
	//Pentru fiecare medicament verific daca cantitatea este mai mica decat valoarea lui x
	//Daca da atunci afisez numele si cantitatea
	for (Medicament medicament : repository.getApotheke())
	{
		if (medicament.getAnz() < x)
		{
			cout << medicament.getName() << " " << "Cantitate: " << medicament.getAnz() << endl;
		}
	}
}

void ApothekeController::preis_group()
{
	vector<string> name = {};
	vector<double> preis = {};
	int c = 0;
	
	//Creez doi vectori, in care memorez numele respectiv pretul fiecarui element
	for (Medicament medicament : repository.getApotheke())
	{
		name.push_back(medicament.getName());
		preis.push_back(medicament.getPreis());
		c++;
	}

	//Pentru fiecare medicament caut toate medicamentele care au acelas pret si le afisez
	for (int i = 0; i <= c - 1; i++)
	{
		for (int j = i; j <= c; j++)
		{
			if (preis[i] == preis[j])
			{
				cout << "Pret: " << preis[i] << "   Medicamente: " << name[i] << endl;
			}
		}
	}
}
