# Sinh test cho các kì thi tuyển sinh và HSG

Bộ công cụ sinh test chuẩn (testlib/polygon) cho các kỳ thi tuyển sinh, HSG Tin học Việt Nam.

<picture>
  <source media="(prefers-color-scheme: dark)" srcset="assets/dark_bg.png">
  <source media="(prefers-color-scheme: light)" srcset="assets/bright_bg.png">
  <img alt="Project Logo" src="assets/bright_bg.png">
</picture>

<hr>

Cấu trúc mẫu: https://github.com/hungg261/polyson/tree/main/polyson/templates/sample

**Lưu ý:** Riêng năm [2026](./problems/2026/), sử dụng mẫu: https://github.com/hungg261/problemset-template

## Cấu trúc
- `problems/`: Lưu trữ bài tập theo phân cấp **Năm / Kỳ thi / Tên bài**.

**Lưu ý:** Năm của kì thi được xác định dựa vào ngày thi. Nếu kì thi có 2 ngày trở lên thì năm của kì thi được xác định dựa vào ngày thi đầu tiên.

## Lưu ý chung
- Định dạng file input và output lần lượt là `.in` và `.out`. Riêng đối với năm 2026 thì định dạng file input là `.inp`.
- Trình biên dịch yêu cầu hỗ trợ **C++11** trở lên. Khuyến khích sử dụng phiên bản **C++14**.
