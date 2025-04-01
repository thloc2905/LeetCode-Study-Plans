# Giải Pháp Hợp Nhất Hai Chuỗi: Merging Alternately

## Mô Tả
Trong bài toán này, chúng ta cần hợp nhất hai chuỗi ký tự `word1` và `word2` theo cách "đan xen". Cụ thể, chúng ta lần lượt lấy một ký tự từ mỗi chuỗi và ghép chúng lại với nhau. Nếu một trong hai chuỗi còn ký tự, tiếp tục thêm vào chuỗi kết quả.

## Ý Tưởng
1. **Khởi tạo** hai biến chỉ số `i` và `j` để duyệt qua các ký tự của `word1` và `word2`.
2. **Duyệt từng ký tự** của hai chuỗi:
   - Trong khi cả hai chỉ số `i` và `j` chưa vượt qua độ dài của chuỗi tương ứng, ta sẽ lấy một ký tự từ `word1` và một ký tự từ `word2` rồi thêm chúng vào chuỗi kết quả.
3. **Xử lý các ký tự còn lại**:
   - Sau khi một chuỗi đã được duyệt hết, ta tiếp tục thêm các ký tự còn lại từ chuỗi còn lại vào chuỗi kết quả.

## Đoạn Mã

```cpp
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string check;
        int i = 0, j = 0;
        
        // Đan xen các ký tự từ hai chuỗi
        while (i < word1.length() && j < word2.length()) {
            check += word1[i];
            i++;
            check += word2[j];
            j++;
        }
        
        // Thêm các ký tự còn lại từ word1 nếu có
        while (i < word1.length()) {
            check += word1[i];
            i++;
        }
        
        // Thêm các ký tự còn lại từ word2 nếu có
        while (j < word2.length()) {
            check += word2[j];
            j++;
        }
        
        return check;
    }
};
