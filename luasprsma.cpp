 
#include <cstdlib>
#include <iostream>
 
using namespace std;
 
template <class T>
 
class Volume{
 public :
 T Tabung();
 T Limas ();
 T bola ();
 };
 
template <class T>
T Volume<T>::Tabung(){
 T V;
 T r; T t;
 float phi = 3.14;
 cout<<"PROGRAM MENCARI VOLUME TABUNG"<<endl<<endl;
 cout<<"Inputkan nilai jari - jari = ";
 cin>>r;
 cout<<"Inputkan nilai tinggi = ";
 cin>>t;
 
 return phi*r*r*t;
}
 
template <class T>
 T Volume<T>::Limas(){
 T V;
 T p;
 T l;
 T t;
 T luas;
 cout<<"PROGRAM MENCARI VOLUME LIMAS SEGI EMPAT"<<endl<<endl;
 cout<<"Inputkan nilai panjang = ";
 cin>>p;
 cout<<"Inputkan nilai lebar = ";
 cin>>l;
 cout<<"Inputkan nilai tinggi = ";
 cin>>t;
 
 return p*l*t*1/3;
}

 template <class T>
 T Volume<T>::bola(){
 T V;
 T p;
 T l;
 T t;
 T luas;
 cout<<"PROGRAM MENCARI VOLUME BOLA"<<endl<<endl;
 cout<<"Inputkan nilai panjang = ";
 cin>>p;
 cout<<"Inputkan nilai lebar = ";
 cin>>l;
 cout<<"Inputkan nilai tinggi = ";
 cin>>t;
 
 return p*l*t*4/3;
}

int main(){
 Volume<double> x;
 int p,l,r,t;
 cout<<"Hasil volume Tabung adalah : "<<x.Tabung();
 cout<<endl<<endl<<endl<<endl;
 cout<<"Hasil volume Limas Segi Empat adalah : "<<x.Limas();
 cout<<endl<<endl<<endl<<endl;
 cout<<"Hasil volume bola adalah : "<<x.bola();
 cout<<endl;
 system("PAUSE");
 return 0;
}

