#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<set>
#include<queue>
using namespace std;

int main ()
{

  int t ;
  cin >> t;
  while (t--)
  {
    int a;
    string s;
    cin >> a;
    cin >> s;
    vector<int>v;
    for (int i=0; i<a; i++)
    {
      if (s[i]=='H')
      {
        v.push_back(1);
      }
      else
      {
        if(s[i]=='T')
        {
          v.push_back(0);
        }
      }
    }
    if (v.size() == 0)
    {
      cout << "Valid"<< endl;
    }
    else
    {
      if (v.size() % 2 == 0)
      {
    vector<int>zero;
          int el,temp;
       int e = v.size();
       int c=0;
       int d=0;

      for (long long int i=0; i<e; i++)
      {
      el = v[i];
      if (i == 0)
              {
                  zero.push_back(1);
                  c = c + 1;
                  temp = el;
              }
                else
                {
                   if (el == temp)
                   {
                       zero[c-1] = zero[c-1] + 1;
                   }
                   else
                   {
                       zero.push_back(1);
                       temp = el;
                       c = c + 1;
                   }
               }

      }

      if (zero.size() == v.size())
      {
        if (v[0] == 0)
        {
          cout << "Invalid"<< endl;
        }
        else
        {
          cout << "Valid"<< endl;
        }
      }
      else
      {
        cout << "Invalid"<< endl;
      }
    }
    else
    {
      cout << "Invalid"<< endl;
    }
  }

  }
  return 0;
}
