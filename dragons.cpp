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
};
