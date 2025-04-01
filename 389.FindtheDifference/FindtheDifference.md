# Giải Pháp Tìm Ký Tự Khác Biệt: Find the Difference

## Mô Tả
Bài toán yêu cầu tìm ra ký tự khác biệt giữa hai chuỗi `s` và `t`. Chuỗi `t` chỉ khác chuỗi `s` ở một ký tự, và chúng ta cần xác định ký tự này.

## Ý Tưởng
1. Duyệt qua từng ký tự của chuỗi `s`.
2. Với mỗi ký tự trong `s`, tìm ký tự tương ứng trong `t` và xóa ký tự đó khỏi `t`.
3. Sau khi duyệt hết các ký tự trong `s`, ký tự còn lại trong `t` chính là ký tự khác biệt.

## Đoạn Mã

```cpp
class Solution {
public:
    char findTheDifference(string s, string t) {
        for(int i = 0; i < s.size(); i++) {
            for(int j = 0; j < t.size(); j++) {
                if(s[i] == t[j]) {
                    t.erase(t.begin() + j);  // Xóa ký tự đã tìm thấy
                    break;
                }
            }
        }
        return t[0];  // Ký tự còn lại trong t là ký tự khác biệt
    }
};
