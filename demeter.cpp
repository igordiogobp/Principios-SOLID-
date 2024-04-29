#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <string>

//Classe ferindo o Princípio de Aberto/Fechado

class Bateria {
public:
    void carregar() {}
};

class Celular {
public:
    Bateria* bateria;
    Celular(): bateria(new Bateria()) {}
    Bateria* getBateria() { return bateria; }
};

class Usuario {
public:
    void carregarCelular(Celular* celular) {
        celular->getBateria()->carregar();
    }
};

//corecao 
class Bateria {
public:
    void carregar() {}
};

class Celular {
private:
    Bateria* bateria;
public:
    Celular(): bateria(new Bateria()) {}
    void carregarBateria() { bateria->carregar(); }
};

class Usuario {
public:
    void carregarCelular(Celular* celular) {
        celular->carregarBateria();
    }
};

int main(){

    return 0;
}