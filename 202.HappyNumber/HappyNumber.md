Phương thức isHappy
Phương thức isHappy giúp chúng ta xác định xem một số nguyên có phải là số hạnh phúc hay không. Một số được gọi là số hạnh phúc nếu, sau khi thay thế mỗi chữ số trong số đó bằng bình phương của nó và cộng lại, kết quả cuối cùng sẽ là 1. Nếu không, quá trình này sẽ lặp đi lặp lại mà không bao giờ đạt được 1.

Cách hoạt động:
Trường hợp đặc biệt:

Nếu n bằng 1 hoặc 7, phương thức trả về true vì đây là các số hạnh phúc.

Nếu n nhỏ hơn 10 nhưng không phải 1 hoặc 7, phương thức trả về false vì nó không thể trở thành số hạnh phúc qua quá trình tính toán.

Tính tổng bình phương các chữ số:

Đối với các số lớn hơn 9, ta tính tổng của bình phương các chữ số của n. Sau đó, ta gọi đệ quy phương thức isHappy với giá trị này.

Quá trình này tiếp tục lặp đi lặp lại cho đến khi đạt được 1 (số hạnh phúc) hoặc kết quả bắt đầu lặp lại (không phải số hạnh phúc).

Lặp lại và kết quả:

Nếu trong quá trình tính toán, tổng của các bình phương bắt đầu lặp lại mà không bao giờ đạt được 1, phương thức trả về false.

Nếu cuối cùng tổng bằng 1, trả về true.

Độ phức tạp:
Thời gian: O(log n), vì mỗi lần lặp qua các chữ số của n sẽ giảm số chữ số trong n xuống.

Không gian: O(log n), do việc sử dụng đệ quy để kiểm tra các giá trị tiếp theo.
