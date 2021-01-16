class Solution {
    public int reverse(int x) {
        int temp = Math.abs(x);
        int num = 0;
        while (temp > 0) {
            int rem = temp % 10;
            if (((Integer.MAX_VALUE - rem) / 10) < num)
                return 0;
            num = (num * 10) + rem;
            temp = temp / 10;
        }
        return x > 0 ? num : num * -1;
    }
}