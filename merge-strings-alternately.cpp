/*
You are given two strings word1 and word2. Merge the strings by adding letters in alternating order, starting with word1. If a string is longer than the other, append the additional letters onto the end of the merged string.

Return the merged string.
*/
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string merged = "";
        int i = 0;
        
       while (i < word1.length() || i < word2.length()) {
            if (i < word1.length()) {
                merged += word1[i];
            }
            if (i < word2.length()) {
                merged += word2[i];
            }
            i++;
        }
        return merged;
    }
};

https://vilcart.dterp.in/crm_enquiry_list.php?ddl_search_int_status=&ddl_project=&cell=&enquiry_number=&ddl_search_source=&ddl_search_assigned_to=&ddl_enquiry_category=&dll_start_date=&dll_end_date=
// or
// python classes
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string merged = "";
        int i = 0, j = 0;
        
        while (i < word1.size() && j < word2.size()) {
            merged += word1[i++];
            merged += word2[j++];
        }
        
        while (i < word1.size()) {
            merged += word1[i++];
        }

        while (j < word2.size()) {
            merged += word2[j++];
        }
        return merged;
    }
};