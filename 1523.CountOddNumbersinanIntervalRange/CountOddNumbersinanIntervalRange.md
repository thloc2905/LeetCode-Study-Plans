# Đếm Số Lẻ Trong Khoảng

Chương trình dưới đây tính toán số lượng các số lẻ trong một khoảng cho trước, được xác định bởi hai số nguyên `low` và `high`. Hàm `countOdds` nhận vào hai tham số này và trả về số lượng các số lẻ trong khoảng đó.

## Mô Tả

- **Hàm `countOdds(int low, int high)`**:
    - Duyệt qua tất cả các số từ `low` đến `high`.
    - Kiểm tra xem mỗi số có phải là số lẻ hay không (nếu số chia hết cho 2 dư 1).
    - Đếm số lượng các số lẻ trong khoảng và trả về kết quả.

## Cách Hoạt Động

1. Người dùng nhập vào hai số nguyên `low` và `high`, xác định phạm vi cần đếm số lẻ.
2. Chương trình duyệt qua dãy số từ `low` đến `high` và đếm tất cả các số lẻ.
3. Kết quả được in ra màn hình.
