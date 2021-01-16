import java.io.*;
import java.util.*;


class Comparator{
    boolean compare(int a,int b)
    {if(a==b)
    return true;
    else
    return false;
    }
    boolean compare(String a,String b)
    {if(a.equals(b))
    return true;
    else
    return false;
    }
    boolean compare(int[] a,int[] b){
         int c = a.length-1;
    int d = b.length-1;
    {if(c==d)
    {
        for(int i=0;i<a.length;i++){
            if(a[i]!=b[i])
            return false;
        }
        return true;
    }
    return false;
    }
    }

}

class Solution {