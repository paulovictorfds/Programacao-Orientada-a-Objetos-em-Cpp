#include <iostream>
#include <cstdlib>
#include <fstream>

class Fluxos {
public:
    void copiaArquivo(std::string entrada, std::string saida) {
        std::ifstream fin;
        std::ofstream fout;

        char ch;
        fin.open(entrada);
        fout.open(saida);
        while(fin.get(ch)) {
            fout.put(ch);
        }
        fin.close();
        fout.close();
    }

    void strings(std::string literais) {
        std::ifstream fin;
        std::string str;
        fin.open(literais);
        if(!fin.is_open()) {
            exit(0);
        }
        std::getline(fin, str, ',');
        std::cout << "str = " << str << std::endl;
        std::getline(fin, str, ',');
        std::cout << "str = " << str << std::endl;
        std::getline(fin, str, ',');
        std::cout << "str = " << str << std::endl;
    }
};

int main()
{
    Fluxos f;
    // Realizando cópia de um arquivo.
    f.copiaArquivo("entrada.txt", "saida.txt");

    // Relizando leitura de strings em um arquivo
    f.strings("literais.txt");
    return 0;
}
