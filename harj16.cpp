/**********************************************************
*Tehtävä: Harjoitus16
*Tekijä: Olli Kauppinen
*PVM: 28.10.2013
*Kuvaus:
*Tee ohjelma, joka kysyy henkilotietosi ja tallentaa ne tietueeseen.
*Tietueeseen talletetaan seuraavat tiedot:
*etunimi (merkkijono; C:n merkkitaulukko)
*sukunimi (merkkijono; C:n merkkitaulukko)
*koulumatka (reaaliluku)
*osoite (merkkijono; C:n merkkitaulukko)
*postinumero (merkkijono; C:n merkkitaulukko)
*kengannumero (kokonaisluku)
*
*Ohjelma tulostaa lopuksi tietueen tiedot naytölle.
*
* Versio 1.0 H4718 28.10.2013
***********************************************************/

#include<iostream>
using namespace std;

struct HENKILO
{
	char etunimi[40];
	char sukunimi[40];
	double matka;
	char osoite[100];
	char postnro[5];
	int kenka;
};

int main()
{
	HENKILO mina;

	cout << "\nEtunimesi?\n";
	cin >> mina.etunimi;
	
	cout << "\nSukunimesi?\n";
	cin >> mina.sukunimi;

	cout << "\nKoulumatkasi kilometreinä?\n";
	cin >> mina.matka;

	cin.get ();

	cout << "\nOsoitteesi?\n";
	cin.get (mina.osoite, 100);

	cout << "\nPostinumerosi?\n";
	cin >> mina.postnro;

	cout << "\nKengan kokosi?\n";
	cin >> mina.kenka;
	
	cout << "\nNimesi on " << mina.etunimi << " " << mina.sukunimi << endl;
	cout << "\nOsoitteesi on " << mina.osoite << ", post.nro " << mina.postnro << endl;
	cout << "\nKoulumatkasi on " << mina.matka << " km" << endl;
	cout << "\nKengännumerosi on " << mina.kenka << endl;
}