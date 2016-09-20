#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

template<typename Init,typename Outit>
Outit removed(Init first,Init last,Outit index){
    while(first!=last){
        *index++=*first;
        first=upper_bound(first,last,*first);
    }
    return index;
}
int main()
{
   int removeduplicate(vector<int>& nums);
   int a[]={1,2,3,4,5};
   vector<int> num(a,a+5);
   cout<<removeduplicate(num)<<endl;
}
int removeduplicate(vector<int>& nums){
    return distance(nums.begin(),removed(nums.begin(),nums.end(),nums.begin()));
}

