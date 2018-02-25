#include "Individu.h"


//BUT : Constructeur de la classe initialise les données membres
//ENTREE : valeur par default ou valeurs placées en argument
//Sortie : données membres initialisées
Individu::Individu(std::string mNumSecu, std::string mNom, std::string mPrenom, std::string mProfession, int mJNaissance, int mMNaissance, int mANaissance)
{
	NumeroSecuriteSociale = mNumSecu;
	Nom = mNom;
	Prenom = mPrenom;
	Profession = mProfession;
	jour_Naissance = mJNaissance;
	mois_Naissance = mMNaissance;
	annee_Naissance = mANaissance;
}

//Mutateurs
	//Getters
std::string Individu::getNom() const
{
	return Nom;
}

std::string Individu::getPrenom() const
{
	return Prenom;
}

std::string Individu::getNumSecu() const
{
	return NumeroSecuriteSociale;
}

std::string Individu::getDateNaissance() const
{
	std::string DateNaissance;
	DateNaissance = (std::to_string(jour_Naissance) + '/' + std::to_string(mois_Naissance) + '/' + std::to_string(annee_Naissance));
	return DateNaissance;
}

std::string Individu::getProfession() const
{
	return Profession;
}

	//Setters
void Individu::setProfession(std::string mProfession)
{
	Profession = mProfession;
}
void Individu::setNom(std::string mNom)
{
	Nom = mNom;
}
void Individu::setPrenom(std::string mPrenom)
{
	Prenom = mPrenom;
}

void Individu::setNumSecu(std::string mNumSecu)
{
	NumeroSecuriteSociale = mNumSecu;
}

void Individu::setJNaissance(int mJNaissance)
{
	jour_Naissance = mJNaissance;
}

void Individu::setMNaissance(int mMNaissance)
{
	mois_Naissance = mMNaissance;
}

void Individu::setANaissance(int mANaissance)
{
	annee_Naissance = mANaissance;
}



//But : Permettre à l'utilisateur de donner des valeurs aux données membres de l'individu
//ENTREE : Renseignements entrés par l'utilisateur
//SORTIE : individu avec données membres choisis par l'utilisateur
void Individu::creer()
{
	std::cout << "Veuillez entrer le numero de securite sociale. Veuiller entrer une chaine." << std::endl;
	std::cin >> NumeroSecuriteSociale;

	std::cout << "Veuillez entrer le nom. Veuillez entrer un chaine." << std::endl;
	std::cin >> Nom;

	std::cout << "Veuillez entrer le prenom. Veuillez entrer une chaine." << std::endl;
	std::cin >> Prenom;

	std::cout << "Veuillez entrer la profession. Veuillez entrer une chaine." << std::endl;
	std::cin >> Profession;

	std::cout << "Veuillez entrer le jour de naissance. Veuillez entre un entier." << std::endl;
	std::cin >> jour_Naissance;

	std::cout << "Veuillez entrer le mois de naissance. Veuillez entrer un entier." << std::endl;
	std::cin >> mois_Naissance;

	std::cout << "Veuillez entrer l'annee de naissance. Veuillez entrer un entier." << std::endl;
	std::cin >> annee_Naissance;


}

void Individu::affiche() const
{
	std::cout << "Numero de Securite Sociale : " << NumeroSecuriteSociale << std::endl;
	std::cout << "Nom : " << Nom << " Prenom : " << Prenom << std::endl;
	std::cout << "Date de naissance : " << jour_Naissance << '/' << mois_Naissance << '/' << annee_Naissance << std::endl;
	std::cout << "Profession : " << Profession << std::endl;
}


Individu::~Individu()
{
}
