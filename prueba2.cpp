#include <iostream>
using namespace std;
int main()
{
   int i;
   cout << "20 numeros generados aleatoriamente:\n";
   for(i=1; i<=20; i++)
           cout << rand()%50 << endl;
   system("pause");
}