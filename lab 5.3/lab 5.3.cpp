#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double z(const double x);

int main()
{
	double pp, pk, q;
	int n;

	cout << "pp = "; cin >> pp;
	cout << "pk = "; cin >> pk;
	cout << "n = "; cin >> n;

	cout << fixed;
	cout << "-----------------------------------------------" << endl;
	cout << "|" << setw(7) << "pp" << " |"
		<< setw(10) << "pk" << " |"
		<< setw(10) << "q" << " |"
		<< setw(10) << "p" << " |"
		<< endl;
	cout << "-----------------------------------------------" << endl;


	double dp = (pk - pp) / n;
	double p = pp;

	while (p <= pk)
	{
		q = z (p * p + 1) - z (p * p - 1 ) + 2 * z (p);

		cout << "|" << setw(7) << setprecision(2) << pp << " |"
			<< setw(10) << setprecision(5) << pk << " |"
			<< setw(10) << q << " |"
			<< setw(10) << p << " |"
			<< endl;
		p += dp;
	}
	return 0;
}
double z(const double x)
{
	if (abs(x) >= 1)
		return (sin(x) + 1) / (cos(x) * cos(x) + exp(x));
	else
	{
		double S = 0;
		int k = 0;
		double a = 1;
		S = a;
		do
		{
			k++;
			double R = 2 * x / k;
			a *= R;
			S += a;
		} while (k < 6);
		return 1 / exp (x * x ) * S;
	}
}
