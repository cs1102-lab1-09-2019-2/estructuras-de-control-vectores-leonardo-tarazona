#include<iostream>
#include<vector>
using namespace std;

int mediana(vector<int> &lista);
vector<int> leerConsola();

vector<int> leerConsola() {
    vector<int> datos;
    int in;
    cin>>in;
    while (in>0){
        datos.push_back(in);
        cin>>in;
    }
    return datos;
}
int mediana(vector<int> &lista) {
    int l=lista.size();
    int media;
    if (l%2==0)
        media=(lista[l/2 -1] + lista[l/2])/2;
    else
        media=lista[(l-1)/2];
    return media;
}

int main() {
    cout<<"Calcular la mediana de los numeros ingresados:\n\n";
    vector<int> leer_usuario = leerConsola();
    int mediana_elemento = mediana(leer_usuario);
    cout<<"La mediana es: "<<mediana_elemento<<"\n";
}
