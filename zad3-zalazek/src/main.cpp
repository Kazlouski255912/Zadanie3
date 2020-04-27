#include<iostream>
using namespace std;
//#include"wektor.hh"
#include"macierz.hh"
#include"Uklad.hh"
int main()
{
  wektor a;
   macierz b;
   uklad c;


  c.Wpisz();//wpisanie dannych w uklad liniowyj
  c.Wyswietl();//wyswietlienie wpisanego ukladu
  b.Wpisannie();//macierz z ukladu
  c.Transponowanie();//transponowanie ukladu
  c.Gauss();//elemienacja gausa, t.z. znalezenie niewiadomych
  a.Wyswietl();//wyswietlanie znalezionych znaczen niewiadomych
  c.Blad3x3();//wektor bladu
  int wybor;
  cout<<"wybierz co jeszcze chcesz zrobic 1- transponowac macierz\n2- znalezc minor macierz\n3-wyznacznik\n4znalezenie n elementa wektora\n5znalezenie n m elementa ukladu"<<endl;
  cin>>wybor;
  switch (wybor)
  {
  case 1:
    cout<<"macierz transponowana  "<<endl;
    b.Transponowanie();
    b.Wyswietl();
    break;
    case2:
    b.Minor();
    break;
    case 3:
    cout<<"wyznacznik  : "<<b.Wyznacznik();
    break;
    case 4:
    int n;
    cout<<"wybierz jaki element chcesz znalezc  : "<<endl;
    cin>>n;
    a[n];
    break;
        case 5:
    int n,m;
    cout<<"wybierz jaki element chcesz znalezc  : \n"<<"wybierz numer wierszu"<<endl;
    cin>>n;
    cout<<"numer kolumny"<<endl;
    cin>>m;
    c(n,m);
    break;
  default:
    break;
  }
    
}