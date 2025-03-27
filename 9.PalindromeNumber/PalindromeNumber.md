Bước 1: Kiểm tra số âm
Đầu tiên, chương trình kiểm tra nếu số x là số âm. Số âm không thể là số đối xứng, vì dấu âm sẽ không tồn tại sau khi đảo ngược. Nếu x nhỏ hơn 0, hàm sẽ trả về false.

cpp
Sao chép
if (x < 0) {
    return false;
}
Bước 2: Lưu trữ số đảo ngược
Để kiểm tra nếu một số là đối xứng, chúng ta cần đảo ngược số đó và so sánh với số ban đầu. Đoạn mã dưới đây thực hiện điều này:

Lưu giá trị của x vào biến temp để giữ nguyên số gốc.

Sử dụng một biến count để tính toán số đảo ngược bằng cách chia temp liên tục cho 10 và cộng dồn các chữ số đã lấy được vào count.

cpp
Sao chép
long long count = 0;
int temp = x;
while (temp > 0) {
    count = count * 10 + temp % 10;  // Lấy chữ số cuối cùng và ghép vào số đảo ngược
    temp /= 10;  // Cắt bỏ chữ số cuối cùng
}
Bước 3: So sánh số gốc với số đảo ngược
Sau khi số đã được đảo ngược và lưu trong biến count, chúng ta so sánh số ban đầu (x) với số đảo ngược (count). Nếu chúng bằng nhau, số này là số đối xứng và hàm trả về true, ngược lại trả về false.

cpp
Sao chép
return count == x;  // Kiểm tra số đảo ngược có bằng số ban đầu không
Tổng kết
Đoạn mã trên giúp bạn kiểm tra liệu một số nguyên có phải là số đối xứng hay không thông qua các bước:

Loại bỏ số âm.

Đảo ngược số nguyên.

So sánh số đảo ngược với số ban đầu.
