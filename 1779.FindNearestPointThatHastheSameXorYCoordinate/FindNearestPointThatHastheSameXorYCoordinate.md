# Tìm Điểm Gần Nhất Thỏa Mãn Điều Kiện

Chương trình dưới đây giúp tìm điểm gần nhất với một điểm `(x, y)` từ một danh sách các điểm, với điều kiện là điểm đó phải có một trong các tọa độ `x` hoặc `y` trùng với tọa độ của điểm `(x, y)`.

## Mô Tả

- **Hàm `nearestValidPoint(int x, int y, vector<vector<int>>& points)`**:
    - Nhận vào hai tọa độ `x` và `y` cùng một vector các điểm `points`.
    - Tìm và trả về chỉ số của điểm gần nhất có tọa độ `x` hoặc `y` trùng với điểm `(x, y)`. Nếu có nhiều điểm thỏa mãn, chọn điểm có khoảng cách nhỏ nhất. Nếu không có điểm nào thỏa mãn, trả về -1.
