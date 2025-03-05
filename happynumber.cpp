class Solution {
    public:
        bool isHappy(int n) {
            if(n==1 || n==7) return true;//kiểm tra từng số từ 1 đến 10 thì chỉ có số 1 và 7 là số hạnh phúc 
            else if(n<10) return false;//th còn lại là ko phải là số hạnh phúc 
            else{
                int sum=0;
                while(n>0){
                    int temp=n%10;//lấy cái chữ số cuối cùng của n
                    sum+= temp*temp;//tính bình phương chử số đã lấy 
                    n=n/10;// loại bỏ chữ số cuối cùng của n 
                }
                return isHappy(sum);
            }
        }
    };
    /* Input: 
    Cho 1 số nguyên kiểm tra số đó có phải là số hạnh phúc hay ko 
     **Định nghĩa số hạnh phúc 
     -bắt đầu với số n ,thay thế nó bằng tổng bình phương các chử số 
     lặp lại quá trình ,kq ra 1 thì nó là số hạnh phúc ,
     -nếu ra 0 thì kq sẽ ra là false;
     -nếu số đó nó tạo thanh vòng lặp thì nó cũng ko phải là só hạnh phúc 
     output :
     nếu là số hạnh phúc thì nó sẽ là true 
     còn ko thì falsefalse
     */



