#pragma once
#include <utility>
#include <initializer_list>
#include <vector>
#include <algorithm>
#include <iostream>

template <typename T>
class ExtArray
{
private:
	std::vector<T> extended_array;
	size_t _size;
public:
	ExtArray(std::initializer_list<T> l) : extended_array(l)
	{
		_size = l.size();
	}

	ExtArray(int size) : _size(size)
	{
		extended_array.resize(_size);
	}

	T& operator[](size_t index)
	{
		return extended_array[index];
	}

	size_t size()
	{
		return _size;
	}

	double mean()
	{
		if (_size != 0) {
			double sum = 0;
			for (size_t i = 0; i < _size; i++)
			{
				sum += extended_array[i];
			}
			return sum / _size;
		}
		return 0;
	}

	double mean(int n1, int n2)
	{
		if (_size != 0) {
			if (n1 < 0 || n1 > n2 || n2 > _size) {
				throw  std::invalid_argument("Bad argument!");
			}
			else {
				double sum = 0;
				for (size_t i = n1; i <= n2; i++)
				{
					sum += extended_array[i];
				}
				return sum / (n2 - n1 + 1);
			}
		}
		return 0;
	}

	double median()
	{
		if (_size != 0) {
			std::vector<T> temp_array;
			std::copy(extended_array.begin(), extended_array.end(), back_inserter(temp_array));
			std::sort(temp_array.begin(), temp_array.end());
			if (_size % 2 == 1)
			{
				return temp_array[_size / 2];
			}
			else
			{
				return static_cast<double>(temp_array[(_size / 2) - 1] + temp_array[_size / 2]) / 2;
			}
		}
		return 0;
	}

	std::pair<T, int> mode()
	{
		if (_size != 0) {
			T max = extended_array[0], cmax = 0, rmax = 0;
			for (int i = 0; i < _size; i++)
			{
				if (cmax > rmax)
				{
					rmax = cmax;
					max = extended_array[i - 1];
				}
				cmax = 0;
				for (int j = i; j < _size; j++)
				{
					if (extended_array[j] == extended_array[i])
					{
						cmax++;
					}
				}
			}
			return std::pair<T, int>(max, rmax);
		}
		return std::pair<T, int>(0, 0);
	}

	int checkSum()
	{
		if (_size != 0) {
			std::string cont_type = typeid(decltype(extended_array)::value_type).name();
			if (cont_type == "int" || cont_type == "bool") {
				int sum = 0;

				for (size_t i = 0; i < _size; i++)
				{
					if ((extended_array[i] == 0) || (extended_array[i] == 1)) {
						sum += extended_array[i];
					}
					else {
						throw std::logic_error("Bad data!");
					}
				}
				return sum;
			}
			else {
				throw std::bad_typeid();
			}
		}
		return 0;
	}
};