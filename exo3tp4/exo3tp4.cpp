// exo3tp4.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Responsable.h"
#include"Comerciaux.h"
#include"Entreprise.h"


int main()
{
    // Définir la valeur de l'indice
    Employe::definirVlaeurIndice(150.0f);

    // Créer une entreprise
    Entreprise entreprise;

    // Créer des employés
    Responsable* res = new Responsable("Alice", 1, 2.0);
    Comerciaux* com1 = new Comerciaux("Bob", 2, 1.5, 1000, 10); // Fixe de 1000 et pourcentage de 10%
    Comerciaux* com2 = new Comerciaux("Charlie", 3, 1.8, 1200, 15); // Fixe de 1200 et pourcentage de 15%

    // Ajouter des subordonnés
    res->Ajoutersubordonee(com1);
    res->Ajoutersubordonee(com2);

    // Mettre à jour les ventes pour les commerciaux
    com1->mettreAjour(5000); // Ventes de 5000
    com2->mettreAjour(7000); // Ventes de 7000

    // Ajouter les employés à l'entreprise
    entreprise.Ajouteremploye(res);
    entreprise.Ajouteremploye(com1);
    entreprise.Ajouteremploye(com2);

    // Afficher la somme des salaires
    cout << "Somme des salaires a verser : " << entreprise.CalculerSommeSalaire() << endl;

    // Libérer la mémoire (si nécessaire)
    delete res;
    delete com1;
    delete com2;

    return 0;
}

