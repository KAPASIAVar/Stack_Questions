
#include <bits/stdc++.h>
using namespace std;

string
solve (string inp)
{
  stack < char >st;
for (auto i:inp)
    {
      if (st.empty ())
	st.push (i);
      else if (st.top () != i)
	st.push (i);
      else
	{
	  st.pop ();
	}
    }
  string ans = "";
  while (!st.empty ())
    {
      ans += st.top ();
      st.pop ();
    }
  reverse (ans.begin (), ans.end ());
  return ans;
}

int
main ()
{
  // Write C++ code here
  int arr[] = { 4, 2, -1, 6, -7 };
  int size = sizeof (arr) / sizeof (arr[0]);
  int ans = INT_MAX;

  cout << solve ("abbaca");

  return 0;
}
