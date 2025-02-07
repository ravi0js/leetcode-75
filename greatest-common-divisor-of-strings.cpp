class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        // If concatenating str1 + str2 is not equal to str2 + str1, 
        // then there is no common divisor string.
        
        // For example, if str1 = "ABCABC" and str2 = "ABC", then:
        // str1 + str2 = "ABCABCABC" and str2 + str1 = "ABCABCABC".
        // Since they are equal, they share a common pattern.
        if (str1 + str2 != str2 + str1) {
            return "";  // No common divisor string exists, return an empty string.
        }

        // Compute the greatest common divisor (GCD) of the lengths of the two strings.
        // The GCD of the lengths will determine the length of the largest string
        // that can divide both str1 and str2.
        // For example, if str1 = "ABCABC" (length 6) and str2 = "ABC" (length 3),
        // the GCD of 6 and 3 is 3.
        int gcdLength = gcd(str1.size(), str2.size());

        // The largest string that can divide both is the prefix of str1 with length gcdLength.
        // Using the example above, the prefix of str1 with length 3 is "ABC".
        // This is the largest string that can divide both "ABCABC" and "ABC".
        return str1.substr(0, gcdLength);
    }
};