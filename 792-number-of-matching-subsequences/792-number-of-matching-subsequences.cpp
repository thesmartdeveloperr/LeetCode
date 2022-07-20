class Solution {
public:
    int numMatchingSubseq(string S, vector<string>& words) {
        vector<vector<int>> mp (26);
		for (int i = 0; i < S.size (); ++i) mp[S[i] - 'a'].push_back (i);
		int res = 0;
		for (const auto& word : words) {
			int x = -1;
			bool found = true;

			for (char c : word) {
				auto it = upper_bound (mp[c - 'a'].begin (), mp[c - 'a'].end (), x);
				if (it == mp[c - 'a'].end ()) found = false;
				else x = *it;
			}

			if (found) res++;
		}

		return res;
    }
};