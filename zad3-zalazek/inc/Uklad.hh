#include<iostream>
#include"size.hh"
#include"wektor.hh"
using namespace std;
class uklad : protected wektor
{
    protected:
    float arr[SIZEUKL][SIZE];
    float arrt[SIZE][SIZEUKL];
    
    public:
    void Wyswietl();
    int kopiuj(float temp[SIZE][SIZEUKL]);
    void Wys() 
    {
      cout<<"wektor : "<<endl;
      
        for(int i = 0;i<SIZE;i++)
        {
        
        cout<<niew[i]<<endl;
        }
        cout<<endl;
    }
    void Wpisz();
    float& operator() (int n,int k);
    ostream & operator <<( ostream & out);
    void Transponowanie();
    void Gauss();
    void WyswietlTR();
    void Przyc();
    void Blad3x3();
};