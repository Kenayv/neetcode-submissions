class MinStack {
    int topI;
    int minI;
    int a[1000];

public:
    MinStack() {
        topI = -1;
        minI = -1;
    }

    void push(int val) {
        a[++topI] = val;

        if (minI == -1)
        {
            minI++;
        }
        else if (a[topI] < a[minI])
        {
            minI = topI;
        }
    }

    void pop() {
        if (topI == minI)
        {
            if (topI == 0)
            {
                minI--;
            }
            else
            {
                minI = 0;
                for (int i = 1; i < topI; i++)
                    if (a[minI] > a[i]) minI = i;
            }
        }
        topI--;
    }

    int top() {
        return a[topI];
    }

    int getMin() {
        return a[minI];
    }
};

