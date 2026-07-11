class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        for(int i=1; i<gain.size(); i++){
            gain[i] += gain[i-1];
        }

        int max_el = INT_MIN;
        for(int it:gain){
            max_el = max(max_el, it);
        }

        if(max_el<0){
            return 0;
        }else{
            return max_el;
        }
    }
};