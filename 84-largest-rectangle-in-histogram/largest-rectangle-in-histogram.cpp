class Solution {
public:
    int largestRectangleArea(vector<int>& height) {
       int n = height.size();
        stack<int> st;
        int area=0;
        for(int i=0;i<n;i++){
            while(!st.empty() && height[i]<height[st.top()]){
                int b=st.top();
                st.pop();
                int p=st.empty()?-1:st.top();
                int m=i;
                area=max(area,height[b]*(m-p-1));
            }
            st.push(i);
        }
         while (!st.empty()) {
            int bar = st.top(); st.pop();
            int pse = st.empty() ? -1 : st.top();
            int nse = n;
            area = max(area, height[bar] * (nse - pse - 1));
        }
        return area;
    }
};