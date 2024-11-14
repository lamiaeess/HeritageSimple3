#pragma once
#include "Employe.h"
class Comerciaux :
    public Employe
{
private:
    float fixe;
    float pourcentage;
    float ventederniermois;
public:
    Comerciaux(const string& Nom, int mat, float indice, float salairefixe, float pourcent);
    void mettreAjour(float ventes);
    float calculerSalaire() const override;

};

