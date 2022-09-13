void main()
{
    int a[2][2] = {{1,7},{4,2}};
    int b[2][2] = {{9,3},{6,8}};
    int c[2][2];

    int* pa = *a;
    int* pb = *b;
    int* pc = *c;
    int count = 4;
    
    for (int i = 0; i < count; i++){
        *pc = *pa+ *pb;
        pa +=1;
        pb +=1;
        pc +=1;
    }
}