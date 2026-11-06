#include <iostream>

using namespace std;


class Fraction{
    private:
    int numerateur;
    int denominateur;

    public:
    Fraction(){
        numerateur = 1;
        denominateur =1;
    }
    Fraction(int n, int d){
        numerateur = n;
        denominateur = d;
    }
    int getNumerateur(){
        return numerateur;
    }
    int getDenominateur(){
        return denominateur;
    }
    void setNumerateur(int n){
        numerateur = n;
    }
    void setDenominateur(int d){
        denominateur = d;
    }
    Fraction add(Fraction f){
        int n = numerateur*f.denominateur + denominateur*f.numerateur; 
        int d = denominateur*f.denominateur;
                return Fraction(n, d);
    }
    Fraction minus(Fraction f){
        int n = numerateur*f.denominateur - denominateur*f.numerateur; 
        int d = denominateur*f.denominateur;
                return Fraction(n, d);
    }
    Fraction multiply(Fraction f){
        int n = numerateur*f.numerateur; 
        int d = denominateur*f.denominateur;
                return Fraction(n, d);
    }
    Fraction divide(Fraction f){
        int n = numerateur*f.denominateur; 
        int d = denominateur*f.numerateur;
                return Fraction(n, d);
    }
};

int main()
{
    /* Test constructors */
    Fraction f0;
    if (f0.getNumerateur() == 1 && f0.getDenominateur() == 1) {
        cout << "[OK] Default constructor works" << endl;
    }
    else {
        cout << "[FAILURE] Default constructor doesn't work" << endl;
    }

    Fraction f1(1, 2);
    if (f1.getNumerateur() == 1 && f1.getDenominateur() == 2) {
        cout << "[OK] Constructor with parameters works" << endl;
    }
    else {
        cout << "[FAILURE] Constructor with parameters doesn't work" << endl;
    }

    Fraction f2(3, 4);

    /* Test add */
    Fraction f3 = f1.add(f2);

    if (f3.getNumerateur() == 10 && f3.getDenominateur() == 8) {
        cout << "[OK] Add method works" << endl;
    }
    else {
        cout << "[FAILURE] Add method doesn't work" << endl;
    }

    /* Test minus */
    f3 = f1.minus(f2);
    if (f3.getNumerateur() == -2 && f3.getDenominateur() == 8) {
        cout << "[OK] Minus method works" << endl;
    }
    else {
        cout << "[FAILURE] Minus method doesn't work" << endl;
    }

    /* Test multiply */
    f3 = f1.multiply(f2);
    if (f3.getNumerateur() == 3 && f3.getDenominateur() == 8) {
        cout << "[OK] Multiply method works" << endl;
    }
    else {
        cout << "[FAILURE] Multiply method doesn't work" << endl;
    }

    /* Test divide */
    f3 = f1.divide(f2);
    if (f3.getNumerateur() == 4 && f3.getDenominateur() == 6) {
        cout << "[OK] Divide method works" << endl;
    }
    else {
        cout << "[FAILURE] Divide method doesn't work" << endl;
    }
    return 0;
}