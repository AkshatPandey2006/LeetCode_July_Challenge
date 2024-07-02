vector<int> intersect(vector<int> &a, vector<int> &b) {
    sort(a.begin(), a.end()), sort(b.begin(), b.end());

    int i = 0, j = 0, n = a.size(), m = b.size();
    vector<int> output;

    while(i < n and j < m) {
        if(a[i] < b[j]) {
            i++;
        }
        else if(a[i] > b[j]) {
            j++;
        }
        else {
            output.push_back(a[i]);
            i++, j++;
        }
    }
    return output;
}
