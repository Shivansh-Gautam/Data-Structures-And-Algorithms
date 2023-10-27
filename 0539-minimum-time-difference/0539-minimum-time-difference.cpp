class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int> minutes;
        for(int i=0;i<timePoints.size();i++){
            string curr = timePoints[i];
            int hours = stoi( curr.substr(0,2) );
            int min = stoi( curr.substr(3,2) );
            int totalmin = hours*60+min;
            minutes.push_back(totalmin);
        }
        sort(minutes.begin(),minutes.end());
        int min1=INT_MAX;
        for(int i=0;i<minutes.size()-1;i++){
            int diff=minutes[i+1]-minutes[i];
            min1 = min(min1,diff);
        }
        int lastdiff = (minutes[0]+1440)-minutes[minutes.size()-1];
        min1 = min(min1,lastdiff);
        return min1;
    }
};