int main() { int x = 10; int *ptr = &x; *ptr = 20; printf("%d", x); // Now x is updated to 20 return 0; }