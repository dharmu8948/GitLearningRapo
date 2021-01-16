import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    // Complete the makeAnagram function below.
    static int makeAnagram(String first, String second) {
    int flength=first.length();
    int slength=second.length();
    char f[]=first.toCharArray();
    char s[]=second.toCharArray();
    int count=0;
    int fcount=0;
    int scount=0;
    int ans=0;
    if(flength>slength)
    {
        for(int i=0;i<flength;i++)
        {
             for(int j=0;j<slength;j++)
             {
              if(f[i]==s[j])
              {
                  s[j]=0;
                  count++;
                  break;
             }
            }
        }
      ans=flength-count; 
    } 

    if(flength<slength)
    {
        for(int i=0;i<flength;i++)
        {
             for(int j=0;j<slength;j++)
             {
              if(f[i]==s[j])
              {
                  s[j]=0;
                  count++;
                  break;
             }
             }
        }
      ans=(flength+slength)-(2*count); 
    }
    else
    {
        for(int i=0;i<flength;i++)
        {
            for(int j=0;j<slength;j++)
            {
                if(f[i]==s[j])
                {
                    count++;
                    s[j]=0;
                    break;
                }
            }
        }
        ans=(flength-count)+(slength-count);
    }
    return ans;
}
    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        String a = scanner.nextLine();

        String b = scanner.nextLine();

        int res = makeAnagram(a, b);

        bufferedWriter.write(String.valueOf(res));
        bufferedWriter.newLine();

        bufferedWriter.close();

        scanner.close();
    }
}
