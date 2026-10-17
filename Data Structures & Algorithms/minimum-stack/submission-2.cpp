class MinStack {
    int topI;
    int minA[6000];
    int a[6000];

public:
    MinStack() {
        topI = -1;
    }

    void push(int val) {
        a[++topI] = val;
        if (topI == 0) minA[topI] = val;
        else if (val < minA[topI - 1]) minA[topI] = val;
        else minA[topI] = minA[topI - 1];
    }

    void pop() {
        topI--;
    }

    int top() {
        return a[topI];
    }

    int getMin() {
        return minA[topI];
    }
};


