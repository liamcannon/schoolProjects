//lcannon 
// array # 1
import java.util.Arrays;
import java.util.Scanner;

public class ArrayOne
{
   public static void main(String[] args)
   {
    int[] numList = new int[50];
    randomArray(numList);
    
    numListTotal(numList);
    
    Scanner scn = new Scanner(System.in);
    System.out.println("What do you think the median is going to be?");
    int med = scn.nextInt();
    median(med, numList);
    
    oddNums(numList);
    
   }
   public static int[] randomArray(int[] numList)
   {
      
      for(int x = 0; x<numList.length; x++)
      {
         numList[x] = (int)(1 + Math.random()*100);
      }
      for(int x = 0; x<numList.length; x++)
      {
         System.out.println(numList[x]);  
      } 
      return numList;
   }
   public static int numListTotal(int[] numList)
   {
      int total = 0;
      
      for(int x = 0; x < numList.length; x++)
      {
         total = total + numList[x];
      }
      System.out.println("Total of Array = " + total);
      
      return total;
   }
   public static boolean median(int n, int[] numList)
   {
      Arrays.sort(numList);
      int med = 0;
      med = (numList[25] + numList[26]) / 2;
      
      if(n == med)
      {
         System.out.println("Damb, you got it right! The median was " + med);
         return true;
      }
      else
      {
         System.out.println("The odds were against you, the median was " + med);
         return false;
      }
   }
   public static int oddNums(int[] numList)
   {
      int count = 0;
      for(int x = 0; x < numList.length; x++)
      {
         if((numList[x]%2) == 1)
         {
            count++;
         }
      }
      System.out.println("The total # of odd's = " + count);
      return count;
   }
}