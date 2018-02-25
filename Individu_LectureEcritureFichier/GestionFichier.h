#ifndef _GESTIONFICHIER_H
#define _GESTIONFICHIER_H

#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <limits>
#include "Individu.h"

using namespace std;

void SauvegardeIndividu(Individu mInd, string mChemin);
void LectureFichierIndividus(string mChemin);
void LectureFichierIndividu(string mChemin);

#endif // !_GestionFichier_H



