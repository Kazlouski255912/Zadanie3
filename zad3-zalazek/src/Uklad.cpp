#include"Uklad.hh"
float& uklad :: operator ()(int n, int k)
{
    if(n<0 || n >=SIZEUKL)
    {cout<<"\nwystapil blad"<<endl;exit(1);}
    else if(n<0 || n >=SIZEUKL)
    {cout<<"\nwystapil blad"<<endl;exit(1);}

    return arr[n][k];
}
ostream & operator <<( ostream & out, uklad & m ) {
    for( int i = 0; i < SIZE; i++ ) {
        for( int j = 0; j < SIZEUKL; j++ ) {
            out << m(i,j) << ' ';
        }
        out << '\n';
    }
    return out;
}
    int uklad :: kopiuj(float temp[SIZE][SIZEUKL])
{
    
    for(int i = 0;i<SIZE;i++)
        {
        for(int j = 0;j<SIZEUKL;j++)
        {
        temp[i][j]=arrt[i][j];
        cout<<temp[i][j]<<"\t";
        };
        cout<<endl;
        }
        return temp[SIZE][SIZEUKL];


}
void uklad ::Wyswietl()
    {
        cout<<"macierz : "<<endl;
        for(int i = 0;i<SIZEUKL;i++)
        {
        for(int j = 0;j<SIZE;j++)
        cout<<arr[i][j]<<"\t";
        cout<<endl;
        }
        cout<<endl;
    }
    void uklad ::WyswietlTR()
    {
        cout<<"macierz : "<<endl;
        for(int i = 0;i<SIZE;i++)
        {
        for(int j = 0;j<SIZEUKL;j++)
        cout<<arr[i][j]<<"\t";
        cout<<endl;
        }
        cout<<endl;
    }
    void uklad :: Wpisz()
    {
        cout<<"wpisz macierz  "<<endl;
        
      for(int i = 0;i<SIZEUKL;i++)
        {
            cout<<"wpisz "<<i+1<<" wiersz ";
        for(int j = 0;j<SIZE;j++)
        cin>>arr[i][j];
        }
        cout<<endl;  
    }
    void uklad :: Transponowanie()
    {
        float temp[SIZE][SIZEUKL];
        
        for(int i = 0;i<SIZEUKL;i++)
        {
        for(int j = 0;j<SIZE;j++)
        {
            
        temp[j][i]=arr[i][j];
        
        }
         }
        for(int i = 0;i<SIZE;i++)
        {
        for(int j = 0;j<SIZEUKL;j++)
        {
        
        arrt[i][j]=temp[i][j];
       

        };
        cout<<endl;

        }
    }
    void uklad :: Gauss()
    {
        float temp[SIZE][SIZEUKL];
        kopiuj(temp);
        int Rozmiar =4 ;
        float arr1[]={temp[0][0],temp[0][1],temp[0][2],temp[0][3]};
        float arr2[]={temp[1][0],temp[1][1],temp[1][2],temp[1][3]};
        float arr3[]={temp[2][0],temp[2][1],temp[2][2],temp[2][3]};
        
        
        for(int i =Rozmiar-1;i>=0;i--)
        {
           
            arr1[i]=arr1[i]/arr1[0];
            arr2[i]=arr2[i]/arr2[0];
            arr3[i]=arr3[i]/arr3[0];
        }
        for(int j =Rozmiar-1;j>=0;j--)
        {

            arr2[j]=arr2[j]-arr1[j];
            arr3[j]=arr3[j]-arr1[j];
        }
        
        for(int e =Rozmiar-1;e>=0;e--)
        {
            arr2[e]=arr2[e]/arr2[1];
            arr3[e]=arr3[e]/arr3[1];
        }
        for(int m =Rozmiar-1;m>=0;m--){
        arr3[m]=arr3[m]-arr2[m];
        }
        niew[2]=arr3[3]/arr3[2];
        niew[1]=arr2[3]-arr2[2]*niew[2];
        niew[0]=arr1[3]-arr1[2]*niew[2]-arr1[1]*niew[1];
        cout<<niew[0]<<"\t"<<niew[1]<<"\t"<<niew[2];
    }
    void uklad :: Blad3x3()
    {
        
        for(int i=0;i<SIZE;i++){
        Eps[i]=(arrt[i][0]*niew[0]+arrt[i][1]*niew[1]+arrt[i][2]*niew[2]-arrt[i][3]);
        cout<<"Blad  : "<<Eps[i]<<endl;
        }
        
        
    }