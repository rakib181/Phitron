class HEAP {
public:
    vector<int> pq;
    void insert(int x) {
        pq.emplace_back(x);
        int node = (int) pq.size() - 1;
        while (node != 0) {
            int parent = (node - 1) / 2;
            if (pq[parent] <= pq[node]) {
                swap(pq[parent], pq[node]);
            }
            node = parent;
        }
    }

    void remove() {
        if (pq.empty())return;
        int sz = (int) pq.size() - 1;
        pq[0] = pq[sz];
        pq.pop_back();
        sz = (int) pq.size() - 1;
        int node = 0;
        while (true) {
            int left = 2 * node + 1, right = 2 * node + 2;
            if (left <= sz and right <= sz) {
                if (pq[left] >= pq[right] and pq[left] > pq[node]) {
                    swap(pq[left], pq[node]);
                    node = left;
                } else if (pq[right] >= pq[left] and pq[right] > pq[node]) {
                    swap(pq[right], pq[node]);
                    node = right;
                } else break;
            } else if (left <= sz) {
                if (pq[left] > pq[node]) {
                    swap(pq[left], pq[node]);
                    node = left;
                } else break;
            } else if (right <= sz) {
                if (pq[right] > pq[node]) {
                    swap(pq[right], pq[node]);
                    node = right;
                } else break;
            } else break;
        }
    }

    bool empty() const{
        return (int) pq.size() == 0;
    }

    int top() const{
        return pq[0];
    }
};
