### Tìm chỉ số xuất hiện đầu tiên trong chuỗi (Find the Index of the First Occurrence in a String)

Đoạn mã dưới đây giải quyết bài toán "Tìm chỉ số xuất hiện đầu tiên" trong chuỗi. Mục tiêu là tìm vị trí xuất hiện đầu tiên của chuỗi `needle` trong chuỗi `haystack` và trả về chỉ số của vị trí đó.

#### Các bước thực hiện:

1. **Duyệt qua chuỗi `haystack`**:
   - Mã sẽ duyệt qua từng ký tự trong chuỗi `haystack` và kiểm tra xem ký tự hiện tại có bằng với ký tự đầu tiên của chuỗi `needle` hay không.

2. **Kiểm tra chuỗi con**:
   - Khi tìm thấy ký tự đầu tiên của chuỗi `needle` trong `haystack`, sử dụng hàm `substr()` để kiểm tra xem chuỗi con bắt đầu từ vị trí đó có bằng với chuỗi `needle` hay không.

3. **Trả về kết quả**:
   - Nếu tìm thấy chuỗi `needle` trong `haystack`, hàm sẽ trả về chỉ số bắt đầu của chuỗi `needle` trong `haystack`.
   - Nếu không tìm thấy, hàm sẽ trả về `-1`.

#### Mã nguồn C++ đầy đủ:

```cpp
#include <string>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        // Duyệt qua từng ký tự trong chuỗi haystack
        for (int i = 0; i < haystack.size(); i++) {
            // Kiểm tra nếu ký tự haystack[i] bằng ký tự đầu tiên của needle
            if (haystack[i] == needle[0]) {
                // Kiểm tra nếu chuỗi con từ vị trí i có bằng với needle
                if (haystack.substr(i, needle.size()) == needle) {
                    return i;  // Trả về chỉ số xuất hiện đầu tiên của needle
                }
            }
        }
        return -1;  // Nếu không tìm thấy needle trong haystack, trả về -1
    }
};
