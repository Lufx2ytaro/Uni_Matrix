#include<iostream>
#include<vector>
#include"adin.h"
using namespace std;


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
	
}