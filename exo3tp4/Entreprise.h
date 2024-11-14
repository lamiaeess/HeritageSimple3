#pragma once
#include "Employe.h"
class Entreprise
{
private:
	static const int Maxemployee = 10;
	Employe* employe[Maxemployee];
	int nbemployee;
public:
	Entreprise();
	void Ajouteremploye(Employe* emp);
	float CalculerSommeSalaire() const;

};

