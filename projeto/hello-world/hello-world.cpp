#include <iostream>

class Usuario {
public:
    std::string nome;
    int idade;

    Usuario(std::string n, int i) : nome(n), idade(i) {}
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}