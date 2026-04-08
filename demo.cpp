/* input 
5
3 8 1 11 7 

4
-10 -2 -1 -5
*/



#include <iostream>
#include <vector>

using namespace std;
int maxElements(vector<int> v)
{
   int max=v[0];
   for(int i=0;i<v.size();i++)
   {
      if(v[i]>max)
      {
         max=v[i];
      }

   }
   return max;
}

int main()
{
   int n;
   cin>>n;
   vector<int> v(n);

   for(int i=0;i<n;i++)
   {
      cin>>v[i];
   }


int m=maxElements(v);
cout<<m;
return 0;

}
