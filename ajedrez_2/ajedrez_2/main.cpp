#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main()
{
    int x;
    int y;
    //borrar p y mover de lugar

    int i;
    int j;
    int a=1;

    cout<<"ajedrez."<<endl;
    cout<<endl;
    cout<<"Reglas del juego!"<<endl;
    cout<<endl;
    cout<<"Al inicio, los jugadores deben colocar las coordenadas de origen de la pieza"<<endl; cout<<"que desea mover,";
    cout<<"en seguida, el jugador debera colocar las coordenadas"<<endl; cout<<"de destino, para poder colocar la pieza movida"<<endl; cout<<"en el lugar nuevo que se desea ubicar."<<endl;
    cout<<endl;
    cout<<"no olvide: las filas son en horizontal y las columnas en vertical."<<endl;
    cout<<endl;
    system ("pause");
    system ("cls");

    //dibujando el tablero de ajedrez.

    cout<<"ajedrez."<<endl;
    char tablero [18][18]={ "0123456789","1tp     pt","2cp     pc","3ap     pa","4Rp     pr","5rp     pR","6ap     pa","7cp     pc","8tp     pt"};
    if (a==1){
        for (x=0; x<9; x++){
                        cout<<endl;
                    for (y=0; y<10; y++){

                        cout<<tablero[x][y];
                    }
                }
    //hasta aqui!


    }
    while (a==1){  //para poder ciclarlo.
                cout<<endl;
                cout<<endl;

                //para ingresar coordenadas de origen, jugador 1.

                cout<<"Jugador 1."<<endl;
                cout<<"Las filas son en horizontal y las columnas son en vertical"<<endl;
                cout<<"ingresar coordenadas de origen."<<endl;
                cout<<"Fila: ";
                cin>>i;
                if (i>8){
                    while (i>8){
                        cout<<"ERROR Ingresar de nuevo la coordenada."<<endl;
                        cout<<"Fila: ";
                        cin>>i;
                    }
                }
                cout<<"Columna: ";
                cin>>j;
                    if (j>9){
                        while(j>9){
                            cout<<"ERROR Ingresar de nuevo la coordenada."<<endl;
                            cout<<"Columna: ";
                            cin>>j;
                        }
                    }

                tablero[i][j]=' '; // imprimiendo en blanco el lugar de origen de la pieza, para eso se agregan las coordenadas
                                  // de inicio.

                cout<<endl;
    system ("cls");


                //imprime matriz borrando la variable de las coordenadas de origen.

                 for (x=0; x<9; x++){
                        cout<<endl;
                    for (y=0; y<10; y++){

                        cout<<tablero[x][y]; //imprimiendo todo el tablero, con el movimiento de origen.
                    }
                }

                //coordenadas de destino.
                //la variable de origen previamente borrada se imprime en el destino dado por "i","j".
                cout<<" "<<endl;
                cout<<"Jugador 1."<<endl;
                 cout<<"Las filas son en horizontal y las columnas son en vertical"<<endl;
                cout<<"Ingresar coordenadas de destino."<<endl;
                cout<<"Fila: ";
                cin>>i;
                if (i>8){
                    while (i>8){
                        cout<<"ERROR Ingresar de nuevo la coordenada"<<endl;
                        cout<<"Fila: ";
                        cin>>i;
                    }
                }
                cout<<"Columna: ";
                cin>>j;
                if (j>9){
                    while (j>9){
                        cout<<"ERROR Ingresar de nuevo la coordenada"<<endl;
                        cout<<"Columna: ";
                        cin>>j;
                    }
                }
                tablero[i][j]='p'; // imprimiendo la nueva figura que es P.

                cout<<endl;

    system ("cls");



                //imprime la matriz agregando la nueva p.

                    for (x=0; x<9; x++){
                        cout<<endl;
                    for (y=0; y<10; y++){

                        cout<<tablero[x][y];
                    }
                }
                cout<<endl;
                cout<<"Jugador 2."<<endl;
                cout<<"Las filas son en horizontal y las columnas son en vertical"<<endl;
                cout<<"ingresar coordenadas de origen."<<endl;
                cout<<"Fila: ";
                cin>>i;
                 if (i>8){
                    while(i>8){
                        cout<<"ERROR Ingresar de nuevo la coordenada."<<endl;
                        cout<<"Fila: ";
                        cin>>i;
                    }
                 }
                cout<<"Columna: ";
                cin>>j;
                 if (j<1)
                    while(j<1){
                   cout<<"ERROR Ingresar de nuevo la coordenada. "<<endl;
                   cout<<"Columna: ";
                   cin>>j;
                 }

                tablero[i][j]=' '; // imprimiendo en blanco el origen.

                cout<<endl;
    system ("cls");
                 for (x=0; x<9; x++){
                        cout<<endl;
                    for (y=0; y<10; y++){

                        cout<<tablero[x][y]; // imprimiendo todo el tablero.
                    }
                }
                cout<<" "<<endl;
                cout<<"Jugador 2."<<endl;
                cout<<"Las filas son en horizontal y las columnas son en vertical"<<endl;
                cout<<"Ingresar coordenadas de destino."<<endl;
                cout<<"Fila: ";
                cin>>i;
                 if (i>8){
                    while(i>8){
                        cout<<"ERROR Ingresar de nuevo la coordenada."<<endl;
                        cout<<"Fila"<<endl;
                        cin>>i;
                    }
                 }
                cout<<"Columna: ";
                cin>>j;
                 if (j<5)
                 {
                     while (j<5){
                        cout<<"ERROR Ingresar de nuevo la coordenada."<<endl;
                        cout<<"Columna: ";
                        cin>>j;
                     }
                 }
                tablero[i][j]='p'; // imprimiendo la pieza nueva.

                cout<<endl;

    system ("cls");
                 for (x=0; x<9; x++){
                        cout<<endl;
                    for (y=0; y<10; y++){

                        cout<<tablero[x][y]; // imprimiendo todo el tablero.
                    }
                }
    }

    return 0;
}
