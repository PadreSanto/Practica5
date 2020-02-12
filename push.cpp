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
    static int numeroVertices;
public:
    static int numerooVertices();
    Poligono();
    Poligono(Coordenada cor);
    void anadeVertice(Coordenada cor);
    void imprimeVertice();
    void borrarvector();

};

 int main( )
 {
    int num,x,y,vertices;
    Poligono cordenadas;
    vector<Poligono> objetos;
    //cout<<"Cuantos objetos quieres? "<<endl;
    num=1000000;
    for(int i=0;i<num;i++){
        vertices=(int)rand()%50;
        //cout<<vertices<<endl;
        for(int j=0;j<vertices;j++){
            x=rand()%10;
            y=rand()%10;
            cordenadas.anadeVertice(Coordenada(x,y));
        }
        objetos.push_back(cordenadas);
        cordenadas.borrarvector();

    }
    /*for (int i = 0; i < num; ++i)
    {
        cout<<i<<endl;
        //objetos[i].imprimeVertice();
    }*/
    cout<<"Total de coordenadas = "<<cordenadas.numerooVertices()<<endl;
    
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

int Poligono::numeroVertices = 0;

int Poligono::numerooVertices()
{
    return numeroVertices;
}
Poligono::Poligono():cor(0){}

Poligono::Poligono(Coordenada corr): cor(corr){ }

void Poligono::anadeVertice(Coordenada cor){
    numeroVertices++;
    v.push_back(cor);
}


void Poligono::imprimeVertice(){
    int tam;
    tam=v.size();
    for (int i = 0; i < tam; ++i)
    {
        cout<<i<<" "<<v[i].obtenerX() <<" " << v[i].obtenerY()<<endl;
    }

}
 
void Poligono::borrarvector(){

    v.erase (v.begin(),v.end());
}
