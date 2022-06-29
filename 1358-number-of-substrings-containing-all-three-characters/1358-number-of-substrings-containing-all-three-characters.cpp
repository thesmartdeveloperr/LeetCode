// class Solution {
// public:
//     int numberOfSubstrings(string s) {
        
//         int i=0,j=0;
//         unordered_map<int,int> mp;
//         for(i=0;i<s.size();i++)
//         {
//             mp[s[i]]++;
            
//         }
//         int c=0;
//         for(j=0;j<s.size();j++)
//         {
//             if(mp['a']>=1 && mp['b']>=1 && mp['c'] >=1)
//             {
//                 c++;
//                 mp[s[j]]--;
//             }
//             else
//             {
//                 break;
//             }
//         }
//         return c;
//     }
// };
class Solution {
public:
    int numberOfSubstrings(string s) {
        int i=0,j=0;
        int arr[]={0,0,0};
        int c=0;
        while(j<s.size()){
            arr[s[j]-'a']+=1;
            while(arr[0] and arr[1] and arr[2] and i<=j){
                c+=s.size()-j;
                arr[s[i]-'a']-=1;
                i++;
            }
            j++;
        }
        return c;
    }
};