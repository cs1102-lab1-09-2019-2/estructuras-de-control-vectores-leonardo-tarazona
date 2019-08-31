#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int moda(vector<int> &lista);
vector<int> leerConsola();

int moda(vector<int> &lista) {
    unordered_map<int, int> map;
    for (int i = 0; i < lista.size(); i++) {
        map[lista[i]]++;
    }
    int moda, max = -10;
    for (auto &it : map) {
        if (it.second > max) {
            max = it.second;
            moda = it.first;
        }
    }
    return moda;
}

vector<int> leerConsole() {
    vector<int> datos;
    int in;
    cin>>in;
    while (in>0){
        datos.push_back(in);
        cin>>in;
    }
    return datos;
}

int main() {
    cout<<"Calcular la moda de los numeros ingresados:\n\n";
    vector<int> leer_usuario = leerConsole();
    int moda_elemento = moda(leer_usuario);
    cout<<"La moda es: "<<moda_elemento<<"\n";
}
