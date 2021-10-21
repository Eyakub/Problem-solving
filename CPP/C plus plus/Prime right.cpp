#include <iostream>
using namespace std;
int check_prime(int n);
int main()
{
  int n, temp=0;
  cout << "Enter a positive  integer: ";
  cin >> n;
  temp=check_prime(n);
  
  if(temp==0)
    cout << n << " is a prime number.";
  else
    cout << n << " is not a prime number.";
  return 0;
}
int check_prime(int n)
{
  int i, flag=0;
  for(i=2;i<=n/2;++i)
  {
      if(n%i==0)
      {
          flag=1;
          break;
      }
  }
  return flag;
}

