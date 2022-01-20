#include <iostream>
using namespace std;

int main()
{
  // fn = fn1 + fn2
  int n, fn, fn1, fn2;
  cout << "Program Derer Fibonacci";
  cout << "Masukan Nilai Ke-n ";
  cin >> n;

  fn1 = 1;
  fn2 = 0;
  cout << fn1 << " ";
  for (int i = 1; i < n; i++)
  {
    fn = fn1 + fn2;
    fn2 = fn1;
    fn1 = fn;
    cout << fn << " ";
  }
}