#pragma once
#include "Employe.h"

class Responsable :
    public Employe
{
private:
    static const int Max_subordonee = 10;
    Employe* subordonne[Max_subordonee];
    int nbsubordonnee; 
public:
    Responsable(const string& nom, int mat, float indice);
    void Ajoutersubordonee(Employe* emp);
    void AfficherSubordonneeDirect() const;
    void AfficherSubordonneeIndirect() const;
    float calculerSalaire() const override;


};

