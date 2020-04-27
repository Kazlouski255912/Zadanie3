#include"wektor.hh"
using namespace std;
void wektor:: Wyswietl() 
    {
      cout<<"wektor : "<<endl;
      
        for(int i = 0;i<SIZE;i++)
        {
        
        cout<<niew[i]<<endl;
        }
        cout<<endl;
    }
    void wektor:: Wpisz()
    {
      cout<<"wpisz wektor   "<<endl;
      for(int i = 0;i<SIZE;i++)
        {
        cin>>arr[i];
        }
        cout<<endl;  
    }
    int& wektor:: operator[](int n)
    {
     
    if(n<0 || n >=SIZEUKL)
    {cout<<"\nwystapil blad"<<endl;exit(1);}
    return arr[n];
    }