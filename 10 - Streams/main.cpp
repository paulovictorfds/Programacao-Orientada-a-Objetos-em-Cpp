#include <fstream>
#include <string>
#include <cstdlib>
#include <iostream>

class ManipulaArquivos {
public:
    void lerArquivo() {
        std::ifstream fin;
        std::string s;
        fin.open("c:/Users/pvict/Documents/nome.txt");
        if(!fin.is_open()) {
            exit(1);
        }
        fin >> s;
        std::cout <<  "leu: " << s << "\n";
        fin.close();
    }
    void escreveArquivo() {
        std::ofstream fout;
        fout.open("c:/Users/pvict/Documents/nome.txt");
        if(!fout.is_open()) {
            exit(0);
        }
        fout << "Paulo Victor\n";
        fout.close();
    }
};

int main()
{
    ManipulaArquivos arquivo;

    arquivo.escreveArquivo();
    arquivo.lerArquivo();

    return 0;
}
