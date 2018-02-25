#include "Individu.h"
#include "GestionFichier.h"


using namespace std;

int main() {

	Individu test("001","Kleinclaus","Florent","Etudiant",18,02,1994);
	string cheminFichier = "../Files/test.txt";

	//SauvegardeIndividu(test,cheminFichier);
	cout << "Lecture totale" << endl;
	LectureFichierIndividus(cheminFichier);
	cout << "Lecture unitaire" << endl;
	LectureFichierIndividu(cheminFichier);
	
	system("pause");

	return 0;
}