#include<iostream>
#include"size.hh"
#include"cmath"
#include"Uklad.hh"
class macierz : protected uklad
{
    protected:
    float arrm[SIZE][SIZE];
    public:
    void Wyswietl();
    //funkcja zwaracajaca ilosc wierszy w macierze
     int wysokosc() const {
        return SIZE;
    }
       //funkcja zwaracajaca ilosc kolumn w macierze
    int szerokosc() const {
        return SIZE;
    }
    //prototypy fynkcyj
    void Wpisz();
    float Minor2x2(float a[4]);
    void Transponowanie();
    float Wyznacznik();
    void Wpisannie();
    float Minor();
    float Minor(int n, int k);
    
    };