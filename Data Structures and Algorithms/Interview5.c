int main()
{
    void *vptr, v;  // CE: void is not a valid type for declaring variables. void * is valid though.
    v = 0;
    vptr = &v;
    printf("%v", *vptr);
    getchar();
    return 0;
}
