class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int> res;

        for (int i = 100; i <= 999; ++i) {
            if (i % 2 != 0) continue; // even numbers only

            vector<int> sample(digits.begin(), digits.end());

            int x1 = i % 10;
            int x2 = (i / 10) % 10;
            int x3 = i / 100;

            auto it1 = find(sample.begin(), sample.end(), x1);
            if (it1 == sample.end()) continue;
            sample.erase(it1);

            auto it2 = find(sample.begin(), sample.end(), x2);
            if (it2 == sample.end()) continue;
            sample.erase(it2);

            auto it3 = find(sample.begin(), sample.end(), x3);
            if (it3 == sample.end()) continue;

            res.push_back(i);
        }

        return res;
    }
};
