# Giải Pháp Giải Mã Chuỗi Mã Hóa: Freq Alphabets

## Mô Tả
Bài toán yêu cầu giải mã một chuỗi mã hóa, trong đó mỗi cặp số từ 1 đến 26 đại diện cho một chữ cái trong bảng chữ cái (từ `'a'` đến `'z'`). Những cặp số này có thể đi kèm với dấu `#` để chỉ định các số từ 10 đến 26, ví dụ: `10#` đại diện cho `'j'`.

## Ý Tưởng
1. Duyệt qua chuỗi `s`:
   - Nếu gặp một cặp số tiếp theo có dấu `#`, ta ghép chúng lại thành một số từ 10 đến 26, sau đó chuyển thành chữ cái tương ứng.
   - Nếu không có dấu `#`, ta chuyển trực tiếp mỗi số từ 1 đến 9 thành chữ cái tương ứng.
2. Cộng kết quả vào chuỗi `result` sau khi giải mã.

## Đoạn Mã

```cpp
class Solution {
public:
    string freqAlphabets(string s) {
        string result = "";
        int i = 0;
        while (i < s.length()) {
            // Nếu có dấu '#' sau 2 ký tự, xử lý số từ 10 đến 26
            if (i + 2 < s.length() && s[i + 2] == '#') {
                int num = (s[i] - '0') * 10 + (s[i + 1] - '0');
                result += char(num + 'a' - 1);  // Chuyển số thành chữ cái
                i += 3;  // Bỏ qua 3 ký tự đã xử lý
            } else {
                result += char(s[i] - '0' + 'a' - 1);  // Chuyển số từ 1 đến 9 thành chữ cái
                i++;
            }
        }
        return result;  // Trả về chuỗi đã giải mã
    }
};
