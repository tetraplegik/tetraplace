#include <iostream>
#include <string>
#include <math.h>
#include <fstream>
using namespace std;
int main()
{
	float val1;
	float val2;
	float resultat;
	char operateur;
	int choix;
	ofstream FichierLog; // création d'un fichier log de la classe ofstream
	FichierLog.open("journal log");

	while(true)
	{
		cout << "choisir la branche mathematique :"<<endl <<"1)arithmetique (taper 1) :"<<endl <<"2)trigonometrie (taper 2) :";
		cin >> choix;



		if (choix==1)
		{
			cin >> val1 >> operateur >> val2;
			cin.get();//capturer le caractère entré
			switch (operateur)
			{

				case'+':
				resultat= val1+val2;
				break;

				case'-':
				resultat=val1-val2;
				break;

				case'*':
				resultat=val1*val2;
				break;

				case'/':
				resultat=val1/val2;
				break;

				default:
				break;
			}
		}
		if (choix==2)
		{
			string ftrigo;
			cin>>ftrigo>>val1;
			if (ftrigo=="sin")
				resultat=sin(val1 *M_PI/180.0);
			if (ftrigo=="cos")
				resultat=cos(val1 *M_PI/180.0);
			if (ftrigo=="tan")
				resultat=tan(val1 *M_PI/180.0);
		}
		time_t t=time(0);
		tm dateheure=*localtime(&t);

		FichierLog<<dateheure.tm_mday<<"/"<<(dateheure.tm_mon+1)<<"/"<<(dateheure.tm_year+1900)<<" ";
		FichierLog<<dateheure.tm_hour<<":"<<dateheure.tm_min<<":"<<dateheure.tm_sec<<'\t';
		FichierLog << val1 << operateur << val2 << "=" << resultat <<  endl;

		cout << "le resultat de l'operation est : " << resultat << endl;
		cout << val1 << operateur << val2 << "=" << resultat <<  endl;

		cin.get();
	}
	FichierLog.close();

	return 0;

 }
