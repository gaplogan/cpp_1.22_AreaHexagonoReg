#include <iostream>
#include <locale>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    double lado, area;

    // Validar o lado.
    do
    {
        cout << "Digite o valor do lado do hexágono regular: ";
        cin >> lado;
        lado = std::abs(lado);
    } while (lado <= 0);

    area = (3 * lado * lado * sqrt(3)) / 2;

    cout << "\nÁrea do hexágono regular: " << area << endl;

    return 0;
}