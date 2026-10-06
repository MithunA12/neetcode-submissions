/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    int minMeetingRooms(vector<Interval>& intervals) {
        if(intervals.empty()){
            return 0;
        }
        if(intervals.size() == 1){
            return 1;
        }

        vector<vector<int>> inters;
        for(Interval i : intervals){
            vector<int> v = {i.start, i.end};
            inters.push_back(v);
        }

        priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> minHeap;
        //{timeAvail, Room #}
        int curRoom = 0;

        minHeap.push({0, curRoom});
        sort(inters.begin(), inters.end());

        for(int i = 0; i < inters.size(); i++){
            vector<int> timeAvail = minHeap.top();
            if(inters[i][0] >= timeAvail[0]){
                minHeap.pop();
                minHeap.push({inters[i][1], timeAvail[1]});
            } else{
                curRoom++;
                minHeap.push({inters[i][1], curRoom});
            }
        }

        return curRoom + 1;
        
    }
};
