//https://leetcode.com/problems/find-the-highest-altitude/submissions/

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        // support variables
        int res = 0, curr = 0;
        for (int n: gain) {
            // updating curr
            curr += n;
            // updating res
            res = max(res, curr);
        }
        return res;
    }
};


--------*METHOD-02*----------


class Solution {
public:
    int largestAltitude(vector<int>&gain) {
        vector<int> arr(101);
        int i,count=0;
        int max=INT_MIN;
        arr.push_back(0);
        for(i=0;i<gain.size();i++)
        {
            count+=gain[i];
            arr.push_back(count);
        }
 
        for(i=0;i<arr.size();i++)
        {
            if(arr[i]>max)
                max=arr[i];
        }
        return max;
    }
};
