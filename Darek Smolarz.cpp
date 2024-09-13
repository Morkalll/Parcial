#include <iostream>

using namespace std;

int main()
{


int opcion;


do{

    cout << "-----MENU DE OPCIONES-----" << endl;
    cout << "Ingresa un numero para elegir una opcion: " << endl;
    cout << "1. Detector de anio bisiesto" << endl;
    cout << "2. Tabla de multiplicar inversa" << endl;
    cout << "3. FizzBuzz" << endl;
    cout << "Cualquier otro numero: Salir del programa" << endl;
    cin >> opcion;


    switch(opcion)
    {
    case 1:

            int anio;
            cout << "Ingresa un anio: " << endl;
            cin >> anio;

            if(anio % 4 == 0 &&! anio % 100 == 0)
            {
            cout << "El anio " << anio << " es bisiesto." << endl;
            }else if(anio % 400 == 0)
               {
               cout << "El anio " << anio << " NO es bisiesto." << endl;
               }else
                  {
                  cout << "El anio " << anio << " NO es bisiesto." << endl;
                  }
    break;


    case 2:
            int numero_a_multiplicar;
            int i;

            cout << "Ingrese un numero: " << endl;
            cin >> numero_a_multiplicar;

            for (i = 10; i > 0; i--)
            {
                cout << numero_a_multiplicar << " * " << i << " = " << numero_a_multiplicar*i << endl;
            }

    break;


    case 3:
            int numero_fizz_buzz;
            cout << "Ingrese el numero limite, igual o mayor a 15: " << endl;
            cin >> numero_fizz_buzz;

            if (numero_fizz_buzz < 15)
                {
                cout << "Te dije que sea igual o mayor a 15." << endl;
                }else
                {
                for(i = 0; i <= numero_fizz_buzz; i++)
                    {
                    if(i % 3 == 0 && i % 5 == 0)
                        {
                       cout << "FizzBuzz" << endl;
                        }else if(i % 3 == 0)
                            {
                            cout << "Fizz" << endl;
                            }else if(i % 5 == 0)
                                {
                                cout << "Buzz" << endl;
                                }else
                                    {
                                    cout << i << endl;
                                    }
                    }
            }

    break;


    default:
            cout << "Saliendo del programa..." << endl;

    break;

    }


}while(opcion < 4);


return 0;
}
