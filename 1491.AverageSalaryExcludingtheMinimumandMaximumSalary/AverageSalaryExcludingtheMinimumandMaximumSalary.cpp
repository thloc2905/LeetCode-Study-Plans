class Solution {
public:
    double average(vector<int>& salary) {
        int min = salary[0];
        int max = salary[0];
        for(int i = 1 ; i < salary.size();i++){
            if(salary[i]< min ){
                min = salary[i];
            } if( salary[i]>max){
                    max = salary[i];
                }
            }
            int count = 0;
            double total = 0;
            for(int sal : salary){
                if(sal != max && sal != min){
                    total += sal;
                    count++;
                }
            }
        return total/count;
    }
};
