#include "Entreprise.h"

Entreprise::Entreprise() : nbemployee(0)
{
}

void Entreprise::Ajouteremploye(Employe* emp)
{
	if (nbemployee < Maxemployee) {
		employe[nbemployee] = emp;
		nbemployee++;
	}
	else {
		cout << "Limite d'employe tteint" << endl;
	}
}

float Entreprise::CalculerSommeSalaire() const
{
	float total = 0.0f;
	for (int i = 0; i < nbemployee; ++i)
	{
		total += employe[i]->calculerSalaire();
	}
	return total;
}
