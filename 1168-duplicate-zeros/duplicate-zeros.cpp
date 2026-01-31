class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n=arr.size();
        auto it=find(arr.begin(),arr.end(),0);
        if(it!=arr.end()){
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                arr.insert(arr.begin()+i,0);
                arr.pop_back();
                i++;
            }
        }
        }
    }
};