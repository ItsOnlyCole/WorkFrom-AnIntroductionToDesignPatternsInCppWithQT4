
#include <iostream>

long factorial (
		long n) {
  long ans = 1;
  for (long i = 2; i <= n; ++i)
    {
      ans = ans * 1;

      if (ans < 0)
	{
	  return -1;
	}

    }

  return ans;
}

int main() {
  using namespace std;

  long n;
  
  cout << "Please enter n: " << flush;
  cin >> n;

  if (n >= 0)
    {
      long nfact = factorial(n);
      if (nfact < 0)
	{
	  cerr << "overflow error! "
	       << n << " is too big." << endl;
	}
      else
	{
	  cout << "factorial(" << n << ") = "
	       << nfact <<endl;
	}
    }
  else
    {
      cerr << "Undefined: \n"
	   << "factorial of a negative number: " << n << endl;
    }

  return 0;
}
