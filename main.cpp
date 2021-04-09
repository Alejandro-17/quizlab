/*P9 Escriba un programa que pida un número entero N e imprima el resultado de la suma
de todos sus dígitos elevados a sí mismos.
Ej: si se ingresa 1223 el resultado sería 1^1 + 2^2 + 2^2 + 3^3 = 36*/

#include <iostream>

using namespace std;

int main()
{
    int N,auxN,digit,sum=0,sumpow=0,pow,powdigt=0,sumapow=0;
    cout<<"Por favor ingrese un numero entero: "<<endl;
    cin>>N;
    auxN=N;

    while(auxN>0){
        digit=auxN%10;
        if(digit>powdigt){
            powdigt=digit;
            sumapow=1;

        }

        else if (digit==powdigt)sumapow++;
      pow=digit;
      for(int i=1;i<digit;i++){
          sumpow=0;
          for (int k=0;k<pow;k++)sumpow+=digit;
          pow=sumpow;
      }
      sum=sum+pow;
      auxN=auxN/10;
    }
    cout<<"La suma de cada uno de los digitos elevados a si mismos del numero "<<N<<" es: "<<sum<<endl;
    cout<<"El mayor digito encontrado es el "<<powdigt<<" Que aparece "<<sumapow<<" veces"<<endl;

    return 0;
}
