#include <iostream>
#include <string>

class Usuario {  //Definição da classe Usuario 
public:
    std::string nome;
    int idade;

    Usuario(std::string n, int i) : nome(n), idade(i) {}

    void apresentar() {
    std::cout << "Usuário: " << nome << " | Idade: " << idade << std::endl;
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