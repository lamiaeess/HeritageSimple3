#include "Responsable.h"

Responsable::Responsable(const string& nom, int mat, float indice)
	: Employe(nom,mat,indice)
{
	isresponsable = true;
	nbsubordonnee = 0;

}

void Responsable::Ajoutersubordonee(Employe* emp)
{
	if (nbsubordonnee < Max_subordonee)
	{
		subordonne[nbsubordonnee] = emp;
		nbsubordonnee++;
	}
	else {
		cout << "Limite subordonnee atteind" << endl;
	}
}

void Responsable::AfficherSubordonneeDirect() const
{
	cout << "subordonne direct de " << Nom << ":" << endl;
	for (int i = 0; i < nbsubordonnee; i++)
	{
		subordonne[i]->Afficher();
		cout << endl;
	}

}

void Responsable::AfficherSubordonneeIndirect() const
{
	cout << "subordonnee  indirect " << Nom << ":" << endl;
	for (int i = 0; i < nbsubordonnee; i++)
	{
		subordonne[i]->Afficher();
		cout << endl;
		//on verifie si le subordonnee est une instance de responsable
		if (subordonne[i]->estResponsable())
		{
			Responsable* res = (Responsable*)subordonne[i];
			res->AfficherSubordonneeDirect();
			res->AfficherSubordonneeIndirect();
		}
		

	}

}

float Responsable::calculerSalaire() const
{
	return Employe::calculerSalaire() + 200;
}




