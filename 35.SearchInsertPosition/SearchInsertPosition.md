### Tìm vị trí chèn (Search Insert Position) trong C++

Đoạn mã dưới đây giải quyết bài toán "Tìm vị trí chèn" trong một mảng đã được sắp xếp. Mục đích là tìm vị trí mà một số `target` có thể được chèn vào mảng sao cho mảng vẫn duy trì được thứ tự sắp xếp.

#### Các bước thực hiện:

1. **Duyệt qua mảng**:
   - Mã sẽ duyệt qua từng phần tử trong mảng `nums` để tìm phần tử đầu tiên có giá trị lớn hơn hoặc bằng `target`.

2. **So sánh giá trị**:
   - Nếu một phần tử trong mảng `nums` lớn hơn hoặc bằng `target`, nghĩa là `target` nên được chèn vào vị trí đó. Hàm trả về chỉ số của vị trí này.

3. **Kết thúc duyệt**:
   - Nếu không tìm thấy phần tử nào lớn hơn hoặc bằng `target`, điều này có nghĩa là `target` cần được chèn vào cuối mảng. Khi đó, hàm sẽ trả về kích thước của mảng, tức là vị trí cuối cùng.

#### Mã nguồn C++ đầy đủ:

```cpp
#include <vector>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        for(int i = 0; i < nums.size(); i++) {
            if (nums[i] >= target) {
                return i;  // Trả về vị trí chèn khi tìm thấy phần tử >= target
            }
        }
        return nums.size();  // Nếu không tìm thấy, target sẽ được chèn vào cuối mảng
    }
};
