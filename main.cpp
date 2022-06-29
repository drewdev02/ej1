#include <iostream>
using namespace std;
int valor;
//funcion para saber el mayor elemento de el array en las posiciones pares
int getMax(int array[], int size){
    int max=array[0];
    for(int i=0; i<size; i++){
       if(i%2==0){
           if (array[i] > max) {
               max = array[i];
           }
       }
    }
    return max;
}
//determinar la  posiciones que contengan el mayor elemento
int getMaxPos(int array[], int size,int valor){
    int max=valor;
    int pos=0;
    for(int i=0; i<size; i++){
        if(array[i]>max){
            max=array[i];
            if(max>valor){
                pos=i+1;
                pos=pos/4;
                break;

            }

        }
    }
    return pos+1;
}
int main() {
//hacer un array de con 48 elementos
    int semanas[48];
    //llenar el array con numeros aleatorios entre 0 y 100
    for (int i = 0; i < 48; i++) {
        semanas[i] = rand() % 100;
    }

    //hacer un menu con 3 opciones
    int opcion;
    do {
        cout << "1. Mayor consumo de semanas pares" << endl;
        cout << "2.Primer mes de mayor consumo" << endl;
        cout << "3. Salir" << endl;
        cout << "Ingrese una opcion: ";
        cin >> opcion;


        switch (opcion) {
            case 1:
                cout <<"El ingreso de todas las semanas es: "<<endl;
                //imprimir el array
                for (int i = 0; i < 48; i++) {

                    cout << semanas[i] << " ";
                }
                cout << endl;
                //imprimir el mayor elemento del array en las posiciones pares
                cout << "El mayor consumo en las semanas pares es: " << getMax(semanas, 48)<<endl;
                cout<<"\n";
                break;
            case 2:
                cout<<"escribe un valor de cosumo: ";
                cin>>valor;
                cout<<"El primer mes en superar el cosumo de "<<valor<<" es el: "<<getMaxPos(semanas, 48,valor)<<endl;

                break;
            case 3:
                break;
            default:
                cout << "Opcion no valida" << endl;
                cout<<"\n";
                break;
        }
    } while (opcion != 3);



    return 0;
}
