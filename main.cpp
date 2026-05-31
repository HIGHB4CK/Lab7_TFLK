int main() {
    auto square = [](int x) -> int { return x * x; };
    int a = 5;
    int b = square(a);
    return b;
}
