#include <iostream>
#include <fstream>
#include<stdio.h>
/*Nathan de Araújo Cunha Lisboa
Dados  os  seguintes  campos  de  uma  classe  Pessoa:    nome,  dia  de  aniversário  e  mês  de 
aniversário, desenvolver um programa que preencha um cadastro de 10 pessoas e grave em 
um arquivo (nome fornecido pelo usuário) cada um dos meses do ano e quem são as pessoas 
que fazem aniversário naquele mês, exibir também o dia. Na classe Pessoa, crie os métodos 
para manipular os atributos (construtores, assessores, métodos gerais). 
 
Data: 7/12/2022 */
using namespace std;
class Pessoa{
private:

string nome;
int niver;
int mesniv;


public:



void setNome(string novonome){
  nome=novonome;
}
string getNome(){
  return nome;
}

void setNiver(int novoniver){
  niver=novoniver;
}
int getNiver(){
  return niver;
}
void setMesniv(int novomes){
  mesniv=novomes;
}
int getMesniv(){
  return mesniv;
}
void inicializaTudo (string nomepessoa, int niversario,int mes){
  setNome(nomepessoa);
  setNiver(niversario);
  setMesniv(mes);
  
}

};




int main() {
  Pessoa humanos[2];
  string nome;
  int niver;
  int mesniv;

  ofstream arquivo;
  arquivo.open("arquivo.txt", ios::out);

  
  for(int i=0;i<2;i++){
    cout<<"Digite o nome da pessoa: ";
    cin>>nome;
 
    cout<<"Digite o dia do aniversario: ";
    cin>>niver;
   
    cout<<"Digite o mes de niver: ";
    cin>>mesniv;
    
    humanos[i].inicializaTudo(nome, niver, mesniv);
   

    
  }
   arquivo << "JANEIRO" << endl;
  for (int i = 0; i < 2; i++) {
    if (humanos[i].getMesniv() == 1)
      arquivo << "- " << humanos[i].getNome() << endl;
  }
  arquivo << "\nFEVEREIRO" << endl;
  for (int i = 0; i < 2; i++) {
    if (humanos[i].getMesniv() == 2)
      arquivo << "- " << humanos[i].getNome() << endl;
  }
  arquivo << "\nMARÇO" << endl;
  for (int i = 0; i < 2; i++) {
    if (humanos[i].getMesniv() == 3)
      arquivo << "- " << humanos[i].getNome() << endl;
  }
  arquivo << "\nABRIL" << endl;
  for (int i = 0; i < 2; i++) {
    if (humanos[i].getMesniv() == 4)
      arquivo << "- " << humanos[i].getNome() << endl;
  }
  arquivo << "\nMAIO" << endl;
  for (int i = 0; i < 2; i++) {
    if (humanos[i].getMesniv() == 5)
      arquivo << "- " << humanos[i].getNome() << endl;
  }
  arquivo << "\nJUNHO" << endl;
  for (int i = 0; i < 2; i++) {
    if (humanos[i].getMesniv() == 6)
      arquivo << "- " << humanos[i].getNome() << endl;
  }
  arquivo << "\nJULHO" << endl;
  for (int i = 0; i < 2; i++) {
    if (humanos[i].getMesniv() == 7)
      arquivo << "- " << humanos[i].getNome() << endl;
  }
  arquivo << "\nAGOSTO" << endl;
  for (int i = 0; i < 2; i++) {
    if (humanos[i].getMesniv() == 8)
      arquivo << "- " << humanos[i].getNome() << endl;
  }
  arquivo << "\nSETEMBRO" << endl;
  for (int i = 0; i < 2; i++) {
    if (humanos[i].getMesniv() == 9)
      arquivo << "- " << humanos[i].getNome() << endl;
  }
  arquivo << "\nOUTUBRO" << endl;
  for (int i = 0; i < 2; i++) {
    if (humanos[i].getMesniv() == 10)
      arquivo << "- " << humanos[i].getNome() << endl;
  }
  arquivo << "\nNOVEMBRO" << endl;
  for (int i = 0; i < 2; i++) {
    if (humanos[i].getMesniv() == 11)
      arquivo << "- " << humanos[i].getNome() << endl;
  }
  arquivo << "\nDEZEMBRO" << endl;
  for (int i = 0; i < 2; i++) {
    if (humanos[i].getMesniv() == 12)
      arquivo << "- " << humanos[i].getNome() << endl;
  }

  arquivo.close();

}