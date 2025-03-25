# Tính Chu Vi Tam Giác Lớn Nhất Có Thể

Chương trình dưới đây giúp tìm chu vi của tam giác có ba cạnh lớn nhất có thể tạo ra từ một tập hợp các số nguyên. Mục tiêu là tìm ba cạnh sao cho các cạnh này có thể tạo thành một tam giác hợp lệ. Một tam giác hợp lệ cần thỏa mãn định lý tam giác: tổng hai cạnh bất kỳ phải lớn hơn cạnh còn lại.

## Mô Tả

- **Hàm `largestPerimeter(vector<int>& nums)`**:
    - Nhận đầu vào là một vector các số nguyên `nums`, trong đó mỗi số đại diện cho chiều dài một cạnh của tam giác.
    - Tìm ba cạnh lớn nhất có thể tạo thành một tam giác hợp lệ và trả về chu vi của tam giác đó.
    - Nếu không thể tạo ra tam giác hợp lệ, hàm trả về 0.
