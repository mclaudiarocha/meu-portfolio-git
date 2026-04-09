# Resolução de Conflito

## O que causou o conflito
O conflito ocorreu no arquivo principal (.cpp), no método `apresentar()` da classe `Usuario`. Duas branches diferentes (`feature/validacao-idade` e `main`) modificaram o mesmo trecho do código (a mensagem exibida no `std::cout`) de formas diferentes.

## Como foi decidida a versão final
Foi escolhida uma versão mais organizada e completa, que exibe o nome e a idade do usuário de forma clara no formato: "Usuário: nome | Idade: idade".

## Como o conflito foi resolvido
O conflito foi resolvido manualmente editando o arquivo e removendo os marcadores de conflito (`<<<<<<<`, `=======`, `>>>>>>>`).  
