//d) Desenvolva um programa que solicite ao usu�rio para inserir uma senha e,
//em seguida, permita que o usu�rio tente inserir a senha at� tr�s vezes. Caso o
//usu�rio acerte a senha, exiba uma mensagem de sucesso. Caso contr�rio,
//exiba uma mensagem informando que a senha est� incorreta.

#include <iostream>

using namespace std;

int main (){
	setlocale (LC_ALL, "");
	int i = 3;
	string senhacorreta = "123";
	string senha;
	
	do{
		cout << "Insira uma senha: " << endl;
		cin >> senha;
		
		if (senha == senhacorreta){
			cout << "Senha Correta!!";
			i = 4;
		}else{
			cout << "Senha Incorreta !! Voc� tem " << i << " tentativas" << endl;
		}
		i--;
		
	
	}
	while (i >=0);
		
	
	return 0;
}
