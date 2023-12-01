#pragma once
#include "pair.inl"
#include<iostream>

using namespace std;

template<class T_one, class T_Two>
ostream& operator<<(ostream& output, const Ppair < T_one, T_Two>& pair)
{
	output << "( " << pair.getValOne() << ", " << pair.getValTwo() << " )";
	return output;
}