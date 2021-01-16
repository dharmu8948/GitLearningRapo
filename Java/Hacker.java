
/*
import java.util.*;
class Hacker {
    public static void main(String[] args) {
        Class student = Student.class; // uses class literal, not a function.
        Method[] methods = student.getDeclaredMethods();

        /// Get names from Methods 
        ArrayList<String> methodNames = new ArrayList<>();
        for (Method method : methods) {
            methodNames.add(method.getName());
        }
        
        // Sort and print names 
        Collections.sort(methodNames);
        for (String name: methodNames) {
            System.out.println(name);
        }
    }
}



================================================================================================================*/
import java.util.*;
public class MinAmongAllPair {

    public static void main(String args[]){
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int[] arr = new int[5];
        for(int i = 0;i<n;i++){
            switch (scan.nextInt()){
            case 1 :
                arr[0]++;
                break;
            case 2 :
                arr[1]++;
                break;
            case 3 :
                arr[2]++;
                break;
            case 4 :
                arr[3]++;
                break;
            case 5 :
                arr[4]++;
                break;
            }
        }
        int highest = 0;
        int answer = 0;
        for(int i = 0;i<arr.length;i++){
            if(arr[i]>highest){
                highest = arr[i];
                answer= i+1;
            }
        }
        System.out.println(answer);
    }
}