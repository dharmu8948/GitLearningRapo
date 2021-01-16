 int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(&a, &b);
    printf("%d\n%d", a, b);

    return 0;
}
	  void update(int *a,int *b) {
    int t=*a;   //t is a temperory variable
    *a=*a+*b;
    *b=t>*b?(t-*b):(*b-t);
}

