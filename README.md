# testcases_generator
Trình sinh test hoạt động trên nền tảng các thể loại hệ điều hành Linux.
# Hướng dẫn sử dụng
Trong repo đã có sẵn 3 file, `BUILD`, `PRESUM.cpp` và `RandomTestcasesGenerator.cpp`.
## Trước tiên ta nói về file `RandomTestcasesGenerator.cpp`
### Thuộc tính
Từ dòng 39 đến dòng 43
``` C++
string __PROBLEM_CODE_NAME__                = "PRESUM";
string __INPUT_FILE_NAME__                  = __PROBLEM_CODE_NAME__ + ".inp";
string __OUTPUT_FILE_NAME__                 = __PROBLEM_CODE_NAME__ + ".out";
ll __NUMBER_OF_TESTCASES__                  = 367;
ll __TESTCASES_ORDER_DIGIT_COUNT__          = 0;
```
là để xác định các thuộc tính của bộ test, bao gồm:
- `__PROBLEM_CODE_NAME__` là codename của bài tập;
- `__INPUT_FILE_NAME__` là tên của file input. Mặc định nó có tên là `__PROBLEM_CODE_NAME__` với đuôi `.inp`;
- `__OUTPUT_FILE_NAME__` tương tự nhưng là file output.
- `__NUMBER_OF_TESTCASES__` là số test mà bạn muốn sinh.
- `__TESTCASES_ORDER_DIGIT_COUNT__` các bạn TUYỆT ĐỐI KHÔNG ĐỤNG ĐẾN DÒNG NÀY.
### Sinh test
Từ dòng 73 đến dòng 82
``` C++
const ll maxn = 1e5, MAXA = 1e9;

cout << maxn << ' ' << maxn << '\n';
FOR(i, 1, maxn) cout << RANDOM(1, MAXA) << ' ';
cout << '\n';
FOR(i, 1, maxn) {
    ll a = RANDOM(1, maxn), b = RANDOM(1, maxn);
    if (a > b) swap(a, b);
    cout << a << ' ' << b << '\n';
}
```

là dòng sinh test chính của bạn. Mọi thay đổi thực hiện ở dòng này.
### Lưu ý
Việc thay đổi các dòng khác có thể dẫn đến những sự cố ngoài ý muốn.
## Sử dụng
### File cần có
Bạn cần file code để giải bài. Bạn thay thế file đó của bạn với file `PRESUM.cpp`.
### Bắt đầu sinh test
Bạn mở terminal và chạy file `BUILD` bằng cứu pháp `./BUILD`.
Đợi.
