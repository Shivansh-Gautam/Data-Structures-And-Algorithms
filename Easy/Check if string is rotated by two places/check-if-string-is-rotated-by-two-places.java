//{ Driver Code Starts
import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
    
	public static void main (String[] args) {
		Scanner sc = new Scanner(System.in);
		int t;
		t = sc.nextInt();
		String s12 = sc.nextLine();
		for(int i=0; i<t; i++){
		    String s1 = sc.nextLine();
		    String s2 = sc.nextLine();
		    
		    Solution obj = new Solution();
		    
		    boolean flag = obj.isRotated(s1, s2);
		    
		    if(flag == true) System.out.println("1");
		    else System.out.println("0");
		    
		}
	}
}
// } Driver Code Ends


class Solution
{
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    public static boolean isRotated(String str1, String str2)
    {
        // Your code here
          if(str1.length() == str2.length()){
            int n = str1.length();
            String duplex = str1+str1;
            HashSet<String> set = new HashSet<>();
            set.add(duplex.substring(2,n+2));
            set.add(duplex.substring(duplex.length()-n-2,duplex.length()-2));
            if(set.contains(str2)) return true;
        }
        
        return false;
    }
    
}