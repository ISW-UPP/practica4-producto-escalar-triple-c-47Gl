#include <iostream>
using namespace std;
int main()
{

    int vector1[2];
    int vector2[2];
    int vector3[2];
    int i, j, p;
    double i1, j1, k1;
    for (i = 0; i <= 2; i++) {
        cout << "introduce los numeros del vector A "<<i<<": "<<endl;
        cin >> vector1[i];
    }

    for (j = 0; j <= 2; j++) {
        cout << "introduce los numeros del vector B " << j << ": "<<endl;
        cin >> vector2[j];
    }
    for (p = 0; p <= 2; p++) {
        cout << "introduce los numeros del vector C " << p << ": "<<endl;
        cin >> vector3[p];
    }
    double escalar_triple;
    int escalar_A, vector_I; //escalarA es I
    int escalar_B, vector_J; //escalarB es J
    int escalar_C, vector_K;//escalr C es K
    vector_I = ((vector2[1] * vector3[2]) - (vector3[1] * vector2[2]));  
    vector_J = ((vector1[1] * vector3[2]) - (vector3[1] * vector1[2]));
    vector_K = ((vector1[1] * vector2[2]) - (vector2[1] * vector1[2]));
    //operaciones para sacar el escalar de a,bc
    escalar_A = ((vector2[1] * vector3[2]) - (vector3[1] * vector2[2])) * vector1[0];
    escalar_B = ((vector1[1] * vector3[2]) - (vector3[1] * vector1[2])) * vector2[0];
    escalar_C = ((vector1[1] * vector2[2]) - (vector2[1] * vector1[2])) * vector3[0];
    //se realiza la ultima operacion para conocer el triple escalar
    escalar_triple = escalar_A - escalar_B + escalar_C;
    cout << endl;

    cout << "El producto escalar de A: " << escalar_A << "\n";
    cout << "El producto escalar de B: " << escalar_B << "\n";
    cout << "El producto escalar de C: " << escalar_C << "\n";
    cout << "el producto escalar triple es:" << escalar_triple << endl;
}
