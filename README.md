# tinh_hanhkiem
## 🌟 GIỚI THIỆU CHƯƠNG TRÌNH: TÍNH HỌC LỰC SINH VIÊN

Chương trình này được xây dựng nhằm mục đích tính toán và phân loại học lực của sinh viên dựa trên điểm số đầu vào (từ 0 đến 10).

### 🚀 Công nghệ

Mã nguồn được viết bằng ngôn ngữ lập trình **C** (chuyển đổi từ phiên bản C++ ban đầu) và sử dụng các thư viện chuẩn của C.

### 🎯 Mục tiêu

* Thực hiện phép phân loại dựa trên các **khoảng giá trị số thực**.
* Sử dụng lệnh **`switch-case`** để đưa ra kết quả phân loại học lực cuối cùng (thông qua cơ chế ánh xạ điểm số sang mã học lực dạng số nguyên).

---

## 📋 QUY TẮC PHÂN LOẠI HỌC LỰC

Chương trình áp dụng các quy tắc sau để phân loại học lực:

| Phân loại Học lực | Điều kiện Điểm số (Điểm $x$) |
| :---------------- | :---------------------------- |
| **Xuất sắc** | $10 \geq x \geq 9$                    |
| **Giỏi** | $9 > x \geq 8$                |
| **Khá** | $8 > x \geq 6.5$              |
| **Trung bình** | $6.5 > x \geq 5$              |
| **Yếu** | $5 > x \geq 3.5$              |
| **Kém** | $3.5 > x \geq 0$                   |

---

## 🛠 Hướng Dẫn Sử Dụng

### 1. Yêu cầu hệ thống

Cần có một trình biên dịch **C** (ví dụ: GCC, Clang) để chạy chương trình.

### 2. Biên dịch và Chạy

1.  **Lưu mã nguồn:** Lưu mã nguồn C đã cung cấp vào một file có tên, ví dụ: `tinh_hoc_luc.c`.
2.  **Biên dịch (Compile):** Mở Terminal hoặc Command Prompt và sử dụng lệnh:
    ```bash
    gcc tinh_hoc_luc.c -o tinh_hoc_luc
    ```
3.  **Thực thi (Run):** Chạy file đã biên dịch:
    ```bash
    ./tinh_hoc_luc
    ```

### 3. Đầu vào (Input)

Chương trình sẽ yêu cầu bạn **nhập điểm** của sinh viên (là một số thực từ 0 đến 10).

### 4. Đầu ra (Output)

Chương trình sẽ hiển thị kết quả phân loại học lực tương ứng với điểm vừa nhập.

---

## 💡 Cấu trúc Chương trình

Chương trình bao gồm hai hàm chính để đảm bảo sử dụng được lệnh `switch-case` theo yêu cầu:

1.  `map_score_to_rank(double score)`: **Ánh xạ** điểm số thực sang một giá trị nguyên (mã rank) bằng cách sử dụng **`if-else if`**.
2.  `print_academic_performance(int rank)`: Sử dụng lệnh **`switch-case`** để so sánh mã rank nguyên và in ra kết quả học lực bằng chữ.
