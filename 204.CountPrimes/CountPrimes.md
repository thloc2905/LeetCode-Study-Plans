## Mục tiêu

Hàm `countPrimes` được thiết kế để tính số lượng các số nguyên tố nhỏ hơn một số nguyên `n`. Mục tiêu là sử dụng thuật toán hiệu quả để tìm tất cả các số nguyên tố từ 0 đến `n-1`.

## Phương pháp

Để giải quyết vấn đề này, chúng ta sử dụng **thuật toán Sàng Eratosthenes (Sieve of Eratosthenes)**. Đây là một thuật toán cổ điển được sử dụng để tìm tất cả các số nguyên tố nhỏ hơn một số nhất định. Thuật toán này giúp loại bỏ các số không phải số nguyên tố một cách nhanh chóng và hiệu quả.

### Các bước thực hiện:
1. **Khởi tạo danh sách các số nguyên tố**:
   - Tạo một vector boolean `isPrime` với kích thước `n`, trong đó mọi phần tử được gán là `true` (tức là giả định mọi số đều là số nguyên tố).
   - Đánh dấu số `0` và `1` là không phải số nguyên tố.

2. **Dùng Sieve of Eratosthenes**:
   - Bắt đầu từ số `i = 2`. Nếu `i` là số nguyên tố (tức là `isPrime[i]` là `true`), thì loại bỏ tất cả các bội số của `i` (từ `i*i` đến `n`) vì các bội số này không phải số nguyên tố.
   
3. **Đếm số nguyên tố**:
   - Sau khi loại bỏ tất cả các số không phải số nguyên tố, đếm số phần tử có giá trị `true` trong vector `isPrime`, từ đó tính được số lượng số nguyên tố.

## Cách làm mã nguồn

Dưới đây là mã nguồn thực hiện phương pháp trên:

```cpp
class Solution {
public:
    int countPrimes(int n) {
       // Nếu n <= 2, không có số nguyên tố nào nhỏ hơn n, trả về 0
       if( n <= 2)
        {
            return 0;
        }
        
        int count = 0;
        
        // Tạo một vector boolean để đánh dấu các số nguyên tố
        vector<bool> isPrime(n, true);
        
        // Đánh dấu 0 và 1 là không phải số nguyên tố
        isPrime[0] = isPrime[1] = false;
        
        // Dùng thuật toán Sieve of Eratosthenes để đánh dấu các số không phải là số nguyên tố
        for(int i = 2; i * i < n; i++)
        {
            if(isPrime[i])
            {
                // Đánh dấu tất cả các bội số của i là không phải số nguyên tố
                for(int j = i * i; j < n; j += i)
                {
                    isPrime[j] = false;
                }
            }
        }  
        
        // Đếm số lượng số nguyên tố
        for(int i = 2 ; i < n; i++)
        {
            if(isPrime[i])
            {
                count++;
            }
        }
        
        return count;
    }
};
