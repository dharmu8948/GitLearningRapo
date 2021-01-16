public class Solution {
    public boolean isPalindrome(String s) {
        String actual = s.replaceAll("[^A-Za-z0-9]", "").toLowerCase();
        return actual.equals(new StringBuffer(actual).reverse().toString());
    }
}