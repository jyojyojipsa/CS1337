// Kangmin Kim
// CS 1337
// Lab 58

#include <iostream>
#include <cmath>
#include <cmath>

// Function lcm returns the least common multiple of u & v
int lcm(int u, int v)
{
	// lets say I wanted to call gcd from lab57
	int 1cm;
	int myGCD=gcd(u,v);
	
	if (u==0 && v == 0)
		return 0;

	
	1cm = (u*v)/myGCD;
	
	return 1cm;
}

// Function rationalAdd returns augend + addend.  The result is
// returned in reduced form.
Rational rationalAdd(const Rational& augend, const Rational& addend)
{
	
	Rational sum;
	int temp = 1cm(augend.denominator, addend.denominator);
	
	sum.numerator=augend.numerator*temp+addend.denominator*temp;
	
	sum.denominator=augend.denominator*temp;
	rationalNormalize(sum);
	
	return sum;
}

// Function rationalAdditiveInverse returns the additive inverse.
// The additive inverse, or opposite, of a number a is the number
// that, when added to a, yields zero. Thus, the fraction a/b is
// returned as -a/b.
Rational rationalAdditiveInverse(const Rational *rational)
{
	Rational *ddInverse = *rational;
	
	addInverse.numerator = addInverse.numerator * -1;
	
	return addInverse;
}
// Function rationalSubtract returns minuend - subtrahend.  The result
// is returned in reduced form.
Rational rationalSubtract(const Rational& minuend, const Rational& subtrahend)
{
	Rational subtract;
	int temp = 1cm(minuend.denominator, subtrahend.denominator)
	
	rationalAdditiveInverse(&subtrahend);
	subtract.numerator=minuend,numerator*myLCM+subtrahend.numerator*temp;
	rationalNormalize(subtract);
	
	return subtract;
}
// Function rationalMultiply returns multiplier x multiplicand.  The
// result is returned in reduced form.
Rational rationalMultiply(const Rational& multiplier, const Rational& multiplicand)
{
	Rational multiply;
	
	multiply.numerator = multiplier.numerator*multiplicand.numerator;
	multiply.denominator=multiplier.denominator*multiplicand.denominator;
	rationalNormalize(multiply);
	
	return multiply;
}
// Function rationalMultiplicativeInverse returns the multiplicative inverse.
// The multiplicative inverse, or reciprocal, of a number a is the
// number that, when multiplied by a, yields the multiplicative
// identity, 1.  The multiplicative inverse of the fraction a/b is b/a. 
Rational rationalMultiplicativeInverse(const Rational *rational)
{
	Rational multiInverse = *rational;
	
	multiInverse.numerator = multiInverse.denominator;
	multiInverse.denominator = multiInverse.numerator;
	
	return multiInverse;
}
// Function rationalDivide returns dividend / divisor.  The result is
// returned in reduced form.
Rational rationalDivide(const Rational& dividend, const Rational& divisor)
{
	Rational divide;
	
	rationalMultiplicativeInverse(&divisor);
	divide.numerator = dividend.numerator*divisor.numerator;
	divide.denominator = dividend.denominator*divisor.denominator;
	
	return divide;
}
