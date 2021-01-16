import java.util.*;
public class Main
{
    public static void main(String[] args)
    {
        int n, i, j, k = 0;
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        for(i=n; i>=1; --i)
        {
            for(j=0; j < n-i; ++j)
                System.out.print(" ");

            for(j=i; j <= i; ++j)
                System.out.print("* ");

            for(j=0; j < i-1; ++j)
                System.out.print("* ");

            System.out.print("\n");
        }

    }
}