#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<string> cadenas;

    string op;

    while(true) {
        cout<<" * * *   * * *   * * *   * * *   * * *"<<endl;
        cout<<endl;
        cout<<"1) Agregar al final"<<endl;
        cout<<"2) Mostrar"<<endl;
        cout<<"3) Inicializar"<<endl;
        cout<<"4) Frente"<<endl;
        cout<<"5) Ultimo"<<endl;
        cout<<"6) Ordenar"<<endl;
        cout<<"7) Insertar"<<endl;
        cout<<"8) Eliminar"<<endl;
        cout<<"9) Eliminar ultimo"<<endl;
        cout<<"0) Salir"<<endl;
        cout<<endl;
        cout<<"Opcion: "<<endl;
        //cin.sync();
        getline(cin, op);

        if (op=="1") {
            string cadena;
            cout<<"Cadena: ";
            getline(cin, cadena);
            //cin.ignore(); No deja que el programa avance.
            cadenas.push_back(cadena);
            }
        else if(op=="2") {
            for(size_t i = 0; i < cadenas.size(); i++) {
                cout<< cadenas[i]<<", ";
                }
            cout<<endl;
            }
        else if(op=="3") {
            size_t n;
            string cadena;

            cout << "TAM: ";
            cin>>n;
            cin.get();
            cout<<"Cadena: ";
            getline(cin, cadena);

            cadenas = vector<string>(n, cadena);//YA FUNCIONA, TENIA PROBLEMAS PERO YA
            //Si se se repite N veces, saldrán hasta que se le de la opcion 2 de MOSTRAR
            }
        else if(op=="4") {
            if(cadenas.empty()) {
                cout <<"El vector esta vacio."<<endl;
                }
            else {
                cout<<cadenas.front()<<endl;
                }
            }
        else if(op=="5") {
            if(cadenas.empty()) {
                cout <<"El vector esta vacio."<<endl;
                }
            else {
                cout<<cadenas.back()<<endl;
                }
            }
        else if(op=="6") {
            //sort(cadenas.begin(),cadenas.end());
            sort(cadenas.begin(),cadenas.end(),greater<string>());
            }
        else if(op=="7") {
            size_t p;
            string cadena;

            cout<<"Posicion: ";
            cin>>p;
            cin.get();
            cout<<"Cadena: ";
            getline(cin, cadena);
            cin.get();

            if(p >= cadenas.size()) {
                cout<<"Posicion no valida."<<endl;
                }
            else {
                cadenas.insert(cadenas.begin()+p, cadena);
                }
            }
        else if(op=="8") {
            size_t p;

            cout <<"Posicion: ";
            cin>>p;

            if(p >= cadenas.size()) {
                cout<<"Posicion no valida."<<endl;
                }
            cadenas.erase(cadenas.begin()+p);
            }
        else if(op=="9") {
            if(cadenas.empty()) {
                cout <<"El vector esta vacio."<<endl;
                }
            else {
                cadenas.pop_back();
                }
            }
        else if(op=="0") {
            break;
            }
        }
    return 0;
    }
