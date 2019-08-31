#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

float promedio(vector<int> &lista);
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

float promedio(vector<int> &lista) {
    int sum=0;
    float prom;
    for(auto x:lista)
        sum+=x;
    prom=(float)sum/lista.size();
    return prom;
}

int main() {
    cout<<"Calcular el promedio de los ingresados:\n\n";
    vector<int> leer_usuario = leerConsola();
    float promedio_elemento = promedio(leer_usuario);
    cout<<"El promedio es: "<<fixed<<setprecision(2)<<promedio_elemento<<"\n";
}
