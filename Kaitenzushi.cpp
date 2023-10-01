
int getMaximumEatenDishCount(int N, vector<int> D, int K) {
    unordered_set<int> index;
    deque<int> stored;
    int count = 0;

    for (int d : D) {
        if (index.find(d) == index.end()) {
            if (index.size() == K) {
                int d_old = stored.front();
                stored.pop_front();
                index.erase(d_old);
            }
            index.insert(d);
            stored.push_back(d);
            count++;a
        }
    }

    return count;
}
