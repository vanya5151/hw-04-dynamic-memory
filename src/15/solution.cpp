int* createArray(int size){
    int* p = new int[size]{};
    return p;
}

void clear_array(int* p){
    delete[] p;
}