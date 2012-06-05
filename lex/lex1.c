#include "RSA.h"

// finds if l, d can be the l and d in e * d - 1 = l * phi(n)
bool RSA::criteria(int l, int d, int n, int, const char  &  );

bool RSA::criteria(const char& l, unsigned d, float n, long double e)
{
	// compute delta = b ^ 2
	if (b >= a + 1)
		t = (b - a - 1) * (b - a - 1);
	else
		t = (a + 1 - b) * (a + 1 - b);
}
