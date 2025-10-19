#include <iostream>
#include <string>
using namespace std;

class Universite{
 private :	
	string nom;
 public :
 	  Universite(string n) {
	    nom=n;
	}
 	void afficherNom(){
 		cout <<" le nom de l'universite :"<< nom;
	 }
};
class Etudiant{
 private:
    string nom;
    int age ;
    Universite* universite;
    static int nbEtudiants;
 public:
 	Etudiant(string n, int a ,Universite* u) {
 		nom=n;
 		age=a;
 		universite=u;
 		nbEtudiants++;
	 }
	   void afficher()  {
        cout << "Nom :"  << nom<<"\n" ;
		 cout<<" Age : " << age <<"\n"; 
        if (universite != NULL)
            universite->afficherNom();
        else
            cout << "Pas d'université assignée" << endl;
             cout << endl; // 
    }

    static void afficherTotal() {
        cout << "Nombre total d'etudiants crees : " << nbEtudiants << endl;
    }
};

int Etudiant::nbEtudiants = 0;
int main() {
    Universite u("Universite de Casablanca");
    Etudiant e1("Amine", 20, &u);
    Etudiant e2("Sara", 21, &u);

    e1.afficher();
    e2.afficher();

    Etudiant::afficherTotal(); // Doit afficher 2
}

