//--Dato de entrada: l1,l2,l3 (double)
//--Dato de Salida : area, perimetro (double)

#include "CTriangulo.h"

int main()
{
  tnumero lado1,lado2,lado3;

  do {
    cout << "Lado 1 : ";
    cin >> lado1;
    cout << "Lado 2 : ";
    cin >> lado2;
    cout << "Lado 3 : ";
    cin >> lado3;
  }while( ! ((lado1+lado2>lado3) and (lado2+lado3>lado1) and (lado3+lado1>lado2)) );

  CTriangulo T1(lado1, lado2, lado3);
  cout << "El area es : " << T1.area() << "\n";
  cout << "El perimetro es : " << T1.perimetro()<< "\n";

  cout << "\n\nCreamos otro objeto\n";
  CTriangulo T2;
  T2.setl1(34.5);
  T2.setl2(23.45);
  T2.setl3(23.45);
  cout << "El area es : " << T2.area() << "\n";
  cout << "El perimetro es : " << T2.perimetro()<< "\n";

  //--- creamos un objeto dinamico
  cout << "\n\nAhora trabajamos con un objeto dinamico \n";

  CTriangulo *pObjeto= nullptr;

  pObjeto = new CTriangulo(3,4,5);
  cout << "El area es : " << pObjeto->area() << "\n";
  cout << "El perimetro es : " <<  (*pObjeto).perimetro() << "\n";
  delete pObjeto;
  pObjeto= nullptr;

  return 0;
}



