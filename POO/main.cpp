//Nom et prénom : Komi Michael Ivan
//Nom du programme : Application pour Agence Immobilière
//Date de création : 02/04/2024
//Date de dernière modification : 21/04/2024
/*Desciption du programme :Développement d'une Application pour Agence Immobilière. Développer une application permettant de mettre en application
toutes les notions que vous êtes en train de voir durant les séances de cours/TDs de Programmation Orienté Objet (appliquée au langage C++).*/


#include "BienImmobilier.h"
#include "Personne.h"
#include "Contrat.h"
#include "Maison.h"
#include "Appartement.h"
#include "Terrain.h"
#include "Client.h"
#include "Proprietaire.h"
#include "Locataire.h"
#include "Transaction.h"
#include "Agence.h"
#include <vector>
#include <iostream>
#include <memory> // Pour std::make_unique


int main() {

    std::cout << "----------------Exercie 01----------------" << std::endl;

    std::cout << "\n\n";

    // Instanciation d'objets pour tester les classes
    // Création des objets de sous-classes concrètes Maison et Appartement
    Maison maison1(1, "123 Rue de la Maison", 150.5, "Disponible", 4);
    Appartement appartement1(2, "456 Avenue de l'Appartement", 75.2, "Disponible", 3);


    Personne client1("Jean Dupont", "10 Rue du Client", "123456789");
    Personne proprietaire1("Alice Martin", "5 Boulevard du Proprietaire", "987654321");

    Contrat contrat1(1, "01/04/2024", "Location", "Duree de location: 1 an");

    // Appel des méthodes pour tester
    maison1.afficherDetails();
    appartement1.afficherDetails();

    client1.afficherInfos();
    proprietaire1.afficherInfos();

    contrat1.afficherContrat();
    contrat1.signerContrat();

    std::cout << "\n\n";

    std::cout << "----------------Exercie 02----------------" << std::endl;

    std::cout << "\n\n";

    // Création d'objets de sous-classes
    Maison maison(4, "15 rue du marche", 100.5, "Disponible", 2);
    Appartement appartement(3, "45 avenue de l'universite", 80.6, "Loue", 6);
    Terrain terrain(5, "79 rue du havre", 500.0, "Disponible", "Constructible");

    // Appel de la méthode héritée de la classe de base
    maison.afficherDetails();
    appartement.afficherDetails();
    terrain.afficherDetails();

    // Création d'objets de sous-classes Personne
    Client client("Simon Relley", "10 rue du College", "1212121212");
    Proprietaire proprietaire("Aude Astride", "8 boulevard du Stade", "3434343434");
    Locataire locataire("Stephane Curry", "23 rue du Savoir", "5656565656");

    // Appel de la méthode héritée de la classe de base
    client.afficherInfos();
    proprietaire.afficherInfos();
    locataire.afficherInfos();

    std::cout << "\n\n";

    std::cout << "----------------Exercie 03----------------" << std::endl;

    std::cout << "\n\n";

    // Utilisation de pointeurs de type BienImmobilier pour accéder aux méthodes virtuelles
    BienImmobilier* bien1 = &maison;
    BienImmobilier* bien2 = &appartement;
    BienImmobilier* bien3 = &terrain;

    // Appel des méthodes virtuelles pour afficher les détails spécifiques
    bien1->afficherDetailsSpecifiques(); 
    bien2->afficherDetailsSpecifiques(); 
    bien3->afficherDetailsSpecifiques(); 

    std::cout << "\n\n";

    std::cout << "----------------Exercie 04----------------" << std::endl;

    std::cout << "\n\n";

    // Test de la classe Contrat
    Contrat contrat2(5, "10/04/2024", "Location", "Duree de location: 2 an");

    // Essayez de signer le contrat deux fois pour provoquer une exception
    contrat2.signerContrat(); // Première signature réussie
    contrat2.signerContrat(); // Deuxième tentative - devrait générer une exception

    // Test de la classe Transaction
    Transaction transaction1(1, 1000.0, "01/04/2024");

    // Essayez d'effectuer la transaction deux fois pour provoquer une exception
    transaction1.effectuerTransaction(); // Première transaction réussie
    transaction1.effectuerTransaction(); // Deuxième tentative - devrait générer une exception

    std::cout << "\n\n";

    std::cout << "----------------Exercie 05----------------" << std::endl;

    std::cout << "\n\n";

  // Initialisation des objets Maison
    Maison maison3(1, "123 Rue de la Maison", 150.5, "Disponible", 4);
    Maison maison4(2, "456 Avenue de la Maison", 200.0, "Disponible", 3);

    // Initialisation des objets Appartement
    Appartement appartement3(3, "789 Avenue de l'Appartement", 75.2, "Loue", 2);
    Appartement appartement4(4, "1012 Rue de l'Appartement", 100.0, "Disponible", 3);

    // Comparaison des surfaces de deux maisons
    std::cout << "Comparaison des surfaces des maisons : " << comparerSurface(maison3, maison4) << std::endl;

    // Dans cet exemple, nous utilisons le template comparerSurface avec des objets de types différents (Maison et Appartement). Cela nous permet de vérifier la flexibilité du template
    // Comparaison des surfaces d'une maison et d'un appartement
    std::cout << "Comparaison des surfaces entre une maison et un appartement : " << comparerSurface(maison3, appartement4) << std::endl;





    /*-------------------------------------------------- EXERCICE 06 -------------------------------------------------- */


    // Création d'un client
    Client client5("Jean", "10 Rue du Cart", "1234567");

    // Création d'une maison
    Maison maison5(1, "153 Rue de la Maison", 101.5, "Disponible", 2);

    // Création d'un contrat entre le client et la maison
    Contrat contratClientMaison(1, "01/04/2024", "Location", "Duree de location: 1 an");

    // Ajout du contrat au client
    client.ajouterContrat(contratClientMaison);

    // Ajout du contrat à la maison
    maison.ajouterContrat(contratClientMaison);


    // Création de quelques biens immobiliers
    std::unique_ptr<Maison> maison6 = std::make_unique<Maison>(1, "123 Rue de la Maison", 150.5, "Disponible", 3);
    std::unique_ptr<Appartement> appartement6 = std::make_unique<Appartement>(2, "456 Avenue de l'Appartement", 75.2, "Loue", 2);

    // Création de quelques personnes
    std::unique_ptr<Personne> personne6 = std::make_unique<Personne>("John Doe");
    std::unique_ptr<Personne> personne7 = std::make_unique<Personne>("Jane Doe");

    // Création de l'agence
    Agence agence;

    // Ajout des biens immobiliers à l'agence
    agence.ajouterBienImmobilier(std::move(maison6));
    agence.ajouterBienImmobilier(std::move(appartement6));

    // Ajout des personnes à l'agence
    agence.ajouterPersonne(std::move(personne6));
    agence.ajouterPersonne(std::move(personne7));

    // Suppression d'un bien immobilier
    agence.supprimerBienImmobilier(1);

    // Suppression d'une personne
    agence.supprimerPersonne("Jane Doe");

    return 0;
}
