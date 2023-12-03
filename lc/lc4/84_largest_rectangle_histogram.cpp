class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int si, area = 0;
        stack<pair<int, int>> rects;

        for(int i = 0; i < heights.size(); i++) {
            si = i;
            while(!rects.empty() && rects.top().second > heights[i]) {
                int index = rects.top().first;
                int height = rects.top().second;
                rects.pop();
                area = max(area, height* (i - index));
                si = index;
            }
            rects.push({si, heights[i]});
        }

        while(!rects.empty()) {
            int h = rects.top().second, x = rects.top().first;
            int new_area = h * (heights.size() - x);
            area = max(area, new_area);
            rects.pop();
        }
        return area;
    }
};
