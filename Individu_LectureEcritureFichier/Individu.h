#pragma once
#include <iostream>
#include <stdlib.h>
#include "string"

class Individu
{
	//données membres
	std::string NumeroSecuriteSociale;
	std::string Nom;
	std::string Prenom;
	std::string Profession;
	int jour_Naissance;
	int mois_Naissance;
	int annee_Naissance;




public:
	//Constructeur
	Individu(std::string mNumSecu = "", std::string mNom = "", std::string mPrenom = "", std::string mProfession = "", int mJNaissance = 0, int mMNaissance = 0, int mANaissance = 0);
	
	std::string getNom() const;
	std::string getPrenom() const;
	std::string getNumSecu() const;
	std::string getDateNaissance() const;
	std::string getProfession() const;

	void setNom(std::string mNom);
	void setPrenom(std::string mPrenom);
	void setNumSecu(std::string mNumSecu);
	void setJNaissance(int mJNaissance);
	void setMNaissance(int mMNaissance);
	void setANaissance(int mANaissance);
	void setProfession(std::string mProfession);
	
	void creer();
	void affiche() const;

	//Destructeur
	~Individu();
};

