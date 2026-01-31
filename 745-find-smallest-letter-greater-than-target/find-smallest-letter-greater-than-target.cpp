class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n=letters.size();
        int k=0;
        for(int i=0;i<n;i++){
            if(letters[i]>target){
                k=i;
                break;
            }
        }
        return letters[k];
    }
};