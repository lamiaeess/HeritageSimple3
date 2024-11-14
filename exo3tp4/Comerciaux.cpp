#include "Comerciaux.h"

Comerciaux::Comerciaux(const string& Nom, int mat, float indice, float salairefixe, float pourcent)
	:Employe(Nom, mat, indice), fixe(salairefixe), pourcentage(pourcent), ventederniermois(0.0)
{}

void Comerciaux::mettreAjour(float ventes)
{
	ventederniermois = ventes;
}

float Comerciaux::calculerSalaire() const
{
	float commision = (ventederniermois * pourcentage) / 100.0f;
	return fixe + commision;
}


