// swap

void func(int y)
{
    y = 9; // changes y to 9.
}

void swap(int *a, int *b)
{                  // here a and b accepts the address of a and b
    int temp = *a; // *a holds the value stored in address of a.
    *a = *b;       // *b holds the value stored in address of b.
    *b = temp;
    func(*b); // we are passing here the value of b not the address of b (pass-by-value). So, whatever changes done in the func() will not reflect here because func creates it's own copy of *b.
}

int main()
{
    int a = 5, b = 6;
    swap(&a, &b);
    printf("%d %d", a, b); // 6, 5
    return 0;
}