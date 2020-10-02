/*
 * testTemps.cpp
 *
 *  Created on: 2020-10-01
 *      Author: Pascal Charpentier
 */

#include "Temps.h"
#include <iostream>

using namespace std;

int main()
{
	Temps monTemps;
	Temps unAutreTemps(15, 45, 34);

	monTemps.affiche();
	unAutreTemps.affiche();

	cout << monTemps.reqHeure() << endl;
	cout << unAutreTemps.reqHeure() << endl;

	cout << monTemps.reqMinute() << endl;
	cout << unAutreTemps.reqMinute() << endl;

	cout << monTemps.reqSeconde() << endl;
	cout << unAutreTemps.reqSeconde() << endl;

	monTemps.modifierHeure(6);
	monTemps.affiche();

	monTemps.modifierHeure(-5);
	monTemps.affiche();

	monTemps.modifierHeure(56);
	monTemps.affiche();

	unAutreTemps.modifierMinute(3);
	unAutreTemps.affiche();

	unAutreTemps.modifierMinute(89);
	unAutreTemps.affiche();

	unAutreTemps.modifierMinute(-45);
	unAutreTemps.affiche();

	unAutreTemps.modifier(1, 2, 3);
	unAutreTemps.affiche();

	unAutreTemps.modifier(4, 5, 6);
	unAutreTemps.affiche();

	unAutreTemps.modifier(4, 5, 789);
	unAutreTemps.affiche();

	cout << unAutreTemps.formatter() << endl;

	monTemps.modifier("11:11:11");
	monTemps.affiche();

	monTemps.modifier("12 12 12");
	cout << monTemps.formatter() << endl;

	monTemps.modifier("13 13");
	cout << monTemps.formatter() << endl;

	monTemps.modifier("7");
	cout << monTemps.formatter() << endl;


	return 0;
}



