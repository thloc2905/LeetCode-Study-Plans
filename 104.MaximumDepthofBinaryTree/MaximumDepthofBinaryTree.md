# Giải thích thuật toán tính độ sâu tối đa của cây nhị phân

## Mục tiêu
Bài toán yêu cầu tìm **nút giữa** trong một cây nhị phân. Mục tiêu là tính **độ sâu tối đa** của một cây nhị phân.

- **Độ sâu (chiều cao) của cây nhị phân** là số lượng các nút trên đường đi dài nhất từ gốc đến một lá.

## Phương pháp
Để giải quyết bài toán này, ta sẽ sử dụng **đệ quy**. Ý tưởng là:
1. Nếu cây rỗng (`nullptr`), trả về 0.
2. Nếu cây không rỗng, độ sâu là 1 cộng với độ sâu của cây con trái và cây con phải.
3. Độ sâu của cây con trái và cây con phải được tính đệ quy.

## Cách làm
1. **Điều kiện dừng**: Nếu cây là rỗng (con trỏ gốc là `nullptr`), trả về độ sâu là 0.
2. **Đệ quy**: Tính độ sâu của cây con trái và cây con phải.
   - Độ sâu của cây con trái là `maxDepth(root->left)`.
   - Độ sâu của cây con phải là `maxDepth(root->right)`.
3. **Trả về kết quả**: Độ sâu tối đa của cây là 1 cộng với độ sâu lớn hơn giữa cây con trái và cây con phải.

## Mã nguồn

```cpp
class Solution {
public:
    int maxDepth(TreeNode* root) {
        // Nếu cây rỗng, trả về độ sâu bằng 0
        if(!root) {
            return 0;
        }
        // Tính độ sâu cây con trái và cây con phải, trả về độ sâu lớn nhất + 1
        return 1 + max(maxDepth(root->left), maxDepth(root->right));
    }
};
