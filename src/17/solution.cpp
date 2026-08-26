int* concat(const int* a, int size_a, const int* b, int size_b){
    int* p = new int[size_a+size_b];
    for(int i = 0;i<size_a;i++){
        p[i] = a[i];
    }
    for(int i = 0;i<size_b;i++){
        p[size_a + i] = b[i];
    }
    return p;
    delete[] p;
}