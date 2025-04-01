# Giải Pháp Giải Mã Lệnh: Interpret Command

## Mô Tả
Bài toán yêu cầu chúng ta giải mã một chuỗi lệnh `command`. Các ký tự trong chuỗi này sẽ được thay thế theo các quy tắc sau:
- Ký tự `'G'` giữ nguyên.
- Dãy ký tự `()` sẽ được thay thế bằng `'o'`.
- Dãy ký tự `(al)` sẽ được thay thế bằng `'al'`.

## Ý Tưởng
1. Duyệt qua từng ký tự trong chuỗi `command`.
2. Nếu gặp ký tự `'G'`, thêm nó vào kết quả.
3. Nếu gặp dấu ngoặc đơn `'('`:
   - Nếu ký tự sau dấu `'('` là `')'`, thay thế nó bằng `'o'`.
   - Nếu không, thay thế chuỗi `"(al)"` bằng `'al'`.
4. Tiếp tục duyệt chuỗi cho đến hết và trả về kết quả.

## Đoạn Mã

```cpp
class Solution {
public:
    string interpret(string command) {
        string ans;
        for(int i = 0; i < command.size(); i++) {
            if(command[i] == 'G') 
                ans.push_back('G');  // Thêm 'G' vào kết quả
            else if(command[i] == '(') {
                // Kiểm tra dấu ngoặc đơn, nếu là '()', thay thế bằng 'o'
                if(command[i + 1] == ')') {
                    ans.push_back('o');
                    i++;  // Bỏ qua ký tự ')'
                }
                else {
                    ans.push_back('a');
                    ans.push_back('l');
                    i += 3;  // Bỏ qua '(al)'
                }
            }
        }
        return ans;  // Trả về kết quả
    }
};
