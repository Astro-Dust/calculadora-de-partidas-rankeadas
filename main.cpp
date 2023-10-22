/*
Crie uma função que recebe como parâmetro a quantidade de vitórias e derrotas de um jogador,
depois disso retorne o resultado para uma variável, o saldo de Rankeadas deve ser feito através do calculo (vitórias - derrotas)

Se vitórias for menor do que 10 = Ferro
Se vitórias for entre 11 e 20 = Bronze
Se vitórias for entre 21 e 50 = Prata
Se vitórias for entre 51 e 80 = Ouro
Se vitórias for entre 81 e 90 = Diamante
Se vitórias for entre 91 e 100= Lendário
Se vitórias for maior ou igual a 101 = Imortal

## Saída

Ao final deve se exibir uma mensagem:
"O Herói tem de saldo de **{saldoVitorias}** está no nível de **{nivel}**"
*/

#include <iostream>

static void jogadorDesempenho(std::string nome, int vitorias, int derrotas) {
    std::string titulo;
    int resultado = vitorias - derrotas;

    switch(resultado) {
        case 1 ... 10:
            titulo = "Ferro";
            break;
        case 11 ... 20:
            titulo = "Bronze";
            break;
        case 21 ... 50:
            titulo = "Prata";
            break;
        case 51 ... 80:
            titulo = "Ouro";
            break;
        case 81 ... 90:
            titulo = "Diamante";
            break;
        case 91 ... 100:
            titulo = "Lendário";
            break;
        default:
            if(resultado >= 101) {
                titulo = "Imortal";
            } else {
                puts("Não há título para este resultado");
            }
    }

    std::cout << "O herói/heroina " << nome << ", que tem saldo de " << resultado << ", está com o título " << titulo << std::endl;
}

int main() {

    std::string nome;
    int qtdVitorias;
    int qtdDerrotas;

    std::cout << "Qual o nome do herói/heroina? -> ";
    std::cin >> nome;
    std::cout << "Quantidade de vitórias? -> ";
    std::cin >> qtdVitorias;
    std::cout << "Quantidade de derrotas? -> ";
    std::cin >> qtdDerrotas;

    jogadorDesempenho(nome, qtdVitorias, qtdDerrotas);


}