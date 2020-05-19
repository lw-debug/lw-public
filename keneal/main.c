int g(int a)
{
    return (a+ 3);
}
int f(int x)
{
    return g(x);
}
int main(void)
{

    return f(8) + 1;
}