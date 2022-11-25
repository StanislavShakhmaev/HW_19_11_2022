#include <iostream>
using namespace std;

class Fraction
{
	int numerator;
	int denominator;
public:
	int get_numerator() const
	{
		return numerator;
	}
	int get_denominator() const
	{
		return denominator;
	}
	void set_numerator(int numerator)
	{
		this->numerator = numerator;
	}
	void set_denominator(int denominator)
	{
		this->denominator = denominator;
	}
};
void main()
{
	setlocale(LC_ALL, " ");
	Fraction A;
	A.set_numerator(1);
	A.set_denominator(2);
	cout << A.get_numerator() << " / " << A.get_denominator() << endl;

}
