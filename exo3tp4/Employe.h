#pragma once
#include <string>
#include<iostream>
using namespace std;
class Employe
{
private:
	int Matricule;
	float indiceSalarial;
	static float valeurindice;
protected:
	string Nom;
	bool isresponsable;
public:
	Employe(const string& Nomemploye, int mat, float indice);
	void Afficher() const;
	virtual float calculerSalaire() const;
	static void definirVlaeurIndice(float nvValeur);
	bool estResponsable() const;
};

