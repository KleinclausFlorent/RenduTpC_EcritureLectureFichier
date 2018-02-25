#include "GestionFichier.h"

//BUT : Ecrire dans un fichier txt les données membres d'un individu
//ENTREE : Individu et chemin fichier txt
//SORTIE : Fichier text avec individu ajouter à la fin du document
void SauvegardeIndividu(Individu mInd, string mChemin)
{
	ofstream fichier(mChemin, ios::app); // on ouvre le fichier de lecture
	if (fichier) // si l'ouverture a réussi
	{
		fichier << ';' << endl;
		fichier << mInd.getNumSecu() << endl;
		fichier << mInd.getNom() << endl;
		fichier << mInd.getPrenom() << endl;
		fichier << mInd.getDateNaissance() << endl;
		fichier << mInd.getProfession() << endl;
		fichier.close(); // on ferme le fichier
	}
	else {
		cout << "Problème avec le fichier !" << endl;
	}
	
}

//BUT : Lire un fichier txt contenant des individus et les afficher
//ENTREE : chemin fichier txt
//SORTIE : Contenu afficher à l'ecran
void LectureFichierIndividus(string mChemin)
{
	ifstream fichier(mChemin, ios::in); // on ouvre le fichier de lecture
	if (fichier) // si l'ouverture a réussi
	{
		string ligne;
		int nInd = 0;
		while (getline(fichier, ligne))
		{
			if (ligne != ";")
			{
				cout << ligne << endl;
			}
			else {
				nInd++;
				cout << "Individu numero " << nInd << endl;
			}
		}
		fichier.close(); // on ferme le fichier
	}
	else {
		cout << "Problème avec le fichier !" << endl;
	}
}



//BUT : Lire un fichier txt contenant des individus et afficher uniquement un individu en fct du choix utilisateur
//ENTREE : chemin fichier txt / choix utilisateur
//SORTIE : Individu demandé afficher à l'ecran
void LectureFichierIndividu(string mChemin)
{
	ifstream fichier(mChemin, ios::in); // on ouvre le fichier de lecture
	if (fichier) // si l'ouverture a réussi
	{
		string ligne;
		int compteurPV = 0;
		int choixUt = 0;
		while (getline(fichier, ligne))
		{
			if (ligne == ";")
			{
				compteurPV++;
			}
		}
		cout << "Il y a " << compteurPV << " individus dans le fichier." << endl;
		cout << "Lequel voulez-vous afficher ?" << endl;
		cin >> choixUt;

		fichier.clear();
		fichier.seekg(0, ios::beg);

		for (int i = 0; i < choixUt; i++) {
			fichier.ignore(numeric_limits<int>::max(), ';'); //Ignore tout les caractères jusqu'à un ';' Permet d'ignorer les utilisateurs
		}
		compteurPV = 0;
		while (getline(fichier, ligne) && compteurPV < 1 )
		{
			if (ligne != ";")
			{
				cout << ligne << endl;
			}
			else {
				compteurPV++;
			}
		}
		fichier.close(); // on ferme le fichier
	}
	else {
		cout << "Problème avec le fichier !" << endl;
	}

}


