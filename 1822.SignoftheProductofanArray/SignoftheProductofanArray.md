Mô tả phương thức arraySign
Phương thức arraySign của lớp Solution giải quyết một bài toán thú vị: xác định dấu của tích các phần tử trong một mảng số nguyên. Tuy nhiên, thay vì tính toán tích trực tiếp (một phép toán rất tốn kém về thời gian và tài nguyên), chúng ta chỉ cần phân tích dấu của từng phần tử trong mảng và suy ra dấu của tích tổng thể.

Chiến lược giải quyết:
Phương pháp này tận dụng một nguyên lý đơn giản trong toán học: tích của các số có dấu phụ thuộc vào số lượng các số âm trong mảng:

Nếu có một số âm lẻ trong mảng, tích sẽ là âm.

Nếu có một số âm chẵn, tích sẽ là dương.

Nếu có một phần tử bằng 0, tích sẽ là 0.
