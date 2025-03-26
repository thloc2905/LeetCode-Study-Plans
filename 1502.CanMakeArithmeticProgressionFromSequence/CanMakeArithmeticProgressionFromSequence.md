Phương thức canMakeArithmeticProgression
Phương thức canMakeArithmeticProgression kiểm tra xem mảng số nguyên có thể sắp xếp lại để tạo thành một cấp số cộng hay không. Cấp số cộng là mảng mà hiệu giữa các phần tử liên tiếp là cố định.

Cách hoạt động:
Sắp xếp mảng: Trước hết, mảng được sắp xếp theo thứ tự tăng dần để dễ dàng so sánh hiệu giữa các phần tử liên tiếp.

Kiểm tra hiệu giữa các phần tử: Sau khi sắp xếp, ta tính hiệu giữa hai phần tử đầu tiên làm mốc (d). Sau đó, ta duyệt qua các phần tử còn lại và kiểm tra xem hiệu giữa mỗi cặp phần tử liên tiếp có bằng d hay không.

Trả về kết quả: Nếu tất cả các hiệu đều bằng nhau, trả về true, chứng tỏ mảng có thể tạo thành một cấp số cộng. Ngược lại, trả về false.

Độ phức tạp:
Thời gian: O(n log n) do thao tác sắp xếp mảng.

Không gian: O(n) vì tạo một bản sao của mảng để xử lý.
