#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

class Heros{
    private:
    string nom; 
    int pv;
    int pa;
    public:
    Heros( string n, int p, int a ){
    nom = n; 
    pv = p;
    pa = a;
}
bool EstVivant (){
        if (pv>0){
            return true;
        } else {
            return false;
        }
    }
void affiche(){
    std::cout <<"le personnage se nomme " << nom << " il a " << pv << " pv"<< " et il a " << pa << " points d'attaques" << std::endl; 
    if (EstVivant()){
        std::cout << "le héros est vivant !!" << std::endl;
    }  else {
        cout << "le héros est mort ..." << std::endl;
    }
}
};

class Creature{
    private:
    int pv;
    int pa;
    int niveau;
    public:
    Creature(int p, int a, int n ){
        pv= p;
        pa= a;
        niveau= n;
    }
 bool EstVivant (){
        if (pv>0){
            return true;
        } else {
            return false;
        }
    }
    void affiche(){
         std::cout <<"la creature possede " << pv << " pv " << ", il a " << pa << " points d'attaques " << " et il est niveau " << niveau << std::endl;
         if (EstVivant()){
            std::cout << "la creature est vivante!! " << endl;
         } else{
            cout << "la creature est morte..." << endl;
         }
    }
   
};

int main() {
    Heros h("Arthur", 100, 15);
    Creature c(80, 10, 3);

    h.affiche();
    c.affiche();
    return 0;
}
