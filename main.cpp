// prueba C++

# include <iostream>
# include <cmath>

using std::cout;
using std::endl;
using std::cin;

int main ()
{

    float x = 0.0;
    cout << "lavariable x es" << x << endl;
    int z = sqrt(4);

    cin >> z;


    if (z == 2)
    {

        cout << "z es 2" << endl;

    }
    else 
    {
        cout << "z no es 2" << endl;
    }

    for(int i = 0; i < 10; i++)
    {
        cout << i << endl;
    }

    int i = 0;
    while (i < 10 )
    {
        cout << "Dentro del while" << i << endl;
        i = i + 2;

    }


    i = 0;
    do 
    {
        cout << "Dentro del do while" << i << endl;
        i = i + 3;
        
    }while (i < 10);




}