//Angelyn Judith Diaz Zeceña 5090-23-1407
//Programa 4 

#include <iostream>
#include <string>

using namespace std;

//  Aqui se define la clase CuentaBancaria
class CuentaBancaria {
private:
    // Atributos privados de la cuenta: nombre del titular, número de cuenta y saldo
    string nombreTitular;
    string numeroCuenta;
    double saldo;

public:
    //  Aqui se presenta un Constructor que inicializa la cuenta con información básica
    CuentaBancaria(const string& nombre, const string& numero, double saldoInicial)
        : nombreTitular(nombre), numeroCuenta(numero), saldo(saldoInicial) {}

    // Método para realizar un depósito en la cuenta
    void depositar(double cantidad) {
        // Aqui  Verifica que la cantidad a depositar sea mayor que cero
        if (cantidad > 0) {
            saldo += cantidad; 
            cout << "Depósito exitoso. Nuevo saldo: Q" << saldo << endl;
        }
        else {
            cerr << "Error: La cantidad debe ser mayor que cero." << endl;
        }
    }

    // Método para realizar un retiro de la cuenta
    void retirar(double cantidad) {
        // Verificar que la cantidad a retirar sea mayor que cero y no supere el saldo actual
        if (cantidad > 0 && cantidad <= saldo) {
            saldo -= cantidad; // Actualizar el saldo restando la cantidad retirada
            cout << "Retiro exitoso. Nuevo saldo: Q" << saldo << endl;
        }
        else {
            cerr << "Error: Fondos insuficientes o cantidad no válida." << endl;
        }
    }

    // Método para consultar el saldo actual de la cuenta
    double consultarSaldo() const {
        return saldo;
    }
};

int main() {

    cout << "-----Hola personita, bienvenida a la Cuenta Bancaria en Quetzales-----" << endl;

   
    string nombre, numeroCuenta;
    double saldoInicial;

    // Solicitar al usuario información para crear la cuenta
    cout << "Ingrese su nombre: ";
    getline(cin, nombre);

    cout << "Ingrese el número de cuenta: ";
    getline(cin, numeroCuenta);

    cout << "Ingrese el saldo inicial en quetzales: Q";
    cin >> saldoInicial;

    // Crear una instancia de la clase CuentaBancaria con los datos proporcionados por el usuario
    CuentaBancaria miCuenta(nombre, numeroCuenta, saldoInicial);

    // Realizar operaciones y mostrar resultados
    miCuenta.depositar(500.0);
    miCuenta.retirar(200.0);

    // Consultar y mostrar el saldo actual
    cout << "Saldo actual: Q" << miCuenta.consultarSaldo() << endl;

    return 0;
}
