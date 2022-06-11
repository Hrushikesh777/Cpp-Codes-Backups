#include<iostream>
#include<vector>

using namespace std;

struct Interval {
    int start;
    int end;
    Interval() : start(0), end(0) {}
    Interval(int s, int e) : start(s), end(e) {}
};
 
vector<Interval> insert(vector<Interval> &intervals, Interval newInterval) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<Interval> op;
    int index = 0;

    if(newInterval.start > newInterval.end){
        int temp = newInterval.end;
        newInterval.start = newInterval.end;
        newInterval.end = temp;
    }

    if(intervals.size() == 0){
        op.push_back(newInterval);
        return op;
    }

    if(newInterval.end < intervals[0].start){
        op.push_back(newInterval);
        for(auto x : intervals){
            op.push_back(x);
        }
        return op;
    }

    if(newInterval.start <= intervals[0].start && newInterval.end >= intervals[intervals.size() - 1].end){
        op.push_back(newInterval);

        return op;
    }

    for(int i = 0; i < intervals.size(); i++){
        if(intervals[i].end < newInterval.start){
            op.push_back(intervals[i]);
        }else{
            // cout<<"else"<<endl;
            if(newInterval.end < intervals[i].start){
                // cout<<"two"<<endl;
                op.push_back(newInterval);
                op.push_back(intervals[i]);
                i++;
                index = i;
                break;
            }else if(newInterval.start >= intervals[i].start && newInterval.start <= intervals[i].end){
                // cout<<"three"<<intervals[i].start<<newInterval.start<<intervals[i].end<<endl;
                int min_ = intervals[i].start;
                int max_ = max(intervals[i].end, newInterval.end);

                while(i < intervals.size() && intervals[i].end < max_){
                    i++;
                }
                if(max_ < intervals[i].start){
                    Interval temp;
                    temp.start = min_;
                    temp.end = max_;

                    op.push_back(temp);
                    index = i;
                    break;
                }else{
                    max_ = max(intervals[i].end, max_);

                    Interval temp;
                    temp.start = min_;
                    temp.end = max_;

                    op.push_back(temp);
                    i++;
                    index = i;
                    break;
                }
            }else if(newInterval.end >= intervals[i].start && newInterval.end <= intervals[i].end){
                // cout<<"one"<<endl;
                int min_ = min(newInterval.start, intervals[i].start);
                int max_ = intervals[i].end;
                Interval temp;
                temp.start = min_;
                temp.end = max_;

                op.push_back(temp);
                i++;
                index = i;
                break;
            }else{
                int min_ = newInterval.start;
                int max_ = newInterval.end;

                while(i < intervals.size() && max_ >= intervals[i].start){
                    max_ = max(intervals[i].end, max_);
                    i++;
                }

                Interval temp;
                temp.start = min_;
                temp.end = max_;

                op.push_back(temp);
                index = i;
                break;

            }
        }
    }

    // cout<<op.size()<<" "<<intervals.size()<<endl;
    if(op.size() == intervals.size() && intervals[intervals.size() - 1].end < newInterval.start){
        // cout<<"end"<<endl;
        op.push_back(newInterval);
        return op;
    }

    for(int j = index; j < intervals.size(); j++){
        op.push_back(intervals[j]);
    }

    return op;
}
