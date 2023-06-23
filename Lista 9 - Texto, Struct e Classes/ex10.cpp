#include <fstream>
#include <iostream>
#include <stdlib.h>

using namespace std;
/*Nathan de Araújo Cunha Lisboa
Uma pessoa criou um arquivo (nome fornecido pelo usuário) que contém as informações de 
15 eletrodomésticos: nome da loja, telefone e preço de cada eletrodoméstico. Elabore uma 
classe chamada Eletrodomestico com esses atributos e métodos para manipulá-los 
(construtores, assessores, exibição). Desenvolva um programa que permita ler os dados deste 
arquivo  e  preencher  um  vetor  com  objetos  do  tipo  Eletrodomestico.  O  programa  também 
deve  calcular  e  gravar  em  um  outro  arquivo  (nome  fornecido  pelo  usuário)  a  média  dos 
preços cadastrados e uma relação contendo o nome e o telefone das lojas cujo preço estava 
abaixo da média. 
Data: 7/12/2022 */
class Eletrodomestico {
private:
  string loja;
  int telefone;
  float preco;

public:
  void setLoja(string nLoja) {
    if (nLoja.length() > 1)
      loja = nLoja;
    else
      cout << "Nome inválido!";
  }
  string getLoja() { return loja; }
  void setTelefone(int nTelefone) {
    if (nTelefone > 10000000)
      telefone = nTelefone;
    else
      cout << "Telefone inválido!";
  }
  int getTelefone() { return telefone; }
  void setPreco(float nPreco) {
    if (nPreco > 0)
      preco = nPreco;
    else
      cout << "Preço inválido!";
  }
  float getPreco() { return preco; }
  void inicializaTudo(string loja, int telefone, float preco) {
    setLoja(loja);
    setTelefone(telefone);
    setPreco(preco);
  }
};

int main() {
  Eletrodomestico cadastro[15], analise[15];
  string loja, linha;
  int telefone;
  float preco, media, soma = 0.0;

  ofstream relatorio;
  relatorio.open("relatorio.txt");

  for (int i = 0; i < 15; i++) {
    cout << "Nome Loja " << i + 1 << ": ";
    cin >> loja;
    cout << "Telefone Loja " << i + 1 << ": ";
    cin >> telefone;
    cout << "Preço Loja " << i + 1 << ": ";
    cin >> preco;

    cadastro[i].inicializaTudo(loja, telefone, preco);

    relatorio << cadastro[i].getLoja() << endl;
    relatorio << cadastro[i].getTelefone() << endl;
    relatorio << cadastro[i].getPreco() << endl;
  }

  relatorio.close();

  ifstream leitura;
  leitura.open("relatorio.txt");

  for (int i = 0; i < 15; i++) {
    getline(leitura, loja);
    getline(leitura, linha);
    telefone = stoi(linha);
    getline(leitura, linha);
    preco = stof(linha);

    soma += preco;

    analise[i].inicializaTudo(loja, telefone, preco);
  }

  leitura.close();

  media = soma / 15.0;

  ofstream resultado;
  resultado.open("resultado.txt");

  resultado << "Média de preços: R$" << media << "\n" << endl;
  resultado << "Lojas com preço abaixo da média:" << endl;

  for (int i = 0; i < 15; i++) {
    if (analise[i].getPreco() < media) {
      resultado << "Nome: " << analise[i].getLoja() << endl;
      resultado << "Telefone: " << analise[i].getTelefone() << endl;
    }
  }

  resultado.close();
}