#include <iostream>
#include <string>

class Usuario {  //Definição da classe Usuario 
public:
    std::string nome;
    int idade;

    Usuario(std::string n, int i) : nome(n), idade(i) {
    if (idade < 0) idade = 0;
    }

    void apresentar() {
        std::cout << "Olá, meu nome é " << nome << " e tenho " << idade << " anos." << std::endl;
    }

    void fazerAniversario() {
    idade++;
    }
    
};

int main() {
    Usuario u("Claudia", 20);
    u.apresentar();
    return 0;
}