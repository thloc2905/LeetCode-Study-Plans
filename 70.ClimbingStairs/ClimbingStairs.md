# Mục Tiêu

Bài toán yêu cầu tính số cách leo lên cầu thang với `n` bậc, trong đó mỗi lần có thể bước 1 hoặc 2 bậc. Mục tiêu là tìm cách tối ưu để tính số cách leo lên cầu thang mà không phải tính lại các kết quả trước đó nhiều lần.

# Ý Tưởng Giải Quyết

Để giải quyết bài toán này, chúng ta có thể nhận thấy rằng:
- Để lên được bậc thứ `n`, có hai cách: bước từ bậc `n-1` hoặc bước từ bậc `n-2`.
- Vậy số cách lên bậc thứ `n` là tổng số cách lên bậc `n-1` và bậc `n-2`.
- Đây là một bài toán điển hình của chuỗi Fibonacci, nhưng chúng ta chỉ cần lưu trữ các giá trị gần nhất mà không cần tính lại toàn bộ chuỗi.

## Phương pháp:
1. **Điều kiện đặc biệt**: Nếu `n <= 3`, số cách leo lên cầu thang là chính `n`.
2. **Sử dụng biến để lưu trữ kết quả tạm thời**: Chúng ta sẽ sử dụng ba biến `a`, `b`, `c` để lưu trữ số cách leo lên bậc `n-2`, `n-1` và `n`, lần lượt.

# Cách Làm

1. Nếu `n <= 3`, ta trả về `n` ngay lập tức.
2. Nếu `n > 3`, ta khởi tạo hai biến `a = 1` và `b = 2` (tương ứng với số cách lên bậc 1 và 2).
3. Duyệt từ bậc 3 đến bậc `n`, tính số cách leo lên từng bậc theo công thức `c = a + b`.
4. Cập nhật `a` và `b` để tiếp tục tính toán cho các bậc tiếp theo.
5. Trả về giá trị của `c`, đây chính là số cách leo lên bậc `n`.

# Mã Nguồn

```cpp
class Solution {
public:
    int climbStairs(int n) 
    {
        // Điều kiện đặc biệt khi n <= 3
        if( n <= 3)
        {
            return n;
        }
        
        // Khởi tạo các biến để lưu trữ kết quả
        int a = 1; // Số cách lên bậc 1
        int b = 2; // Số cách lên bậc 2
        int c = 0; // Biến để lưu số cách lên bậc n
        
        // Duyệt qua các bậc từ 3 đến n để tính số cách lên từng bậc
        for(int i = 3; i <= n; i++)
        {
            c = a + b; // Số cách lên bậc i là tổng số cách lên bậc i-1 và i-2
            a = b;     // Cập nhật giá trị của a
            b = c;     // Cập nhật giá trị của b
        }
        
        // Trả về số cách lên bậc n
        return c;
    }
};
