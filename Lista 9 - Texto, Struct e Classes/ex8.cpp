#include <iostream>
#include <stdlib.h>
using namespace std;
/*Nathan de Araújo Cunha Lisboa
Elaborar uma classe Pessoa (código, nome, idade, endereço, número, complemento) e, após 
cadastrar os dados de várias pessoas em um vetor de objetos desta classe, gravar o conteúdo 
do  vetor  no  arquivo  cujo  nome  deve  ser  fornecido  pelo  usuário.  Na  classe  Pessoa,  crie  os 
métodos para manipular os atributos (construtores, assessores, métodos gerais). 
 
Data: 7/12/2022 */

class Pessoa {
private:
  int codigo;
  string nome;
  int idade;
  string endereco;
  int numero;
  string complemento;

public:
  Pessoa() {
    codigo = 0;
    nome = "";
    idade = 0;
    endereco = "";
    numero = 0;
    complemento = "";
  }
  void setCodigo(int codigo) { this->codigo = codigo; }
  int getCodigo() { return codigo; }

  void setNome(string nome) { this->nome = nome; }
  string getNome() { return nome; }

  void setIdade(int idade) { this->idade = idade; }
  int getidade() { return idade; }

  void setEndereco(string endereco) { this->endereco = endereco; }
  string getEndereco() { return endereco; }

  void setComplemento(string complemento) { this->complemento = complemento; }
  string getcomplemento() { return complemento; }

  void setNumero(int numero) { this->numero = numero; }
  int getNumero() { return numero; }
};
int main() {
  FILE *arq;
  arq = fopen("arquivo.txt", "w");
  Pessoa pessoas[3];
  int codigo, idade, numero;
  string nome, endereco, complemento;
  for (int i = 0; i < 1; i++) {
    cin >> codigo >> nome >> idade >> endereco >> numero >> complemento;
    pessoas[i].setCodigo(codigo);
    pessoas[i].setNome(nome);
    pessoas[i].setIdade(idade);
    pessoas[i].setEndereco(endereco);
    pessoas[i].setNumero(numero);
    pessoas[i].setComplemento(complemento);
  }
  for (int i = 0; i < 1; i++) {
    cout << pessoas[i].getCodigo() << pessoas[i].getNome()
         << pessoas[i].getidade() << pessoas[i].getEndereco()
         << pessoas[i].getNumero() << pessoas[i].getcomplemento() << endl;
  }
  return 0;
}