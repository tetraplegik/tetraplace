#include <iostream>
#include <string>
#include <math.h>
#include <fstream>
int main()
{
 float val1;
 float val2;
 float resultat;
 char operateur;
 int choix;

 std::cout << "choisir"<<std::endl <<"1.arithmetique"<<std::endl <<"2.trigonometrie";

 std::cin >> choix;




 if (choix==1)
 {
			   std::cin >> val1 >> operateur >> val2;
			   std::cin.get();//capturer le caractère entré
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

 if (choix==2) {

		std::string ftrigo;
		std::cin>>ftrigo>>val1;

		if (ftrigo=="sin")

		resultat=sin(val1 *M_PI/180.0);
	}

 std::cout << "le resultat de l'operation est : " << resultat << std::endl;
 std::cin.get();

	std::cout << val1 << operateur << val2 << "=" << resultat << std:: endl;

	std::ofstream FichierLog; // création d'un fichier log de la classe ofstream
	FichierLog.open("journal log");
	FichierLog << val1 << operateur << val2 << "=" << resultat << std:: endl;
	FichierLog.close();

	std::cin.get();
 return 0;

 }
