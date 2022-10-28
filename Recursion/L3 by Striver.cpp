#include <iostream>
using namespace std;

void n_sum_parametrized (int i, int sum)
{
  if (i < 1)
    {
      cout << sum;
      return;
    }
  n_sum_parametrized (i - 1, sum + i);
}

int n_sum_functional (int n)
{
  if (n == 0)
    {
      return 0;
    }
  return n + n_sum_functional (n - 1);
}

int main ()
{
  // n_sum_parametrized(3, 0);  
//   cout << n_sum_functional (4);
  return 0;
}
