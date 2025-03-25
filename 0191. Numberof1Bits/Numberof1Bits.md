# Tính Số Lượng Bit 1 Trong Biểu Diễn Nhị Phân

Chương trình dưới đây tính toán số lượng bit 1 trong biểu diễn nhị phân của một số nguyên không âm `n`.

## Mô Tả

- **Hàm `hammingWeight(int n)`**:
    - Nhận đầu vào là một số nguyên không âm `n`.
    - Tính toán số lượng bit 1 trong biểu diễn nhị phân của `n`.
    - Đoạn mã sử dụng vòng lặp để chia số `n` liên tiếp cho 2 và lưu lại phần dư vào một vector, sau đó đếm số lượng bit 1.
