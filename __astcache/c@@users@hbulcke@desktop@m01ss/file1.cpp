#include <iostream>
#include <string>
#include <math.h>
int main()
{
 float val1;
 float val2;
 float resultat;
 char operateur;
 int choix;

 std::cout << "choisir"<<std::endl <<"1.arithmetique"<<std::endl <<"2.trigonometrie";
 std::cin >> val1 >> operateur >> val2;
 std::cin >> choix;
 std::cin.get();//capturer le caractère entré
}


if (choix==1) {
		  switch (operateur) {
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
 default: ("erreur");
 } 
if (choix==2) {
	string ftrigo;
	std::cin>>ftrigo>>val1;
	if (ftrigo=="sin") {
		resultat=sin(val1*└/'180')
	}
}
 std::cout << "le resultat de l'operation est : " << resultat << std::endl;
 std::cin.get();
 return 0;
 }
 std::cout<<"fin du programme calculatrice sans erreur"<<std::endl;
