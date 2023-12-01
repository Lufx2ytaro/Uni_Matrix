#include<iostream>
#include<vector>
#include"adin.h"
#include"Matrix.h"
using namespace std;


void skyrim(string message)
{
	cout << message << endl;
	cout << "preesssssss key to exit" << endl;
	exit(1);
}

int main()
{
	Ppair<int, int> intPair(1,2);
	Ppair<int, int> intPair_1(1,2);
	Ppair<string, string> stringPair("KEVIN", "LEE");
	/*intPair.display();
	cout << endl;*/
	stringPair.display();
	/*cout << endl;
	cout<<stringPair;    */  
	
	cout << endl;
	Matrix<int> matr(5, 8);
	cout<< matr;

}