#ifndef EQUIPAMENTO_HPP
#define EQUIPAMENTO_HPP


class Equipamento {
private:
    char nome[100];
    char fabricante[100];
    float preco;
public:    
    Equipamento();
    void setNome(const char *nome);
    void setFabricante(const char *fabricante);
    void setPreco(float preco);
    char *getNome();
    char *getFabricante();
    float getPreco();
};

#endif // EQUIPAMENTO_HPP
