### Tính tổng của các dãy con có độ dài lẻ (Sum of Odd Length Subarrays)

Đoạn mã dưới đây tính tổng của tất cả các dãy con có độ dài lẻ trong mảng `arr`. Mỗi dãy con được xác định bằng các chỉ số bắt đầu và kết thúc, và mục tiêu là tính tổng của tất cả các phần tử trong các dãy con có độ dài lẻ.

#### Các bước thực hiện:

1. **Duyệt qua tất cả các chỉ số bắt đầu (i)**:
   - Đầu tiên, mã duyệt qua tất cả các chỉ số bắt đầu của các dãy con. Chỉ số `i` là chỉ số bắt đầu của mỗi dãy con.

2. **Duyệt qua tất cả các chỉ số kết thúc (j)**:
   - Với mỗi chỉ số bắt đầu `i`, mã duyệt qua tất cả các chỉ số kết thúc `j` (với `j >= i`). Đây là chỉ số kết thúc của các dãy con.

3. **Kiểm tra độ dài dãy con**:
   - Đoạn mã kiểm tra nếu độ dài của dãy con `(j - i + 1)` là một số lẻ. Nếu đúng, mã sẽ tiếp tục tính tổng của dãy con đó.

4. **Tính tổng các phần tử trong dãy con**:
   - Nếu dãy con có độ dài lẻ, mã tính tổng các phần tử trong dãy con này và cộng dồn vào biến `sum`.

5. **Trả về kết quả**:
   - Sau khi tính tổng tất cả các dãy con có độ dài lẻ, hàm trả về kết quả.

#### Mã nguồn C++ đầy đủ:

```cpp
#include <vector>
using namespace std;

class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n = arr.size();
        int sum = 0;

        // Duyệt qua tất cả các chỉ số bắt đầu
        for (int i = 0; i < n; i++) {
            // Duyệt qua tất cả các chỉ số kết thúc
            for (int j = i; j < n; j++) {
                // Kiểm tra nếu độ dài dãy con là số lẻ
                if ((j - i + 1) % 2 != 0) {
                    // Tính tổng các phần tử trong dãy con
                    for (int k = i; k <= j; k++) {
                        sum += arr[k];
                    }
                }
            }
        }
        return sum;  // Trả về tổng của các dãy con có độ dài lẻ
    }
};
