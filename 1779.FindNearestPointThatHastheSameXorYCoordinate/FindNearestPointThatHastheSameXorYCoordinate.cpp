    class Solution {
    public:
        int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
            int max = INT_MAX,index = -1;
            for(int i = 0; i < points.size();i++){
                int xi = points[i][0];
                int yi = points[i][1];
            int dist;
            if((x == xi)||(y == yi)){
                int dist = abs(x -xi)+abs(y-yi);
            
            if(max > dist ){
                max = dist ;
                index = i;
            }
    
        }
        }
        return index;
        }
        
    };
