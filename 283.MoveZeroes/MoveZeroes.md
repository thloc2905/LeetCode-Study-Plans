### Di chuyển các số 0 về cuối mảng (Move Zeroes)

Đoạn mã dưới đây giải quyết bài toán "Di chuyển các số 0 về cuối mảng". Mục tiêu là di chuyển tất cả các phần tử 0 trong mảng `nums` về cuối mà không làm thay đổi thứ tự các phần tử không phải 0.

#### Các bước thực hiện:

1. **Khởi tạo hai chỉ số `i` và `j`**:
   - Chỉ số `i` sẽ dùng để theo dõi vị trí của phần tử không phải 0 trong mảng.
   - Chỉ số `j` được sử dụng để duyệt qua tất cả các phần tử trong mảng.

2. **Duyệt qua mảng và thay đổi vị trí các phần tử không phải 0**:
   - Đối với mỗi phần tử không phải 0 (khi `nums[j] != 0`), chương trình sẽ đổi chỗ phần tử đó với phần tử ở vị trí `i`.
   - Sau khi hoán đổi, chỉ số `i` sẽ được tăng lên để theo dõi vị trí tiếp theo của phần tử không phải 0.

3. **Kết quả**:
   - Sau khi thực hiện xong, tất cả các phần tử không phải 0 sẽ được đưa về đầu mảng, và các số 0 sẽ được di chuyển về cuối.

#### Mã nguồn C++ đầy đủ:

```cpp
#include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0;  // Chỉ số cho các phần tử khác 0
        // Duyệt qua tất cả các phần tử trong mảng
        for (int j = 0; j < nums.size(); j++) {
            // Nếu phần tử không phải 0, đổi chỗ với phần tử ở vị trí i
            if (nums[j] != 0) {
                swap(nums[i], nums[j]);
                i++;  // Tăng i để theo dõi vị trí tiếp theo của phần tử không phải 0
            }
        }
    }
};
