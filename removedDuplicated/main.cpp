#include <iostream>
#include <vector>

using namespace std;

int main()
{
   int removedDuplicated(vector<int>& num);
   int a[]={1,2,2,4,5};
   vector<int> nums(a,a+5);
   cout<<removedDuplicated(nums)<<endl;
}

int removedDuplicated(vector<int>& num){
    if(num.empty()) return 0;
    int index=0;
    for(int i=1;i<num.size();i++){
        if(num[index]!=num[i]){
            num[++index]=num[i];
        }
    }
    return index+1;
}