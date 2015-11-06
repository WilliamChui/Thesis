#include <iostream>
#include <cmath>
using namespace std;

// For a binomial distribution B(n, p), this function return P(X >= k) for a given positive integer k
double binomial(double n, double k, double p)
{
	double q = 1 - p;
	double sum = 0;
	double lprob = n * log(p);

	for (double i = n; i >= k; i--)
	{
		sum += exp(lprob);

		if (i > k) 
		{
			lprob = lprob + log(i / (n - i + 1)) + log(q / p);
		}
	}

	return sum;
}



int main()
{
	cout << binomial(199, 25, 1.0/3398) << endl;

	return 0;
}