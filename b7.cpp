#include <iostream>
using namespace std;
int power(long long base, int exponent, int mod) {
long long result = 1;
for (; exponent != 0; exponent /= 2, (base *= base) %= mod)
if (exponent % 2 != 0) (result *= base) %= mod;
return result;
}
int main() {
int a;
cin >> a;
int radical = a;
for (int i = 2; i * i <= radical; i++)
while (radical % (i * i) == 0) radical /= i;
int n = radical;
while (power(n, n, a) != 0) n += radical;
cout << n;
return 0;
}
