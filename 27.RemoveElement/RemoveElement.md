### Xóa phần tử khỏi mảng (Remove Element)

Đoạn mã dưới đây giải quyết bài toán "Xóa phần tử" khỏi một mảng đã cho. Mục tiêu là loại bỏ tất cả các phần tử có giá trị bằng `val` khỏi mảng, và trả về kích thước mảng sau khi xóa.

#### Các bước thực hiện:

1. **Duyệt qua mảng**:
   - Mã sẽ duyệt qua từng phần tử trong mảng `nums` và kiểm tra xem phần tử có bằng `val` hay không.

2. **Xóa phần tử**:
   - Khi tìm thấy phần tử bằng `val`, hàm sẽ sử dụng `erase()` để xóa phần tử đó khỏi mảng. Sau khi xóa, chỉ số `i` sẽ được giảm đi một đơn vị (`i--`) để đảm bảo không bỏ sót phần tử tiếp theo sau khi di chuyển lên.

3. **Kết quả**:
   - Hàm trả về kích thước của mảng `nums` sau khi xóa tất cả các phần tử bằng `val`.

#### Mã nguồn C++ đầy đủ:

```cpp
#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // Duyệt qua từng phần tử trong mảng
        for(int i = 0; i < nums.size(); i++) {
            // Kiểm tra nếu phần tử bằng val
            if (nums[i] == val) {
                // Xóa phần tử tại vị trí i
                nums.erase(nums.begin() + i);
                // Giảm chỉ số i để kiểm tra lại phần tử mới ở vị trí i
                i--;
            }
        }
        // Trả về kích thước của mảng sau khi xóa
        return nums.size();
    }
};
