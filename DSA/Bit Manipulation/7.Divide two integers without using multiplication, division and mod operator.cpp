long long divide(long long dividend, long long divisor) 
    {
     int sign = ((dividend < 0) ^
			(divisor < 0)) ? -1 : 1;

// remove sign of operands
dividend = abs(dividend);
divisor = abs(divisor);

// Initialize the quotient
long long quotient = 0, temp = 0;

// test down from the highest bit and
// accumulate the tentative value for
// valid bit
for (int i = 31; i >= 0; --i) {

	if (temp + (divisor << i) <= dividend) {
	temp += divisor << i;
	quotient |= 1LL << i;
	}
}

return sign * quotient;

    }
