### Tính tổng tài sản lớn nhất của một khách hàng (Maximum Wealth)

Đoạn mã dưới đây giải quyết bài toán "Tính tổng tài sản lớn nhất của một khách hàng". Mỗi khách hàng có một mảng các tài khoản, và mỗi tài khoản có một số tiền nhất định. Mục tiêu là tìm ra tổng tiền của khách hàng giàu nhất.

#### Các bước thực hiện:

1. **Khởi tạo biến `max_val`**:
   - Biến `max_val` được sử dụng để lưu trữ tổng tài sản lớn nhất mà một khách hàng có. Mặc định, `max_val` được gán bằng 0.

2. **Duyệt qua tất cả các khách hàng**:
   - Đoạn mã sử dụng vòng lặp `for` để duyệt qua từng mảng `account` (mỗi mảng đại diện cho tài khoản của một khách hàng).

3. **Tính tổng tiền của mỗi khách hàng**:
   - Đối với mỗi tài khoản của khách hàng, mã tính tổng các khoản tiền trong tài khoản đó.

4. **Cập nhật giá trị `max_val`**:
   - Sau khi tính được tổng tiền của một khách hàng, mã so sánh tổng tiền của khách hàng đó với `max_val`. Nếu tổng tiền của khách hàng hiện tại lớn hơn `max_val`, giá trị `max_val` sẽ được cập nhật.

5. **Trả về kết quả**:
   - Cuối cùng, hàm trả về `max_val`, tức là tổng tài sản lớn nhất mà một khách hàng có.

#### Mã nguồn C++ đầy đủ:

```cpp
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max_val = 0;  // Biến lưu trữ tổng tài sản lớn nhất
        
        // Duyệt qua từng khách hàng
        for (auto &account : accounts) {
            int sum = 0;  // Biến lưu trữ tổng tiền của khách hàng hiện tại
            // Tính tổng tiền của khách hàng hiện tại
            for (int money : account) {
                sum += money;
            }
            // Cập nhật tổng tài sản lớn nhất nếu cần
            max_val = max(max_val, sum);
        }
        return max_val;  // Trả về tổng tài sản lớn nhất
    }
};
