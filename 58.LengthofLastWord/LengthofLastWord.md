# Mục Tiêu

Bài toán yêu cầu tìm độ dài của từ cuối cùng trong một chuỗi ký tự. Một từ được định nghĩa là một dãy các ký tự không phải là khoảng trắng, và từ cuối cùng là từ xuất hiện sau cùng trong chuỗi, tính từ trái sang phải.

# Ý Tưởng Giải Quyết

Chúng ta có thể giải quyết bài toán này bằng cách:
1. Sử dụng một `stringstream` để tách chuỗi thành các từ riêng biệt.
2. Duyệt qua từng từ trong chuỗi và cập nhật độ dài của từ cuối cùng mỗi khi chúng ta gặp một từ mới.
3. Khi duyệt hết chuỗi, độ dài của từ cuối cùng sẽ là kết quả.

Để tối ưu hơn, ta chỉ cần ghi nhớ độ dài của từ cuối cùng trong quá trình duyệt qua chuỗi mà không cần phải lưu trữ tất cả các từ.

# Mã Nguồn

```cpp
class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);  // Tạo một đối tượng stringstream từ chuỗi s
        string word;         // Biến để lưu trữ từng từ
        int length = 0;      // Biến lưu độ dài của từ cuối cùng
        
        // Duyệt qua từng từ trong chuỗi
        while(ss >> word) {
            length = word.length();  // Cập nhật độ dài của từ hiện tại
        }
        
        return length;  // Trả về độ dài của từ cuối cùng
    }
};
