### Kiểm tra số đối xứng (Palindrome)

Đoạn mã dưới đây kiểm tra xem một số nguyên có phải là số đối xứng (Palindrome) hay không. Một số đối xứng là số mà khi đảo ngược các chữ số của nó, giá trị vẫn giữ nguyên.

#### Các bước thực hiện:

1. **Kiểm tra số âm**:
   - Nếu số `x` nhỏ hơn 0, thì không thể là số đối xứng, vì dấu âm sẽ không tồn tại sau khi đảo ngược. Hàm sẽ trả về `false` nếu số là âm.

2. **Đảo ngược số**:
   - Lưu giá trị ban đầu của số vào một biến `temp`.
   - Dùng một biến `count` để lưu số đảo ngược. Mỗi lần lấy chữ số cuối cùng của `temp` và cộng dồn vào `count`.

3. **So sánh số ban đầu với số đảo ngược**:
   - So sánh số đảo ngược (`count`) với số ban đầu (`x`). Nếu chúng bằng nhau, tức là số đối xứng và hàm trả về `true`. Nếu không, trả về `false`.

#### Ví dụ:

**Input**: `121`  
**Output**: `true`

**Input**: `-121`  
**Output**: `false`

---

Hy vọng bạn sẽ thấy giải thích này dễ hiểu và hữu ích!

