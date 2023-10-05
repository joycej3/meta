
int getMaximumEatenDishCount(int N, vector<int> D, int K) {
    unordered_set<int> index;
    queue<int> stored;
    int count = 0;

    for (int d : D) {
        if (index.find(d) == index.end()) {
            if (index.size() == K) {
                int d_old = stored.front();
                stored.pop();
                index.erase(d_old);
            }
            index.insert(d);
            stored.push(d);
            count++;
        }
    }
    return count;
}
