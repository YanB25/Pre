#ifndef _PTR_
#define _PTR_
class ptr {
public:
    ptr() : ptr_(nullptr) {}
    ptr(int i) : ptr_(new int(i)) {}

    //here
    ptr& operator=(const ptr& rhs);
private:
    int* ptr_;
};
#endif

//bad practise
ptr& operator=(const ptr& rhs) {
    delete ptr_;
    if (rhs) {
        ptr_ = new int(*rhs);
    } else {
        ptr = nullptr;
    }
}


ptr& operator=(const ptr& rhs) {
    ptr tmp(rhs);
    delete ptr_;
    //......
}
