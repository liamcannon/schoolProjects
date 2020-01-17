// lcannon 9/18/18
// name and grade thing

import java.util.Scanner;

public class namegrade
{
   public static void main(String[] args)
   {
   Scanner reader = new Scanner(System.in);
   System.out.println("Please enter your full name: ");
   
   String fname = reader.nextLine();
   
   if(fname.equals("Ian Miller") || fname.equals("ian miller") || fname.equals("ian") || fname.equals("Ian"))
   {
      System.out.println("Get pranked looser no chance you're using my program");
   
   }
   else if(fname.equals("Doug Moore") || fname.equals("doug moore") || fname.equals ("doug") || fname.equals("Doug"))
   {
      System.out.println("Doug you're too special no program fo you");
   }
   else  
   {
   System.out.println("What grade are you currently in: ");
   String grade = reader.nextLine();
   System.out.println("Welcome to " + grade+ " Grade " +fname);
   }

   }
}
