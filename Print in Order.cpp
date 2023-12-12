class Foo {
    condition_variable cv;
    mutex mtx;
    int currentPrint;
public:
    Foo() {
        currentPrint=1;
    }

    void first(function<void()> printFirst) {
        unique_lock<mutex>lock(mtx);
        currentPrint=2;
        printFirst();
        cv.notify_all();
    }

    void second(function<void()> printSecond) {
        unique_lock<mutex>lock(mtx);
        cv.wait(lock,[&](){return currentPrint==2;});
        currentPrint=3;
        printSecond();
        cv.notify_one();
    }

    void third(function<void()> printThird) {
        unique_lock<mutex>lock(mtx);
        cv.wait(lock,[&](){return currentPrint==3;});
        printThird();
    }
};
