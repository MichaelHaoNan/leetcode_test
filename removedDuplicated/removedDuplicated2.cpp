#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
   int removedDuplicated(vector<int>& num);
   int a[]={1,2,2,2,5};
   vector<int> nums(a,a+5);
   cout<<removedDuplicated(nums)<<endl;
   return 0;
}

int removedDuplicated(vector<int>& num) {
        return distance(num.begin(), unique(num.begin(), num.end()));
    }
