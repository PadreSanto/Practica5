#include <bits/stdc++.h> 
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
    int reser,pos;
    vector<Coordenada> v;
    static int numeroVertices;
public:
    static int numerooVertices();
    Poligono();
    Poligono(Coordenada cor);
    void reservar(int reser);
    void anadeVertice(Coordenada cor,int pos);
    void imprimeVertice();
    void borrarvector();

};

 int main( )
 {
    int num,x,y,vertices;
    Poligono cordenadas;
    vector<Poligono> objetos;
    num=1000000;
    objetos.reserve(num);
    for(int i=0;i<num;i++){
        vertices=(int)rand()%50;
        //cout<<vertices<<endl;
        cordenadas.reservar(vertices);
        for(int j=0;j<vertices;j++){
            x=rand()%10;
            y=rand()%10;
            cordenadas.anadeVertice(Coordenada(x,y),j);
        }
        objetos[i]=cordenadas;
        cordenadas.borrarvector();

    }
    /*for (int i = 0; i < num; ++i)
    {
        cout<<i<<endl;
        objetos[i].imprimeVertice();
    }*/
    cout<<"Total de coordenadas = "<<cordenadas.numerooVertices();
    
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

void Poligono::reservar(int reser){
    v.reserve(reser);
}

void Poligono::anadeVertice(Coordenada cor, int pos){
    
    numeroVertices++;
    v[pos]=cor;
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
    //delete[] v;
    v.erase (v.begin(),v.end());
}
