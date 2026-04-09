#include <iostream>

class Usuario {
public:
    std::string nome;
    int idade;

    Usuario(std::string n, int i) : nome(n), idade(i) {}

    void apresentar() {
        std::cout << "Olá, meu nome é " << nome << " e tenho " << idade << " anos." << std::endl;
    }
    
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}