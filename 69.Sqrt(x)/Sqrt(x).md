# Mục Tiêu

Bài toán yêu cầu tính căn bậc hai của một số nguyên `x` và trả về phần nguyên của căn bậc hai đó. Nếu căn bậc hai không phải là một số nguyên, chỉ cần trả về phần nguyên của căn bậc hai gần nhất (số nguyên lớn nhất mà bình phương của nó không vượt quá `x`).

# Ý Tưởng Giải Quyết

Để giải quyết bài toán này, chúng ta có thể thực hiện các bước sau:
1. Kiểm tra các trường hợp đặc biệt: Nếu `x` bằng 0 hoặc 1, ta có thể trả về `x` ngay lập tức, vì căn bậc hai của chúng là chính nó.
2. Sử dụng hàm `sqrt(x)` trong thư viện chuẩn của C++ để tính căn bậc hai và ép kiểu thành số nguyên (sử dụng `int`).
3. Trả về kết quả là phần nguyên của căn bậc hai.



# Cách Làm

1. **Kiểm tra điều kiện đặc biệt**: Nếu `x` là 0 hoặc 1, trả về `x` ngay lập tức.
2. **Tính căn bậc hai**: Sử dụng hàm `sqrt(x)` để tính căn bậc hai của `x` và ép kiểu thành `int`.
3. **Trả về kết quả**: Trả về giá trị căn bậc hai dưới dạng số nguyên.

# Mã Nguồn

```cpp
class Solution {
public:
    int mySqrt(int x) {
        // Điều kiện đặc biệt: Nếu x là 0 hoặc 1, trả về x ngay lập tức
        if (x == 0 || x == 1) {
            return x;
        }
        
        // Tính căn bậc hai của x và ép kiểu thành int
        int count = sqrt(x);
        return count;
    }
};
