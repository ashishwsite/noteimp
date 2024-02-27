#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int > v={4,6,9,6,73,6};
    sort(v.begin(),v.end());
    // #lower_bound(it take vector iterator from strating to end postion in sorted array) it give value equal to or just grather than a target value 
    auto it =lower_bound(v.begin(),v.end(),4);
    cout<<it-v.begin()<<endl;
    // #upper_bound(take starting and end iterator ) it give just greather value than the target 
    // if vector is finsed it give address greatehr than size it means last iterator 
    auto up=upper_bound(v.begin(),v.end(),4);
    cout<<up-v.begin()<<endl;
  auto me=*min_element(v.begin(),v.end());
  int mxe=*max_element(v.begin(),v.end());
//   #ACCUMULATOR its give sum of array 
  int sum=accumulate(v.begin(),v.end(),0);
  int ct=count(v.begin(),v.end(),6);
  auto fi=find(v.begin(),v.end(),8);
//   #REVERSE FUNCTION FOR REVERSING THE array ELEMEMT 
//   reverse(strating postion(it),ending postion(it));
reverse(v.begin()+2,v.end()-1);

}
