#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<set>
#include<queue>
using namespace std;

int main ()
{
  int t;
  cin >> t;
  while(t--)
  {
    int a;
    cin >> a;
    int b;
    vector<int>v;
    for(int i=0; i<a;i++)
    {
      cin >> b;
      v.push_back(b);
    }

    if (a % 2 == 0)
    {
      cout << "no"<< endl;
    }
    else
    {
      if (v[0] == 1)
      {
        int c=0;
        for(int i=0; i<a/2; i++)
        {
          if(v[i+1]-v[i] == 1)
          {}
          else
          {
            c=1;
            break;
          }
        }
        int d=0;
        for(int j=a/2; j<a-1; j++)
        {
          if(v[j+1]-v[j] == -1)
          {}
          else
          {
            d=1;
            break;
          }
        }

        if (c == 1 || d == 1)
        {
          cout << "no"<< endl;
        }
        else
        {
          cout << "yes"<< endl;
        }

      }
      else
      {
        cout << "no"<< endl;
      }
    }

  }
  return 0;
}
