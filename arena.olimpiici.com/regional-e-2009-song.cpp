// next line enables automated test, the URL must point to the zip with test data.
// TEST_ZIP: https://arena.olimpiici.com/api/public/problems/211/zip?download=true

#include <iostream>

using namespace std;

void force_out_of_memory(int allocMB = 256)
{
  int alloc4MB = allocMB / 4 + 1;
  int *p[alloc4MB];
  for (int k = 0; k < alloc4MB; ++k)
  {
    int memSize = 1024 * 1024;
    int *a = p[k] = new int[memSize];

    for (int i = 0; i < memSize; ++i)
    {
      a[i] = 1;
    }
  }
  for (int k = 0; k < alloc4MB; ++k)
  {
    delete p[k];
  }
}

void force_timeout(int allocMB = 256)
{
  int alloc4MB = allocMB / 4 + 1;
  int *p[alloc4MB];
  for (int k = 0; k < alloc4MB; ++k)
  {
    int memSize = 1024 * 1024;
    int *a = p[k] = new int[memSize];

    for (int i = 0; i < memSize; ++i)
    {
      a[i] = 1;
    }
    delete p[k];
  }
}

int main()
{
  long n, m, k;
  cin >> n;
  cin >> m;
  cin >> k;

  // force_out_of_memory();
  // force_timeout();

  long totalSeconds = n * 60 + m;
  long sizeKb = totalSeconds * 16;
  long freeKb = k * 1024;
  if (sizeKb <= freeKb)
  {
    cout << "YES" << endl;
  }
  else
  {
    cout << "NO" << endl;
    cout << sizeKb - freeKb << endl;
  }
  return 0;
}