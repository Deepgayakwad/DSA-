class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {

       // vector<int>ans;

        unordered_map<int,int>myMap;
       // unordered_set<int>mySet;

        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                myMap[nums[i]]++;
            }
        }
       
        int maxfrequency=0;
        int mostFreqele=-1;
        // iterate in map
        for(auto it:myMap){

            int num=it.first;
            int freq=it.second;

            if(freq>maxfrequency || (freq==maxfrequency && num<mostFreqele)){
                mostFreqele=num;
                maxfrequency=freq;
            }
            
        }
        return mostFreqele;
    }
};
