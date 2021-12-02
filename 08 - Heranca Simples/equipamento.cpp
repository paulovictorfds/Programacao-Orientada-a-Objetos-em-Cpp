#include "equipamento.hpp"
#include <string.h>
#include <iostream>

Equipamento::Equipamento() {

}

void Equipamento::setNome(const char *nome) {
    strcpy(this->nome, nome);
}

void Equipamento::setFabricante(const char *fabricante) {
    strcpy(this->fabricante, fabricante);
}

void Equipamento::setPreco(float preco) {
    this->preco = preco;
}

char *Equipamento::getNome() {
    return this->nome;
}

char *Equipamento::getFabricante() {
    return this->fabricante;
}

float Equipamento::getPreco() {
    return this->preco;
}
