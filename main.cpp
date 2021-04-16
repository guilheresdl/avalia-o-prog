#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main (){
char nome[50];
cout << "Digite uma palavra com no máximo 50 caracteres: ";
cin.getline(nome,50);

for (int i =0; i < 50; i++){
  if (nome[i]=='a'){
  cout << "#2=1\n";
 }
  if (nome[i]=='b'){
  cout << "#2=2\n";
 }
  if (nome[i]=='c'){
  cout << "#2=3\n";
 }
  if (nome[i]=='d'){
  cout << "#3=1\n";
 }
  if (nome[i]=='e'){
  cout << "#3=2\n";
 }
  if (nome[i]=='f'){
  cout << "#3=3\n";
 }
  if (nome[i]=='g'){
  cout << "#4=1\n";
 }
 if (nome[i]=='h'){
  cout << "#4=2\n";
 }
 if (nome[i]=='i'){
  cout << "#4=3\n";
 }
 if (nome[i]=='j'){
  cout << "#5=1\n";
 }
 if (nome[i]=='k'){
  cout << "#5=2\n";
 }
 if (nome[i]=='l'){
  cout << "#5=3\n";
 }
 if (nome[i]=='m'){
  cout << "#6=1\n";
 }
 if (nome[i]=='n'){
  cout << "#6=2\n";
 }
 if (nome[i]=='o'){
  cout << "#6=3\n";
 }
 if (nome[i]=='p'){
  cout << "#7=1\n";
 }
 if (nome[i]=='q'){
  cout << "#7=2\n";
 }
 if (nome[i]=='r'){
  cout << "#7=3\n";
 }
 if (nome[i]=='s'){
  cout << "#7=4\n";
 }
 if (nome[i]=='t'){
  cout << "#8=1\n";
 }
 if (nome[i]=='u'){
  cout << "#8=2\n";
 }
 if (nome[i]=='v'){
  cout << "#8=3\n";
 }
 if (nome[i]=='w'){
  cout << "#9=1\n";
 }
 if (nome[i]=='x'){
  cout << "#9=2\n";
 }
 if (nome[i]=='y'){
  cout << "#9=3\n";
 }
 if (nome[i]=='z'){
  cout << "#9=4\n";
 }   
}
}