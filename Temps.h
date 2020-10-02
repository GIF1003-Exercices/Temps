/****************************************************************************//**
 * Temps.h
 *
 * \Created on: 2020-10-01
 * \Author: Pascal Charpentier
 */

#ifndef TEMPS_H_
#define TEMPS_H_

#include <string>

/****************************************************************************//**
 * \class Temps
 *
 * \brief Objet représentant un instant de la journée.  Contient 3 champs entier:
 * heure minute et secondes.
 *
 *******************************************************************************/

class Temps
{

private:

	int m_heure;
	int m_minute;
	int m_seconde;

public:

	static bool validerHeure(int heure);
	static bool validerMinute(int minute);
	static bool validerSeconde(int seconde);

	Temps();
	Temps(const int heure, const int minute, const int seconde);
	Temps(std::string& chaine);

	int reqHeure() const;
	int reqMinute() const;
	int reqSeconde() const;

	void modifierHeure(const int nouvelleHeure);
	void modifierMinute(const int nouvelleMinute);
	void modifierSeconde(const int nouvelleSeconde);
	void modifier(const int nouvelleHeure, const int nouvelleMinute, const int nouvelleSeconde);
	void modifier(const std::string texte);

	void affiche(void);
	std::string formatter(const std::string separateur = ":");

};



#endif /* TEMPS_H_ */
