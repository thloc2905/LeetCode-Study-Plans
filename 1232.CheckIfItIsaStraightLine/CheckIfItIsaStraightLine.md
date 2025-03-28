### Kiểm tra các điểm có tạo thành một đường thẳng hay không (Check if Points Make a Straight Line)

Đoạn mã dưới đây kiểm tra xem các điểm trong mảng `coordinates` có tạo thành một đường thẳng hay không. Mỗi điểm được đại diện bằng một cặp tọa độ `[x, y]`. Mục tiêu là kiểm tra xem tất cả các điểm có nằm trên một đường thẳng hay không.

#### Các bước thực hiện:

1. **Lấy tọa độ của hai điểm đầu tiên**:
   - Đoạn mã đầu tiên lấy tọa độ của hai điểm đầu tiên trong mảng `coordinates`. Các điểm này sẽ được sử dụng để tính toán độ dốc của đường thẳng.

2. **Kiểm tra độ dốc giữa các điểm**:
   - Đoạn mã sẽ tính độ dốc giữa hai điểm đầu tiên và so sánh nó với độ dốc giữa các điểm tiếp theo.
   - Công thức tính độ dốc giữa hai điểm `(x1, y1)` và `(x2, y2)` là `(y2 - y1) / (x2 - x1)`. Tuy nhiên, để tránh việc chia cho 0, mã sẽ sử dụng phép so sánh nhân chéo để kiểm tra điều kiện:
     ```
     (y2 - y1) * (x3 - x2) == (y3 - y2) * (x2 - x1)
     ```

3. **Kiểm tra tất cả các điểm**:
   - Đoạn mã tiếp tục kiểm tra tất cả các điểm còn lại trong mảng `coordinates`. Nếu có bất kỳ điểm nào không thoả mãn điều kiện trên, hàm sẽ trả về `false`.

4. **Trả về kết quả**:
   - Nếu tất cả các điểm đều thoả mãn điều kiện, hàm sẽ trả về `true`, nghĩa là các điểm này nằm trên một đường thẳng.

#### Mã nguồn C++ đầy đủ:

```cpp
#include <vector>
using namespace std;

class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int n = coordinates.size();
        int x1 = coordinates[0][0];
        int y1 = coordinates[0][1];
        int x2 = coordinates[1][0];
        int y2 = coordinates[1][1];
        
        // Kiểm tra độ dốc giữa các điểm
        for(int i = 2; i < n; i++) {
            int x3 = coordinates[i][0];
            int y3 = coordinates[i][1];
            
            // Kiểm tra điều kiện độ dốc
            if(((y2 - y1) * (x3 - x2)) != ((y3 - y2) * (x2 - x1))) {
                return false;  // Nếu không thỏa mãn, trả về false
            }
        }
        return true;  // Nếu tất cả các điểm thỏa mãn, trả về true
    }
};
