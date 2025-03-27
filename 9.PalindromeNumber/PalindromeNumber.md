### Kiểm tra số đối xứng (Palindrome) trong C++

Đoạn mã dưới đây kiểm tra xem một số nguyên có phải là số đối xứng (Palindrome) hay không. Một số đối xứng là số mà khi đảo ngược các chữ số của nó, giá trị vẫn giữ nguyên.

#### Các bước thực hiện:

1. **Kiểm tra số âm**:
   - Nếu số `x` nhỏ hơn 0, thì không thể là số đối xứng, vì dấu âm sẽ không tồn tại sau khi đảo ngược. Hàm sẽ trả về `false` nếu số là âm.

   ```cpp
   if (x < 0) {
       return false;
   }

Đảo ngược số:

Lưu giá trị ban đầu của số vào một biến temp.

Dùng một biến count để lưu số đảo ngược. Mỗi lần lấy chữ số cuối cùng của temp và cộng dồn vào count.

long long count = 0;
int temp = x;
while (temp > 0) {
    count = count * 10 + temp % 10;  // Lấy chữ số cuối cùng
    temp /= 10;  // Cắt bỏ chữ số cuối cùng
}
So sánh số ban đầu với số đảo ngược:

So sánh số đảo ngược (count) với số ban đầu (x). Nếu chúng bằng nhau, tức là số đối xứng và hàm trả về true. Nếu không, trả về false.

return count == x;  // Kiểm tra số đảo ngược có bằng số ban đầu không
