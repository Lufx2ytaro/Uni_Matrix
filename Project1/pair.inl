#pragma once
#include<iostream>
#include"adin.h"

using namespace std;

template<class T_one, class T_Two>
class Ppair
{
	T_one val_one;
	T_Two val_two;
public:

	Ppair() : val_one{ T_one() }, val_two{ T_Two() } {};

	Ppair(const T_one& val_one, const T_Two& val_two) :
		val_one{ val_one },
		val_two{ val_two }
	{}

	void setValOne(T_one val)
	{
		val_one = val;
	}
	void setValTwo(T_Two val)
	{
		val_two = val;
	}

	void display() const
	{
		cout << "( " << val_one << ", " << val_two << " )";
	}

	T_one getValOne() const
	{
		return val_one;
	}
	T_Two getValTwo() const
	{
		return val_two;
	}



	bool operator==(const Ppair& pair)
	{
		return this->val_one == pair.val_one && this->val_two == pair.val_two;
	}
	bool operator!=(const Ppair& pair)
	{
		return !(*this == pair);
	}
};