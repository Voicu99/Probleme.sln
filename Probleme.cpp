// Probleme.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>

std::string decodificare_mesaj(std::vector<int> mesaj_codat)
{
	std::string mesaj_decodat = "";
	for (int num : mesaj_codat) //for(int i = 0 ; i< mesaj_codat.size();i++)
									// int num = mesaj_codat[i]
	{
		// Asuam ca 'a' = 1,'b' =2  etc/
		char litera = 'a' + num - 1;
		mesaj_decodat += litera;
	}
	return mesaj_decodat;
}
std::string inverseaza_string(std::string input_string)
{
	std::string output = "";
	for (int i = input_string.size(); i >= 0; i--)
	{
		output += input_string[i];
	}
	return output;
}


/*
* Teme:
* De terminat:
Oamenii de stiinta au nevoie de ajutor pentru
a combate incalzirea globala.
In acest exerctiu trebuie sa analizati inregistrarile
temperaturilor si sa o gasititi pe cea mai apropiata de 0

Reguli:
Scrieti un program ce sa printeze temperatura cea mai apropiata
de 0 din datele primite.
Daca doua numere sunt la o distanta egala spre 0,
numarul intreg pozitiv va fi considerat cel mai aproape
(de exemplu, daca temperatura este -5 si 5,afisati 5).
In caz de temp 0  se va printa 0
Input:
Linia 1: Veti primi numarul de inregistrai cu temperaturi
Linia 2: Veti primi inregistraile cu valori.

Teste
Input:
5
1 -2 -8 4 5
Output:
1

Input:
3
-12 -5 -137
Output:
-5


Input:
6
42 -5 12 21 5 24
Output:
5

De Facut:

DejaVu:
Intr-un sir de caractere 
aleatorii task-ul tau este sa 
aflii daca exista un carcater ce este repetat sau sunt doar caractere 
unice
Input format: sir de caractere litere(nu vor fi numer e sau 
alte caractere speciale)

Ex:
aaaaghlj
Output: Deja Vu

Ai 2 prieteni ce vorbesc orca intre ei.
Limba orca sunt aceleasi cuvinte ca in limba romana doar ca se ia prima
litera a fiecarui cuvant si se pune la sfarsitul cuvantului 
in urma caruia se adauga un ay
drum= rumday
Input:
Un string ce reprezinta o propozite in limba romana
Output:
Un string ce reprezinta traducerea in limba orca

	
*/

int temperaturi(std::vector<int> temperaturi)
{
	const int numar_temperaturi = temperaturi.size();
	//hint abs() ne da val absoluta adica orice numar dar pozitiv
	int temp_spre_zero = temperaturi[0];
	int indice_spre_zero = 0;
	for (int i = 1; i < temperaturi.size(); i++)
	{
		if (temperaturi[i] == 0)
		{
			return temperaturi[i];
		}
		else if (abs(temperaturi[i]) < abs(temp_spre_zero))
		{
			temp_spre_zero = temperaturi[i];
		}
	}
	return temp_spre_zero;

}


int main()
{
	/*
Decodarea Mesajului Secret
Descriere: Un mesaj secret a fost codat prin înlocuirea 
fiecărui caracter cu poziția sa din alfabet 
(de exemplu, 'a' devine 1, 'b' devine 2, etc.). 
Mesajul este apoi stocat într-un vector ca o serie de numere. 
Scopul este de a decoda mesajul și de a afișa textul original.

Intrări:
Un vector de întregi care reprezintă mesajul codat.

Ieșire:
Șirul de caractere reprezentând mesajul decodat.
*/
	std::vector<int> mesajCodat = { 8,5,12,12,15 };//hello
	std::string mesaj_decodificat = decodificare_mesaj(mesajCodat);
	std::cout << "Mesajul decodat : " << mesaj_decodificat << std::endl;
	/*
	Input : Sergiu
	Outpu : uigreS
	*/
	std::string inversat = inverseaza_string("Sergiu");
	std::cout << inversat << std::endl;
	int my_array[5];
	//un truc cu care sa aflam dimensiunea unui array
	int my_array_lenght = (sizeof(my_array) / sizeof(int));


	std::vector <int> input{ 1, -2, -8, 4, 5 };
	
	std::cout << "Temp este " << temperaturi(input);

	
}