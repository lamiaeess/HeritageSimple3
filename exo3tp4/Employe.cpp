#include "Employe.h"

float Employe::valeurindice = 100.0f;

Employe::Employe(const string& Nomemploye, int mat, float indice) :
	Nom(Nomemploye), Matricule(mat), indiceSalarial(indice)
{}

void Employe::Afficher() const
{
    cout << "Nom: " << Nom << endl;
    cout << "Matricule: " << Matricule << endl;
    cout << "Indice Salarial: " << indiceSalarial << endl;
    cout << "Salaire: " << calculerSalaire() << endl;
}

float Employe::calculerSalaire() const
{
    return indiceSalarial * valeurindice;
}

void Employe::definirVlaeurIndice(float nvValeur)
{
    valeurindice = nvValeur;
}

bool Employe::estResponsable() const
{
    return isresponsable;
}

