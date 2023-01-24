#include "complessi.h"
#include <math.h>

void prodotto_complesso(struct complesso* comp1, const struct complesso* comp2) {

	double res = ((comp1->re) * (comp2->re) - (comp1->im) * (comp2->im)) + sqrt(-1) * ((comp1->re * comp2->im) - (comp1->im * comp2->re));

	return res;

}