class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {

        vector<int> result;
        sort(arr1.begin(), arr1.end());

        for(int i = 0; i < arr2.size(); i++) {
            for(int j = 0; j < arr1.size(); j++) {
                if(arr2[i] == arr1[j]) {
                    result.push_back(arr1[j]);
                }
            }
        }

        for(int i = 0; i < arr1.size(); i++) {
            bool found = true;

            for(int j = 0; j < arr2.size(); j++) {
                if(arr1[i] == arr2[j]){
                    found = false;
                    break;
                }
            }
            if(found)
                result.push_back(arr1[i]);            
        }

        return result;
    }
};