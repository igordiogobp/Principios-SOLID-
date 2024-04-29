#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//Classe ferindo o Princípio de DIP
class Lampada {
public:
    void ligar() {
    }
};

class Interruptor { //interruptor esta acoplado a classe lampada
private:
    Lampada lampada;
public:
    void acionar() {
        lampada.ligar();
    }
};

// Código que segue o DIP
class Dispositivo {
public:
    virtual void ligar() = 0;
};

class Lampada : public Dispositivo {
public:
    void ligar() override {
    }
};

class Interruptor {
private:
    Dispositivo& dispositivo;
public:
    Interruptor(Dispositivo& dispositivo) : dispositivo(dispositivo) {}
    void acionar() {
        dispositivo.ligar();// ligar (nao necessariamente so a lampada)
    }
};


int main(){

    return 0;
}