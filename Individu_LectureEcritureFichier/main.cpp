#include "Individu.h"
#include "GestionFichier.h"

using namespace std;

int main() {

	//Individu test("001","Kleinclaus","Florent","Etudiant",18,02,1994);
	const string CHEMIN_FICHIER = "../Files/test.txt";
	//SauvegardeIndividu(test,CHEMIN_FICHIER);
	/* 
	//test sans boucle
	cout << "Lecture totale" << endl;
	LectureFichierIndividus(CHEMIN_FICHIER);
	cout << "Lecture unitaire" << endl;
	LectureFichierIndividu(CHEMIN_FICHIER);
	*/
	char deroul = ' ';

	cout << "Bienvenue dans le programme de lecture ou d ecriture dans un fichier de Florent Kleinclaus" << endl;

	while (deroul != 'q')
	{
		Individu mIndividu;
		cout << endl;
		cout << "Que voulez vous faire ?" << endl;
		cout << "a pour afficher la lecture complete du fichier texte." << endl;
		cout << "n pour creer un nouvel individu et l'ajouter au fichier." << endl;
		cout << "u pour afficher un seul individu parmi ceux du fichier texte." << endl;
		cout << "q pour quitter le programme." << endl;
		cin >> deroul;
		cout << endl;
		switch (deroul) {
		case 'a':
			system("cls");
			LectureFichierIndividus(CHEMIN_FICHIER);
			break;
		case 'n':
			system("cls");
			mIndividu.creer();
			SauvegardeIndividu(mIndividu, CHEMIN_FICHIER);			
			break;
		case 'u':
			system("cls");
			LectureFichierIndividu(CHEMIN_FICHIER);
			break;
		case 'q':
			break;
		default:
			system("cls");
			break;
		}
	}

	
	system("pause");

	return 0;
}