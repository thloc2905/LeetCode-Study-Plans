# Giải thích thuật toán tìm nút giữa của danh sách liên kết đơn

## Mục tiêu
Bài toán yêu cầu tìm **nút giữa** trong một danh sách liên kết đơn. 

- Nếu danh sách có số phần tử là lẻ, trả về **nút chính giữa**.
- Nếu danh sách có số phần tử là chẵn, trả về **nút thứ hai** trong hai nút giữa.

## Phương pháp
Để giải quyết bài toán này, ta sẽ sử dụng **hai con trỏ**:
- **Con trỏ `temp`**: Di chuyển một bước mỗi lần.
- **Con trỏ `temp1`**: Di chuyển hai bước mỗi lần.

Khi con trỏ `temp1` không thể di chuyển thêm (đến cuối danh sách), con trỏ `temp` sẽ ở **nút giữa**.

## Cách làm
1. Khởi tạo hai con trỏ `temp` và `temp1`, cả hai đều trỏ tới **đầu danh sách**.
2. Duyệt qua danh sách bằng cách:
   - Di chuyển con trỏ `temp1` **hai bước** mỗi lần.
   - Di chuyển con trỏ `temp` **một bước** mỗi lần.
3. Khi `temp1` không thể di chuyển hai bước nữa (tức là đã đến cuối danh sách), con trỏ `temp` sẽ **trỏ đến nút giữa**.
   
## Mã nguồn

```cpp
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head;  // Con trỏ di chuyển 1 bước một lần
        ListNode* temp1 = head; // Con trỏ di chuyển 2 bước một lần
        while (temp1 != nullptr && temp1->next != nullptr) {
            temp1 = temp1->next->next; // Di chuyển temp1 2 bước
            temp = temp->next;         // Di chuyển temp 1 bước
        }
        return temp; // Khi temp1 đã đi đến cuối, temp là nút giữa
    }
};
