
// given nums, k - total subarray need to form , x - size of each subarray must be x 
vector<long long>cost
cost.assign(n,1e18);
void buildSubarray(n,k,x){

         long long leftSum=0,rightSum=0;
          multiset<long long>left,right;

          long long i = 0;
          long long j = 0;

          while(j<n){
              
                 
                 if(left.empty() || left.size() <= right.size()){
                      
                        left.insert(nums[j]);
                        leftSum += nums[j];
                 }
                 else{
                      right.insert(nums[j]);
                      rightSum += nums[j];
                 }

                 if(!left.empty() && !right.empty()){
                      
                        int maxLeft = *left.rbegin();
                        int minRight = *right.begin();

                        if(maxLeft > minRight){
                              
                              left.erase(left.find(maxLeft));
                              leftSum -= maxLeft;
                              right.erase(right.find(minRight));
                              rightSum -= minRight;

                              left.insert(minRight);
                              leftSum += minRight;
                              right.insert(maxLeft);
                              rightSum += maxLeft;

                        }
                 }

                 if(j-i+1 == x){

                       long long median = *left.rbegin();
                       cost[i] = ((left.size()*median) - leftSum) + (rightSum-(right.size()*median));

                       if(left.find(nums[i])!=left.end()){
                           leftSum -= nums[i];
                           left.erase(left.find(nums[i]));
                       }
                       else{
                          
                             rightSum -= nums[i];
                             right.erase(right.find(nums[i]));
                       }

                       i++;

                 }
                 j++;
          }

}

