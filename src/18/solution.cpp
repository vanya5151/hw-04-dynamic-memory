int* erase(const int* arr, int size, int index){
    int* p = new int[size-1];
    for(int i = 0;i<index;i++){
        p[i] = arr[i];
    }

    for(int i = index;i<size-1;i++){
        p[i] = arr[i+1];
    }
    return p;

    delete[] p;
}