# Giải Pháp Chuyển Đổi Ký Tự Thành Chữ Thường: To Lower Case

## Mô Tả
Bài toán yêu cầu chuyển tất cả các ký tự chữ cái trong chuỗi `s` thành chữ thường. Nếu ký tự là chữ hoa (A-Z), ta sẽ chuyển nó thành chữ thường tương ứng.

## Ý Tưởng
1. Duyệt qua từng ký tự trong chuỗi `s`.
2. Nếu ký tự là chữ hoa (thuộc phạm vi 'A' đến 'Z'), ta chuyển nó thành chữ thường bằng cách cộng thêm 32 vào giá trị ASCII của ký tự đó.
3. Trả về chuỗi `s` đã được chuyển đổi.

## Đoạn Mã

```cpp
class Solution {
public:
    string toLowerCase(string s) {
        for(int i = 0; i < s.size(); i++) {
            if(s[i] >= 'A' && s[i] <= 'Z') {
                s[i] += 32;  // Chuyển ký tự chữ hoa thành chữ thường
            }
        }
        return s;  // Trả về chuỗi đã chuyển đổi
    }
};
