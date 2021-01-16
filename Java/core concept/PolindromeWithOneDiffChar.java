class Solution {
    public boolean validPalindrome(String s) {
        
        int i=0;
        int j=s.length()-1;
        char[] a = s.toLowerCase().toCharArray();
        int notPalindromeCounter=0;
        while(i<j){
            if(a[i]!=a[j])
                return isPalin(a,i+1,j) || isPalin(a,i,j-1);
            i++;
            j--;
        }
        return true;
    }
    
    public boolean isPalin(char[] a, int i, int j){
        while(i<j){
            if(a[i]!=a[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
}
