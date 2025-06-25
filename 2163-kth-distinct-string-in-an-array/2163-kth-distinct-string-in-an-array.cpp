class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {

        unordered_map<string, int> freq;

        // Count the frequencies

        for(const string &word : arr) {
                freq[word]++;
        }

        // Find the k-th frequency

        int count = 0;

        for(const string &word : arr) {
            if (freq[word] == 1) {
                count += 1;

                if(count == k)
                    return word;
            }
        }

        return "";
        
        // string result = "";
        // int n = arr.size();
        // int count = 0;

        // for(int i = 0; i < n; i++) {
        //     bool found = true;
        //     for(int j = 0; j < n; j++) {
        //         if(arr[i] == arr[j] && i != j) {
        //             found = false;
        //             break;
        //         }
        //     }

        //     if(found == true) {
        //         count += 1;
        //         if(count == k)
        //             return arr[i];
        //     }
        // }

        // return result;
    }
};