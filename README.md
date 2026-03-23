# Sinh test cho các kì thi HSG

Bộ công cụ sinh test chuẩn (testlib/polygon) cho các kỳ thi HSG Tin học Việt Nam.

Cấu trúc mẫu: https://github.com/hungg261/problemset-template

## Cấu trúc
- `problems/`: Lưu trữ bài tập theo phân cấp **Năm / Kỳ thi / Tên bài**.

**Lưu ý:** Năm của kì thi được xác định dựa vào ngày thi.

## Quy trình
Mỗi bài tập nằm trong một thư mục riêng bao gồm:
- `generators/`: Code sinh test `.cpp` (dùng testlib).
- `validators/`: Kiểm tra tính hợp lệ của input.
- `checkers/`: Code so sánh đáp án.
- `scripts/`: Các mã đơn giản để khởi tạo và chạy thử các file.

## Lưu ý
- Trình biên dịch yêu cầu hỗ trợ **C++11** trở lên. Khuyến khích sử dụng phiên bản **C++14**.
