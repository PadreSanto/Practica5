#include <iostream>
#include <math.h>
#include <vector>
using namespace std;
class Coordenada{
private:
    double x;
    double y;
public:
    Coordenada(double = 0, double = 0);
    double obtenerX();
    double obtenerY();
};

class Poligono{
private:
    Coordenada cor;
    vector<Coordenada> v;
public:
    Poligono();
    void anadeVertice();
    void imprimeVertice();

};

 int main( )
 {
    //Coordenada Coordenada1(2,3),Coordenada2(5,1);
    //Rectangulo rectangulo1(Coordenada(3.6056,56.31),Coordenada(5.099,11.31));
    int num;
    Poligono pol;
    cout<<"Cuantas coordenadas tiene el poligono"<<endl;
    cin>>num;
    int x,y;
    for(int i=0;i<num;i++){
        cout<<"Digite las coordenadas"<<endl;
        cout<<"x = ";
        cin>>x;
        cout<<"\ny = ";
        cin>>y;
        pol.anadeVertice(Coordenada(x,y));

    }
    pol.imprimeVertice();
    return 0;
}

Coordenada::Coordenada(double rr, double yy) : x(rr), y(yy){ }

double Coordenada::obtenerX()
{
    return x;
}

double Coordenada::obtenerY()
{
    return y;
}

Poligono::Poligono():cor(0){}

//Poligono::Poligono(Coordenada corr): cor(corr){ }

void Poligono::anadeVertice(Coordenada cor){
    v.push_back(cor);
}

void Poligono::imprimeVertice(){
    int tam;
    tam=v.size();
    for (int i = 0; i < tam; ++i)
    {
        cout<<v[i].obtenerX() <<" " << v[i].obtenerY()<<endl;
    }
}
