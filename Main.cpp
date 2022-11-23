#include <iostream> // Importa Libreria por defecto.  
#include <math.h>   // Importa Libreria con funciones matematicas.

using namespace std;

int main()
{
    //Declaración de Variables
        int n; //<- Numero de Iteraciones
        float ea; //Error Aproximado Porcentual
        float xi, xi_1, ximas1, fxi, fxi_1; //Variables requeridas

    //Ingreso de Variables
    cout<<"Ingrese el Valor de [x0]:"<<endl; cin>>xi_1; //Se pide ingresar el primer valor
    cout<<"Ingrese el Valor de [x1]:"<<endl; cin>>xi;   //Se pide ingrear el segundo valor
    cout<<"Ingrese el numero de repeticiones:"<<endl; cin>>n; // Se pide ingresar el numero de repeticiones requeridas
    
    //Proceso Iterativo
    for (int i=1 ; i<=n; i++) //Se realiza un ciclo iterativo hasta llegar a numero ingresado previamente
    {
        //Evaluacion en la Funcion
        fxi=pow(xi,3)+2*pow(xi,2)+10*xi-20; // Se reemplaza los valores de la funcion por las variables declaradas para Fxi
        fxi_1=pow(xi_1,3)+2*pow(xi_1,2)+10*xi_1-20; // Se reemplaza los valores de la funcion por las variables declaradas para Fx_i
        
        //Formula Secante xn+1
        ximas1=xi-(((xi-xi_1)*fxi)/(fxi-fxi_1)); //Se reemplaza las variables en la formula del metodo secante
        
        //Calculo del error aproximado actual
        ea= ((xi-xi_1)/xi)*100; //Se calcula el error aproximado porcentual en valor absoluto
        if (ea<0) //Si el error aproximado es negativo se procede a convertirlo en positivo
        {
            ea=ea*-1; //Si el resultado obtenido es negativo se lo multiplica por -1 para inviertir su signo.
        }

        //Impresion de los resultados
        cout<<"iteracion: ("<<i<< ") | xi_1: [" <<xi_1<<"] | xi: ["<<xi<<"] | xi+1: ["<<ximas1<<"]"<<"| Error: "<<ea<<" %"<<endl;

        //Rotacion de variables PosImpresion-1
        xi_1=xi; //se reemplaza xi_1 por xi para la siguente iteracion hasta encontrar la raiz
        xi=ximas1; // se reemplaza xi por ximas1 para la siguiente iteracion hasta encontrar la raiz
    }
    
    
}