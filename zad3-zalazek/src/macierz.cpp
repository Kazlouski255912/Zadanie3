#include"macierz.hh"
#include<cmath>
using namespace std;
//funkcja obliczajaca wyznacznik macierzy 3x3
float macierz :: Wyznacznik()
{
    float wyzn=0;//inicjalizacja zmiennej
    //wyznacznik szukamy ze skladania minorow 1 wiersza i 1,2,3 kolumny
     wyzn+=Minor(0,0)-Minor(0,1)+Minor(0,2);

    
    return wyzn;//zwracanie znaczenia wyznacznika
}
//funkcja wyswietlajaca macierz
void macierz :: Wyswietl()
    {
        cout<<"macierz : "<<endl;

        for(int i = 0;i<SIZE;i++)
        {
        for(int j = 0;j<SIZE;j++)
        cout<<arrm[i][j]<<"\t";
        cout<<endl;
        }
        cout<<endl;
    }
    //macierz umozliwajaca wpisanie danych w element macierzy
    void macierz :: Wpisz()
    {
        cout<<"wpisz macierz  "<<endl;
        
      for(int i = 0;i<SIZE;i++)
        {
            cout<<"wpisz "<<i<<" wiersz ";
        for(int j = 0;j<SIZE;j++)
        cin>>arrm[i][j];
        }
        cout<<endl;  
    }//obliczanie minpora2x2
    float macierz :: Minor2x2(float a[4])
    {
        float wyzn = 0;
        wyzn=a[0]*a[3]-a[2]*a[1];  
        return wyzn;
    };
    //obliczanie minora 3x3 z 2 argumentami
    float macierz :: Minor ( int n,int k)
    {
      int m=0;
        float temp[4];
        if(((n+k)%2)!=0)//tu korzystamy sie (-1)^(n+k)*arr[n][k]
        arrm[n][k]=-1*arrm[n][k];
        for(int i = 0;i<SIZE;i++)
        {
        for(int j = 0;j<SIZE;j++)
        {
        if(n!=i && k!=j)
        {
        
            temp[m]=arrm[i][j];
            m++;
        
        
        } 
        }
        }  
        return arrm[n][k]*Minor2x2(temp);  
     
    };
    //obliczanie minora 3x3 bez argumentow
    float macierz :: Minor ()
    {
        int n,k;
        cout<<"wprowadz numer wiersza  ";
        cin>>n;
        cout<<"wprowadz numer kolumny  ";
        cin>>k;
        int m=0;
        float temp[4];
        if(((n+k)%2)!=0)//tu korzystamy sie (-1)^(n+k)*arr[n][k]
        arrm[n][k]=-1*arrm[n][k];
        for(int i = 0;i<SIZE;i++)
        {
        for(int j = 0;j<SIZE;j++)
        {
        if(n!=i && k!=j)
        {
        
            temp[m]=arrm[i][j];
            m++;
        
        
        } 
        }
        }  
        return arrm[n][k]*Minor2x2(temp);  
    };
    //funkcja transpanujaca macierz
    void macierz :: Transponowanie()
    {
        float temp;
        for(int i = 0;i<SIZE;i++)
        {
        for(int j = 0;j<SIZE;j++)
        {
        if(j>i)
        {
        temp=arrm[j][i];//przypisanie zmiennej znaczenia elementa macierzy
        arrm[j][i]=arrm[i][j];//element macierzy ze zmienionymi miejsem kolumn i wierszow
        arrm[i][j]=temp;//przypisanie elementu macierzy 
        
        }
        
        }
        }
    } 
    void macierz ::Wpisannie()
    {
       for(int i = 0;i<SIZE;i++)
        {
        for(int j = 0;j<SIZE;j++)
        {
            arrm[i][j]=arr[i][j];
        }
    }