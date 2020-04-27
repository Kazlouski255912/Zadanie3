#include<iostream>
#include"size.hh"
class wektor
{
    protected:
    int arr[SIZE];//inicjalizacja wektora wyrazow wolnych
    float niew[SIZE];//inicjalizacja wektora znaczen niewiadomych
    float Eps[SIZE];//inicjalizacja wektora blada
    public:
    //protypy funkcyj
    void Wyswietl() ;
    int & operator[](int n);
    void Wpisz();
    void indeks();
};