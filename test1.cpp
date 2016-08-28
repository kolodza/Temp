#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int main()
{
  vector<int> vecNum = { 1, 2, 3, 4, 5, 6, 7 };
  copy( vecNum.begin(), vecNum.end(), ostream_iterator<int>(cout, " ") );

  cout << "Acumulate: " << accumulate(vecNum.begin(), vecNum.end(), 0) << endl;

  return 0;
}
