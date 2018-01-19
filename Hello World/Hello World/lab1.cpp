#include "lab1.h"


// Greatest Common Denominator
// PRE: a is a positive integer
// PRE: b is a positive integer
// POST: a and b are unchanged
// RETURN: the greatest common denominator of a and b.
int gcd(const int a, const int b)
{
	int d;
	(a > b) ? d = b : d = a;
	for (int c = d; c > 0; c--) {
		return (!(c%d)) ? c : 0;
	}
}

// Fibonacci
// PRE: n is a positive int greater than 0
// POST: n is not changed
// RETURN: the nth positive integer in the Fibonacci sequence.
long long fibonacci(const int n)
{
	return (n < 3) ?  1 :  fibonacci(n - 1) + fibonacci(n - 2); 
}
