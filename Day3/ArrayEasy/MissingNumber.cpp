class Solution {
public:
int brute(vector<int>&nums)
{
     int flg=0;
      int n=nums.size();
      for(int i=0;i<=n;i++)  
      {
          int flg=0;
          for(int j=0;j<n;j++)
          {
              if(i==nums[j])
              {
                  flg=1;
                  break;
              }
          }
          if(flg==0) return i;

      }
      return 1;
}
int usingHash(vector<int>&nums){
   vector<int>Hash(nums.size()+1, 0);
  for(int i=0;i<nums.size();i++)
     Hash[nums[i]]++;
     for(int i=0;i<=nums.size();i++)
     {
         cout<<"For i:"<<i<<" "<<Hash[i]<<endl;
        if(Hash[i]==0)
        return i;
     }
return 1;
}
int sumMethod(vector<int>&nums){
    int n=nums.size();
    int sumToN=(n*(n+1))/2;
    int sumOfArray=accumulate(nums.begin(), nums.end(), 0);
    return sumToN- sumOfArray;
}
int xorMethod(vector<int>&nums){
    int xorOfN=0, xorOfArray=0;
    for(auto it:nums)
    xorOfArray^=it;

    for(int i=0;i<=nums.size();i++)
    xorOfN^=i;
    return xorOfArray^xorOfN;
}
    int missingNumber(vector<int>& nums) {
    //  return brute(nums);
    // return usingHash(nums);
    // return sumMethod(nums);
    return xorMethod(nums);
    }
};
