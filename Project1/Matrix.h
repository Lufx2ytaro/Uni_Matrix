#pragma once
#include<iostream>

using namespace std;

void skyrim(string message);

template<class T>
class Matrix
{
	uint32_t h;
	uint32_t w;
	T** m;

	bool allocate(uint32_t h, uint32_t w)
	{
		if (h <= 0 || w <= 0)
		{
			return false;
		}
		this->h = h;
		this->w = w;

		m = new T * [h];

		for (size_t i = 0; i < h; i++)
		{
			m[i] = new T[w];
			{
				for (size_t j = 0; j < w; j++)
				{
					m[i][j] = T();
				}
			}
		}
		return true;
	}
	void clear()
	{
		for (size_t i = 0; i < h; i++)
		{
			delete[] m[i];
		}
		delete[]m;
		m = nullptr;
		h = w = 0;

	}

	void copyTo(const T** const from)
	{
		for (size_t i = 0; i < h; i++)
		{
			for (size_t j = 0; j < w; j++)
			{
				m[i][j] = from[i][j];
			}
		}
	}


public:

	Matrix(uint32_t h, uint32_t w)
	{
		if (!allocate(h, w))
		{
			skyrim("wrong size ! ");
		}
	}

	Matrix(uint32_t size) : Matrix(size, size) {};
		Matrix()
	{
		h = w = 0;
		m = nullptr;

	};


	Matrix(const Matrix& obj)
	{
		clear();
		allocate(obj.h, obj.w);
		copyTo(obj);
	}

	~Matrix()
	{
		clear();
	}


	auto& operator()(uint32_t h, uint32_t w) {

		if (h < 0 && h > this->h || w <0 && w> this->w)
		{
			skyrim("Element not found");
		}
		return m[h][w];

	}

	Matrix<T>& operator=(const Matrix& from)
	{
		if (&from != this)
		{
			clear();
			allocate(from.h, from.w);
			copyTo(from);
		}
		return *this;
	}


	friend ostream& operator<<(ostream & output, const Matrix & matrix)
	{
		if (matrix.m == nullptr)
		{
			output << "EXXXXX" << endl;
		}
		for (size_t i = 0; i < matrix.h; i++)
		{
			for (size_t j = 0; j < matrix.w; j++)
			{
				output << matrix.m[i][j] << " ";
			}
			cout << endl;
		}
		return output;
	}



};