//lcannon

import java.util.Scanner;

public class factor
{
   public static void main(String[] args)
   {
   Scanner scanner = new Scanner(System.in);
   
   System.out.println("Enter the number you want to see all the factors of");
   int one = scanner.nextInt();
   
      for(int count = 1; count<=one; count++)
      {
      int answer = one % count;
         if(answer == 0)
         {
         System.out.println(count);
         }
      }
   }
}