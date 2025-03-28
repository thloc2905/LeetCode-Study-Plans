### Tìm phần tử lớn hơn tiếp theo trong một chuỗi (Next Greater Element)

Đoạn mã dưới đây giải quyết bài toán "Tìm phần tử lớn hơn tiếp theo" trong một chuỗi con (`nums1`) đối với một chuỗi lớn hơn (`nums2`). Mục tiêu là tìm phần tử lớn hơn tiếp theo của từng phần tử trong `nums1` khi tìm trong `nums2`. Nếu không tìm thấy phần tử lớn hơn, trả về `-1`.

#### Các bước thực hiện:

1. **Duyệt qua từng phần tử trong `nums1`**:
   - Mã sẽ duyệt qua từng phần tử trong mảng `nums1` và tìm phần tử đó trong mảng `nums2`.

2. **Tìm chỉ số của phần tử trong `nums2`**:
   - Khi tìm thấy phần tử `nums1[i]` trong `nums2`, ghi nhận chỉ số của nó. Tiếp theo, bắt đầu tìm kiếm phần tử lớn hơn tiếp theo trong mảng `nums2` sau chỉ số đó.

3. **Tìm phần tử lớn hơn tiếp theo**:
   - Sau khi tìm thấy chỉ số của phần tử trong `nums2`, duyệt qua phần tử tiếp theo và kiểm tra nếu có phần tử nào lớn hơn phần tử hiện tại của `nums1[i]`. Nếu có, thêm phần tử đó vào mảng kết quả. Nếu không, thêm `-1`.

4. **Trả về kết quả**:
   - Cuối cùng, hàm trả về mảng chứa các phần tử lớn hơn tiếp theo cho mỗi phần tử trong `nums1`.

#### Mã nguồn C++ đầy đủ:

```cpp
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        // Duyệt qua từng phần tử trong nums1
        for (int i = 0; i < nums1.size(); i++) {
            int x = -1;  // Giá trị mặc định là -1 nếu không tìm thấy phần tử lớn hơn
            int index = -1;  // Lưu chỉ số của phần tử nums1[i] trong nums2
            // Tìm chỉ số của phần tử nums1[i] trong nums2
            for (int j = 0; j < nums2.size(); j++) {
                if (nums1[i] == nums2[j]) {
                    index = j + 1;  // Chỉ số của phần tử tiếp theo trong nums2
                    break;
                }
            }
            // Nếu tìm thấy phần tử nums1[i] trong nums2
            if (index != -1) {
                // Tìm phần tử lớn hơn tiếp theo trong nums2
                for (int j = index; j < nums2.size(); j++) {
                    if (nums1[i] < nums2[j]) {
                        x = nums2[j];  // Lưu phần tử lớn hơn
                        break;
                    }
                }
            }
            // Thêm kết quả vào vector v
            v.push_back(x);
        }
        return v;  // Trả về vector kết quả
    }
};
