#include <iostream>
#include <string>
using namespace std;

class Livre {
 private:
	string titre ;
    string auteur ;
    int annee ;
    static int nbLivres ;
 public:
    Livre (string t,string a,int y){
      titre=t;
      auteur=a;
      annee=y;
      nbLivres++;
  }
   void afficher() const{
  	cout << "Titre : " << titre 
             << ", Auteur : " << auteur 
             << ", Année : " << annee << endl;
  }
	static void afficherTotal() {
        cout << "Nombre total de livres créés : " << nbLivres << endl;
    } 
};
int Livre::nbLivres = 0;

int main() {
    Livre l1("1984", "George Orwell", 1949);
    Livre l2("Le Petit Prince", "Antoine de Saint-Exupéry", 1943);
    Livre l3("L'Étranger", "Albert Camus", 1942);

    l1.afficher();
    l2.afficher();
    l3.afficher();

    Livre::afficherTotal();
	  return 0; 
}

